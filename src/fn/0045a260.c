/* Rebuilt from lomse.exe FUN_0045a260 @ 0x0045a260 (243 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0045a360 ((undefined4 (__cdecl *)(int *, int *, char))0x0045a360)

#define LOM_SELF_0045a260 1
void __thiscall
rb_0045a260(void *this, int volatile param_1, int volatile param_2, int volatile param_3, undefined4 volatile param_4, int *volatile param_5, int *volatile param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x58] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_50[20];
#define local_50 (*(_t_local_50 *)(_fr + 0x0))
  
  local_50[10] = 2;
  local_50[0xb] = 2;
  local_50[0xe] = 2;
  local_50[0x11] = 2;
  local_50[0x12] = 1;
  local_50[0x13] = 1;
  local_50[1] = 1;
  local_50[3] = 0;
  local_50[9] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0x10] = 0;
  local_50[0] = 0;
  local_50[6] = 0;
  iVar1 = *(int *)((int)this + param_1 * 4);
  local_50[2] = 0xffffffff;
  local_50[7] = 0xffffffff;
  local_50[8] = 0xffffffff;
  iVar2 = local_50[iVar1];
  local_50[0xf] = 0xfffffffe;
  local_50[4] = 6;
  iVar3 = local_50[param_3 + 0xc];
  local_50[5] = 0xfffffffa;
  iVar4 = local_50[param_2 + 3];
  param_2 = local_50[iVar1 + 6] + local_50[param_3 + 0x10] + local_50[param_2 + 9];
  *(int *)((int)this + param_1 * 4) = iVar1 + 1;
  param_1 = iVar2 + iVar3 + iVar4;
  FUN_0045a360(&param_1,&param_2,(char)param_4);
  *param_5 = *param_5 + param_1;
  *param_6 = *param_6 - param_2;
  return;
#undef local_50
}
