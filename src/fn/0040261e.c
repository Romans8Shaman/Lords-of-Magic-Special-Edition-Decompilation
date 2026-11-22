/* Hand C for lomse.exe FUN_0040261e @ 0x0040261e (44 bytes). g237.
 * Mid-function tail of already-C 00402330, reached only by a je from the
 * parent's original mid-body (raw range 00402335-0040261e). No frame of
 * its own: incoming esi/ebp/ebx are stdcall args for 004019f0 (purge 12);
 * the `mov ecx, edi` before that call is dead (004019f0 immediately
 * reloads ecx from [esp+4]). If 004019f0 returns 0, do the parent
 * epilogue (same 10 bytes as 004023ce). Otherwise thiscall
 * 0041efa0(esi, 3) and fastcall 00407900(esi), then the same epilogue:
 * pop edi/esi/ebp/ebx, add esp,8, ret 4. A naked shim only forwards the
 * incoming registers to C and then runs that epilogue.
 */
#include "lom.h"

#define LOM_SELF_0040261e 1

#ifndef G237_NATIVE_TEST
#define FUN_004019f0 ((unsigned (__stdcall *)(unsigned, unsigned, unsigned))0x004019f0)
#define FUN_0041efa0 ((unsigned (__thiscall *)(unsigned, unsigned))0x0041efa0)
#define FUN_00407900 ((unsigned (__fastcall *)(unsigned))0x00407900)
#else
unsigned __stdcall stub_004019f0(unsigned a, unsigned b, unsigned c);
unsigned __thiscall stub_0041efa0(unsigned this, unsigned arg);
unsigned __fastcall stub_00407900(unsigned a);
#define FUN_004019f0 stub_004019f0
#define FUN_0041efa0 stub_0041efa0
#define FUN_00407900 stub_00407900
#endif

unsigned lom_body_0040261e(unsigned esi, unsigned ebp_val, unsigned ebx)
    __asm__("lom_body_0040261e");

unsigned lom_body_0040261e(unsigned esi, unsigned ebp_val, unsigned ebx)
{
  unsigned eax = FUN_004019f0(esi, ebp_val, ebx);
  if (eax == 0)
    return 0;
  FUN_0041efa0(esi, 3);
  return FUN_00407900(esi);
}

__attribute__((naked)) void rb_0040261e(void)
{
  __asm__(
    "  pushl %ebx\n"
    "  pushl %ebp\n"
    "  pushl %esi\n"
    "  call lom_body_0040261e\n"
    "  addl $12, %esp\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebp\n"
    "  popl %ebx\n"
    "  addl $8, %esp\n"
    "  retl $4\n"
  );
}
