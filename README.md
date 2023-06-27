# copyjit

Inspired by [copy-and-patch](http://fredrikbk.com/publications/copy-and-patch.pdf),
but what if we didn't have to patch anything?

The basic idea is that we use the compiler to generate 'templates' for us, that
we can then copy in place. This relies heavily on continuation passing, meaning
that all operations defined by the jit library have to allow for continuation
passing optimizations to happen. In copy-and-patch, the templates are filled in
at runtime with whatever values the user chooses, but since this relies on
parsin ELF relocations, the library will have to be ported to different
platforms. Not a huge issue, but if we could avoid runtime patching of
relocations we could (in theory) build a jit library that's architecture agnostic,
while having very low latencies.

## Building

+ `make`

This will produce a simple test program, `copyjit`, which just generates a
procedure that sums the first billion numbers.

## Idea

The idea here is to generate a number of continuation passing procedures,
and string them together at runtime. To avoid patching at runtime, all
procedures have a fixed signature, defined by `DEFINE_OP` in `ops/common.h`.

Each procedure defines one operation, and each operation passes the execution on
to operations that directly follow it in memory. In other words, the generated
procedures are copied into place in memory to generate executable code.

This implementation uses four pseudo-registers and one stack pointer.
One pseudo-register is just an argument that operations pass to eachother, but
since most architectures pass arguments in registers, a pseudo-register will
likely map to a real register. The registers are `a`, `x`, `y`, `o`.
They are loosely based on a 6502-style architecture where the operations are
defined in terms of fixed registers, as this seems the easiest to implement.
`a` is intended as an accumulator, `x` and `y` are general purpose and `o` is
for offsets or immediate values. Procedures are possible to implement, but I
don't have any examples at the moment. The argument passing would likely be done
on the stack, though, meaning that this jit method is likely on the slower end
of jit compilers.

I don't know if the architecture I'm going with is necessarily optimal for the
task, it's just the first one that popped into my mind.

## Implementation (or, hacks)

Since we would optimally like to just copy pre-generated binary code one block
after another, each operation should jump to the address following the last
instruction in the operation. However, due to continuation passing, this jump
is usually the last step in an operation, so we would like to filter it out
whenever possible to in crease execution speed and minimize binary size.

Essentially, we generate an empty operation `lib/empty`
that just falls through to another operation, and then we can compare this empty
operation to other operations. If we find a procedure epilogue that matches the
empty operation, we can (fairly safely?) filter the epilogue out, saving on code
size and increasing runtime performance. GCC's `-fno-schedule-insns` and
`-fno-schedule-insn2` make it more unlikely that the epilogue has other
instructions mixed in, increasing the chances of succesful filtration.
The code should still work without the filtration, but is a bit slower.

Implementing this filtering is arguably the most hacky part of the project.

### First implementation attempt

The first implementation took the address of a label as the
continuation function to produce a jump that technically lands within the procedure
itself, with the effect of just falling directly through. Essentially:

```
void some_operation(int arg0, int arg2)
{
	do_work(arg0, arg2);
	((op_call)(&&_next_op))(arg0, arg2);
	_next_op:
}
```

This requires a GCC extension as taking the address of a label is not part of standard C.

Using a label as a continuation point seems to have uncovered some bugs in the
GNU assembler, as the compiler itself generates seemingly 'correct' assembly
but the final binaries are incorrect. This method works on x86 with the GNU toolchain,
with at least RISC-V and ARM showing the previously mentioned issues. LLVM seems to work
on RISC-V and x86, but fails on ARM. I haven't tested other systems yet.

### Second implementation attempt

Instead of relying on labels, we try to use a custom linker script that places a symbol
directly after the procedure. This is the current implementation and seems to work on x86
and RISCV without modifications. AARCH64 does work, though unfortunately I had to add
AARCH64 specific compilation options to force the tiny memory model.
Not a huge issue, but considering the dream is
to have a completely architecture agnostic jit library, this sort of goes against that.

Still haven't tested other architectures. While somewhat hacky,
the method seems to be more reliable than the first attempt.

## Possible future improvements

I suspect immedate generation is a bottleneck at the moment. Since we only
generate 'pure' functions, we can't pass them any data beyond register
arguments. This means that we have to generate one operation for each immediate
value we want to be able to load, which bloats up the library quite a bit and
(likely) makes loading large immedate values to registers slow.
However, I suspect it might be possible to 'allocate' some extra
bytes in the `.text` sections that the operation could refer to, and whose
address is known so that the jit compiler could populate the area with some
data. While this would kind of be patching at runtime, it could still be done
architecture agnostically. In pseudo-assembly form, something like:

```
1: does_some_work
2: load 4
3: jump 5
4: 0x1234 (data) <-- last four bytes of an operation reserved for data
5: next_operation
```

This, however, isn't implemented at the moment. Also, not all operations should
reserve data as extra jumps are most likely pretty costly, and data should be
reserved to instructions that load immediate values and the like.

EDIT: At least partially implemented. Could still be improved by trying to figure
out when an immediate load is faster than trying to construct a value in register.

I suspect it would be reasonably easy to use two linker scripts, one for operations
that shouldn't take immedates and one for operations that should, with the difference
just being that one directly falls through and another jumps over some data appended to
it at runime.

## Arch status

All GCC test cases were cross-compiled with Debian's prebuilt compiler packages
(`gcc-aarch64-linux-gnu` etc.) and run with qemu usermode emulation with
Debian's prebuilt `qemu-user` package. Similarly, LLVM test cases were compiled
with the same architecture string as the GCC tests.

For instance, a GCC test case:
```
make CROSS_COMPILE=riscv64-linux-gnu- ARCH=riscv64 -j$(nproc)
qemu-riscv64 -L /usr/riscv64-linux-gnu ./copyjit
```

And an LLVM test case:
```
make CROSS_COMPILE=riscv64-linux-gnu- ARCH=riscv64 -j$(nproc)
qemu-riscv64 -L /usr/riscv64-linux-gnu ./copyjit
```

Some of the 'broken' architectures may end up working with some compiler flag
tweaks, similar to aarch64.

The test setup is far from optimal and ideally I would set up some automatic CI
that would probably be easier to parse. Additionally, I haven't yet put that
much time into figuring out why each arch fails, but I added some of my thoughts
as to what the issue seems to be. 

Linux:

GCC toolchain:

OK:
+ `x86_64`
+ `i686`
+ `riscv64`
+ `aarch64`
+ `arm`

Broken:
+ `mips64el` (possibly due to bug in instruction cache flushing? otherwise unsure)
+ `mips64`
+ `mipsel`
+ `mips`
+ `sparc64` (fails to generate continuation passing)
+ `sh4` (fails to generate continuation passing (I think?))
+ `s390x` (doesn't crash, but seems to jump over some code or something?)
+ `m68k` (segfault, unclear why)
+ `powerpc64le` (fails to generate continuation passing)
+ `powerpc64`
+ `powerpc`

Fails to compile:
+ `hppa64` (missing string.h?)
+ `hppa` ('undefined reference to `$$dyncall`)
+ `alpha` (`'internal compiler error: in extract_insn, at recog.cc:2791'`)

Untestable (by me at least):
+ `arc` (compiles but doesn't have a qemu user emulator)

LLVM toolchain:

OK:
+ `x86_64`
+ `aarch64`
+ `riscv64`

Broken:
+ `i686` (fails to generate continuation passing)
+ `arm` (unsure, possibly some branch issue)

TODO: continue testing LLVM
