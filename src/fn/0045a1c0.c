/* Rebuilt from lomse.exe FUN_0045a1c0 @ 0x0045a1c0 (159 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0045a360 ((undefined4 (__cdecl *)(int *, int *, char))0x0045a360)

#define LOM_SELF_0045a1c0 1
void __cdecl rb_0045a1c0(int volatile param_1, undefined4 volatile param_2, int *volatile param_3, int *volatile param_4)

{
  int iVar1;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20[8];
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
  
  local_20[1] = 0;
  local_20[2] = 0xfffffffe;
  local_20[3] = 2;
  local_20[4] = 0xfffffffc;
  local_20[5] = 4;
  local_20[6] = 0xfffffffa;
  local_20[7] = 6;
  iVar1 = (int)((ulonglong)((longlong)param_1 * 0x6db6db6d) >> 0x20) - param_1;
  local_20[0] = ((iVar1 >> 2) - (iVar1 >> 0x1f)) * 2;
  param_1 = local_20[param_1 % 7 + 1];
  FUN_0045a360(&param_1,local_20,(char)param_2);
  *param_3 = *param_3 + param_1;
  *param_4 = *param_4 - local_20[0];
  return;
#undef local_20
}
