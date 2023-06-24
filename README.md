# copyjit

Inspired by [copy-and-path](http://fredrikbk.com/publications/copy-and-patch.pdf),
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
procedure that sums the first billion digits.

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

Compilers probably weren't quite designed for this, so we rely on some pretty
hacky things.

Currently this implementation takes the address of a label as the
continuation function, which allows us to filter out the continuation jumps and
gives us a pretty major speed boost. Essentially, we generate an empty operation
that just falls through to another operation, and then we can compare this empty
operation to other operations. If we find a procedure epilogue that matches the
empty operation, we can (fairly safely?) filter the epilogue out, saving on code
size and increasing runtime performance. GCC's `-fno-schedule-insns` and
`-fno-schedule-insn2` make it more unlikely that the epilogue has other
instructions mixed in, increasing the chances of succesful filtration.
The code should still work without the filtration, but is a bit slower.

Using a label as a continuation point seems to have uncovered some bugs in the
GNU assembler, as the compiler itself generates seemingly 'correct' assembly
but the final binaries are incorrect. Currently x86 works with the GNU toolchain,
with at least RISC-V and ARM showing the previously mentioned issues. LLVM seems to work
on RISC-V and x86, but fails on ARM. I haven't tested other systems yet.

I suspect immedate generation is a bottleneck at the moment. Since we can only
generate 'pure' functions, we can't pass them any data beyond register
arguments. This means that we have to generate one operation for each immediate
value we want to be able to load, which bloats up the library quite a bit and
(likely) maked loading large immedate values to registers slow.
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

This however isn't implemented at the moment. Also, not all operations should
reserve data as extra jumps are most likely pretty costly, and data should be
reserved to instructions that load immediate values and the like.
