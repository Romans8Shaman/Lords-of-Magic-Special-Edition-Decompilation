/* Hand C for lomse.exe FUN_00539da6 @ 0x00539da6 (24 bytes, stdcall ret $4).
 * __NLG_Notify-style helper (g230). The entry has no frame of its own: it
 * reads 8(%ebp) from the *caller's* frame, plus eax and ebp, and stores them
 * into __NLG_Destination at 0x5747d0 (offsets +8, +4, +0xc). Preserves
 * ebx/ecx (and edx, which the original does not touch). Mid-entry 00539db0
 * (target of __NLG_Notify1 at 00539d9d) stays in the original bytes
 * (standalone bodyref); only the 00539da6 entry is rebuilt.
 *
 * The three stores live in C. A naked shim does not install a frame, captures
 * the caller's 8(%ebp)/eax/ebp, preserves eax/ecx/edx, and returns with ret $4.
 */
#include "lom.h"

#define LOM_SELF_00539da6 1

#define NLG_DEST ((unsigned *)0x005747d0)

void lom_body_00539da6(unsigned eax_v, unsigned ebp_v, unsigned arg)
    __asm__("lom_body_00539da6");

void lom_body_00539da6(unsigned eax_v, unsigned ebp_v, unsigned arg)
{
  NLG_DEST[2] = arg;
  NLG_DEST[1] = eax_v;
  NLG_DEST[3] = ebp_v;
}

__attribute__((naked)) void rb_00539da6(void)
{
  __asm__(
    "  pushl %ecx\n"
    "  pushl %edx\n"
    "  pushl %eax\n"
    "  pushl 8(%ebp)\n"
    "  pushl %ebp\n"
    "  pushl %eax\n"
    "  call lom_body_00539da6\n"
    "  addl $12, %esp\n"
    "  popl %eax\n"
    "  popl %edx\n"
    "  popl %ecx\n"
    "  retl $4\n"
  );
}
