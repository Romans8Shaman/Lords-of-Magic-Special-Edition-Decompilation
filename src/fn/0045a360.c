/* Rebuilt from lomse.exe FUN_0045a360 @ 0x0045a360 (171 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0045a360 1
void __cdecl rb_0045a360(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_40[16];
#define local_40 (*(_t_local_40 *)(_fr + 0x0))
  
  local_40[5] = 0xffffffff;
  iVar7 = (int)param_3;
  local_40[6] = 0xffffffff;
  local_40[7] = 0xffffffff;
  local_40[0xb] = 0xffffffff;
  local_40[0xc] = 0xffffffff;
  local_40[0xd] = 0xffffffff;
  iVar1 = *param_2;
  local_40[0] = 0;
  local_40[4] = 0;
  local_40[10] = 0;
  local_40[0xe] = 0;
  uVar6 = (int)(iVar7 + 2U) >> 0x1f;
  local_40[1] = 1;
  local_40[2] = 1;
  local_40[3] = 1;
  iVar5 = ((iVar7 + 2U ^ uVar6) - uVar6 & 7 ^ uVar6) - uVar6;
  local_40[8] = 1;
  local_40[9] = 1;
  local_40[0xf] = 1;
  iVar2 = *param_1;
  iVar3 = local_40[iVar5 + 8];
  iVar4 = local_40[iVar7 + 8];
  *param_1 = local_40[iVar5] * iVar2 + local_40[iVar7] * iVar1;
  *param_2 = iVar3 * iVar2 + iVar4 * iVar1;
  return;
#undef local_40
}
