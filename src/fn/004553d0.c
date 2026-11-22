/* Rebuilt from lomse.exe FUN_004553d0 @ 0x004553d0 (229 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define DAT_005cd304 (*(undefined *)0x005cd304)
#define FUN_004b0ee0 ((int (__thiscall *)(void *, int))0x004b0ee0)
#define FUN_0050cff0 ((undefined4 (__fastcall *)(int))0x0050cff0)
#define FUN_00523160 ((undefined4 (__fastcall *)(int))0x00523160)

#define LOM_SELF_004553d0 1
void __fastcall rb_004553d0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b0ee0(&DAT_005cd304,*param_1);
  if (iVar1 != 0) {
    FUN_0050cff0(iVar1);
  }
  iVar1 = FUN_004b0ee0(&DAT_005cd304,param_1[1]);
  if (iVar1 != 0) {
    FUN_0050cff0(iVar1);
  }
  iVar1 = FUN_004b0ee0(&DAT_005cd304,param_1[2]);
  if (iVar1 != 0) {
    FUN_0050cff0(iVar1);
  }
  iVar1 = FUN_004b0ee0(&DAT_005cd304,param_1[3]);
  if (iVar1 != 0) {
    FUN_0050cff0(iVar1);
  }
  iVar1 = FUN_004b0ee0(&DAT_005cd304,param_1[4]);
  if (iVar1 != 0) {
    FUN_0050cff0(iVar1);
  }
  iVar1 = param_1[6];
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + iVar1 * 1000;
  }
  if (iVar1 != 0) {
    FUN_00523160(iVar1);
  }
  iVar1 = param_1[7];
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + iVar1 * 1000;
  }
  if (iVar1 != 0) {
    FUN_00523160(iVar1);
  }
  return;
}
