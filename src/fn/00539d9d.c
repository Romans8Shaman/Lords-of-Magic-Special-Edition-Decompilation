/* Hand C for lomse.exe __NLG_Notify1 @ 0x00539d9d (9 bytes, stdcall ret $4).
 * g232. The original pushes ebx/ecx, sets ebx = 0x5747d0, and jmp's into
 * mid-entry 00539db0 of 00539da6, which stores ecx/eax/ebp into
 * __NLG_Destination (+8/+4/+0xc) and ret $4. This entry is hooked on its
 * own; 00539db0 stays original bytes (bodyref of g230).
 *
 * The three stores live in C (ecx is the incoming register, not 8(%ebp)).
 * A naked shim does not install a frame, captures eax/ecx/ebp, preserves
 * eax/ecx/edx, and returns with ret $4.
 */
#include "lom.h"

#define LOM_SELF_00539d9d 1

#define NLG_DEST ((unsigned *)0x005747d0)

void lom_body_00539d9d(unsigned eax_v, unsigned ebp_v, unsigned ecx_v)
    __asm__("lom_body_00539d9d");

void lom_body_00539d9d(unsigned eax_v, unsigned ebp_v, unsigned ecx_v)
{
  NLG_DEST[2] = ecx_v;
  NLG_DEST[1] = eax_v;
  NLG_DEST[3] = ebp_v;
}

__attribute__((naked)) void rb_00539d9d(void)
{
  __asm__(
    "  pushl %ecx\n"
    "  pushl %edx\n"
    "  pushl %eax\n"
    "  pushl %ecx\n"
    "  pushl %ebp\n"
    "  pushl %eax\n"
    "  call lom_body_00539d9d\n"
    "  addl $12, %esp\n"
    "  popl %eax\n"
    "  popl %edx\n"
    "  popl %ecx\n"
    "  retl $4\n"
  );
}
