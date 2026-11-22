/* Rebuilt from lomse.exe __global_unwind2 @ 0x00539cd0 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match.
 * HAND FIX: RtlUnwind TargetIp is mid-entry rb_00539ce8 (the original pop-regs
 * epilogue), not the original VA 0x00539ce8, so the body can be jmp+int3.
 */
#include "lom.h"

#ifndef G253_NATIVE_TEST
__attribute__((used)) void *g253_RtlUnwind = (void *)0x00548e00;
#endif

#define LOM_SELF_00539cd0 1

/* Mid-entry: after RtlUnwind; pops the regs this prolog pushed, then ret. */
__attribute__((naked)) void rb_00539ce8(void);
__attribute__((naked)) void rb_00539cd0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  pushl %ebp\n"
    "  pushl $0\n"
    "  pushl $0\n"
    "  pushl $_rb_00539ce8\n"
    "  pushl 8(%ebp)\n"
#ifndef G253_NATIVE_TEST
    "  calll *_g253_RtlUnwind\n"
#else
    "  calll stub_RtlUnwind\n"
#endif
    ".globl _rb_00539ce8\n"
    "_rb_00539ce8:\n"
    "  popl %ebp\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}
