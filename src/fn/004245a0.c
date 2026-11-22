/* Rebuilt from lomse.exe FUN_004245a0 @ 0x004245a0 (312 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae970 (*(int *)0x005ae970)
#define FUN_00413180 ((int (__thiscall *)(void *, int))0x00413180)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_0052bb10 ((undefined4 (__thiscall *)(void *, int, int))0x0052bb10)

#define LOM_SELF_004245a0 1
undefined4 __fastcall rb_004245a0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1[10],2);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_1[10],3);
  uVar3 = FUN_00482ac0(&DAT_005aa12c,param_1[10],1);
  if ((param_1[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     ((*(byte *)(param_1 + 0xc) & 0x20) != 0)) {
    local_4 = param_1[10];
  }
  else {
    local_4 = -1;
  }
  iVar4 = FUN_00413180(param_1,*(int *)(DAT_005ae970 +
                                       ((param_1[0x11] - 4U & 7) + param_1[7] * 8) * 4));
  if (uVar1 == 0) {
    if (uVar2 == 0) {
      if (uVar3 == 0) {
        return 0;
      }
      *(undefined4 *)(uVar3 + 0x58) = 0;
      uVar1 = param_1[0xc] & 0xfeffffff;
    }
    else {
      *(undefined4 *)(uVar2 + 0x44) = 0;
      uVar1 = param_1[0xc] & 0xffbfffff;
    }
  }
  else {
    *(undefined4 *)(uVar1 + 0x48) = 0;
    uVar1 = param_1[0xc] & 0xff7fffff;
  }
  param_1[0xc] = uVar1;
  iVar4 = FUN_004a7d50(&DAT_005ae958,param_1,iVar4);
  if (param_1[0x16d] != -1) {
    puVar5 = FUN_00485080(&DAT_005aa12c,param_1[0x16d],0x2f);
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[0x16c] = iVar4;
    }
  }
  ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x2c)))(param_1);
  if (-1 < local_4) {
    if (param_1[0x13] < 1) {
      iVar4 = -1;
    }
    else {
      iVar4 = param_1[10];
    }
    FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,local_4,iVar4);
  }
  return 1;
#undef local_4
}
