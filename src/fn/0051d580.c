/* Rebuilt from lomse.exe FUN_0051d580 @ 0x0051d580 (294 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004c5e60 ((uint (__thiscall *)(void *, int))0x004c5e60)
#define FUN_004c5ec0 ((int (__thiscall *)(void *, int))0x004c5ec0)
#define FUN_004c6fb0 ((undefined4 * (__stdcall *)(void))0x004c6fb0)
#define FUN_004c8660 ((undefined4 (__fastcall *)(int))0x004c8660)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_0051c100 ((undefined4 (__thiscall *)(void *, int))0x0051c100)
#define s_no_player_0055c710 (*(char (*)[])0x0055c710)

#define LOM_SELF_0051d580 1
undefined4 __thiscall rb_0051d580(void *this,int *param_1)

{
  undefined4 *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar2 = param_1[7];
  this_00 = FUN_004c6fb0();
  uVar1 = FUN_004c5e60(this_00,iVar2);
  iVar2 = FUN_004c5ec0(this_00,uVar1);
  iVar3 = FUN_0051c100(this,iVar2);
  if (iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)((int)this + 0x68);
  iVar4 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
  if (iVar4 == iVar3) {
    return 1;
  }
  if ((iVar3 < 0) || (0xf < iVar3)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_005af194 + iVar3 * 0x1d84;
  }
  if (puVar5 == (undefined *)0x0) {
    FUN_005047d0(s_no_player_0055c710);
    return 0;
  }
  iVar3 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
  if ((iVar3 < 0) || (0xf < iVar3)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar5 + iVar3 * 0x88 + 0xd28;
  }
  if (puVar5 != (undefined *)0x0) {
    if ((puVar5[8] & 0x20) != 0) {
      return 1;
    }
    iVar3 = FUN_004c8660(iVar2);
    iVar4 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
    if ((iVar3 == iVar4) && ((puVar5[8] & 2) != 0)) {
      return 1;
    }
    iVar2 = FUN_004c8660(iVar2);
    if ((iVar2 != *(int *)((int)this + 0x68)) && ((puVar5[8] & 8) != 0)) {
      return 1;
    }
  }
  return 0;
}
