/* Rebuilt from lomse.exe FUN_00543e90 @ 0x00543e90 (463 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00543ce0 ((undefined4 (__cdecl *)(int, int))0x00543ce0)
#define FUN_00543d80 ((undefined4 (__cdecl *)(int, undefined4 *))0x00543d80)
#define FUN_00543da0 ((undefined4 (__cdecl *)(undefined4 *))0x00543da0)
#define FUN_00543db0 ((undefined4 (__cdecl *)(int *))0x00543db0)
#define FUN_00543dd0 ((undefined4 (__cdecl *)(uint *, int))0x00543dd0)

#define LOM_SELF_00543e90 1
undefined4 __cdecl rb_00543e90(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_18;
  typedef uint _t_local_14;
  typedef int _t_local_10;
  typedef undefined4 _t_local_c[3];
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
  
  uVar1 = param_1[5];
  local_14 = *(uint *)(param_1 + 1);
  local_18 = *(uint *)(param_1 + 3);
  uVar4 = uVar1 & 0x7fff;
  iVar5 = uVar4 - 0x3fff;
  local_10 = (uint)*param_1 << 0x10;
  if (iVar5 == -0x3fff) {
    iVar5 = 0;
    iVar2 = FUN_00543db0((int *)&local_18);
    if (iVar2 == 0) {
      FUN_00543da0(&local_18);
      uVar3 = 2;
      goto LAB_00544011;
    }
  }
  else {
    FUN_00543d80((int)local_c,&local_18);
    iVar2 = FUN_00543ce0((int)&local_18,param_3[2]);
    if (iVar2 != 0) {
      iVar5 = uVar4 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar5 < iVar2 - param_3[2]) {
      FUN_00543da0(&local_18);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_00544011;
    }
    if (iVar5 <= iVar2) {
      FUN_00543d80((int)&local_18,local_c);
      FUN_00543dd0(&local_18,iVar2 - iVar5);
      FUN_00543ce0((int)&local_18,param_3[2]);
      FUN_00543dd0(&local_18,param_3[3] + 1);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_00544011;
    }
    if (*param_3 <= iVar5) {
      FUN_00543da0(&local_18);
      local_18 = local_18 | 0x80000000;
      FUN_00543dd0(&local_18,param_3[3]);
      iVar5 = param_3[5] + *param_3;
      uVar3 = 1;
      goto LAB_00544011;
    }
    iVar5 = param_3[5] + iVar5;
    local_18 = local_18 & 0x7fffffff;
    FUN_00543dd0(&local_18,param_3[3]);
  }
  uVar3 = 0;
LAB_00544011:
  local_18 = iVar5 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_18;
  if (param_3[4] == 0x40) {
    param_2[1] = local_18;
    *param_2 = local_14;
    return uVar3;
  }
  if (param_3[4] == 0x20) {
    *param_2 = local_18;
  }
  return uVar3;
#undef local_18
#undef local_14
#undef local_10
#undef local_c
}
