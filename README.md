Idea: try copy-and-patch, but without patching to make it 'easier' to implement.

Essentially, build a tool that generates a bunch of operations (one per file?)
all with identical signatures, then maybe generate binary objdump of each procedure
and drop the last setup for jump (generate noop and filter all matching bytes
from other procedures?) and finally generate a header file or something with all
the function bytes. Then it should be possible to just copy them into place?

See example what.c, which generates a noop. This noop is extracted
with `objcopy -j .text -Obinary what.o` into `what.bin` which is essentially
the 'jump to next bit' that we want to remove.

(note that deleting the final call stuff is just opportunistic, and might not
 always be possible?)
(add -fno-schedule-insns -fno-schedule-insns2 for increased chance of generating
 identical epilogues)

Additionally, it might be possible to write some data into the execution stream
with inline assembly after the jump, though that feels so hacky that I might
skip it for now...
