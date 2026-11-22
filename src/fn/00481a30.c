/* Rebuilt from lomse.exe FUN_00481a30 @ 0x00481a30 (264 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define FUN_004bb0c0 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x004bb0c0)
#define FUN_004bb0e0 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x004bb0e0)
#define FUN_004bb560 ((undefined4 (__fastcall *)(int))0x004bb560)
#define FUN_004ef340 ((undefined4 (__fastcall *)(undefined4 *))0x004ef340)

#define LOM_SELF_00481a30 1
void __fastcall rb_00481a30(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  int iVar1;
  int iVar2;
  undefined4 unused_reg_1_00;
  int iVar3;
  
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    iVar2 = *(int *)(param_1 + 0x6a8);
    if ((iVar2 < 0) || (0xf < iVar2)) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x5068 + iVar2 * 0x1d84;
    }
    iVar1 = *(int *)(param_1 + 0xc84);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1 + 0x5068 + iVar1 * 0x1d84;
    }
    if ((iVar2 != 0) && (iVar3 != 0)) {
      if ((*(byte *)(iVar2 + 0x15d8) & 2) != 0) {
        FUN_004bb0c0(iVar2,iVar1,unused_stack_0);
        iVar1 = 0;
      }
      if ((*(byte *)(iVar3 + 0x15d8) & 2) != 0) {
        FUN_004bb0c0(iVar3,iVar1,unused_stack_0);
        return;
      }
    }
  }
  else {
    iVar2 = FUN_004ef340((undefined4 *)(param_1 + 0x22ec8));
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x228a8);
      if ((iVar2 < 0) || (0xf < iVar2)) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_1 + 0x5068 + iVar2 * 0x1d84;
      }
      if ((*(byte *)(iVar2 + 0x15d8) & 2) != 0) {
        iVar1 = FUN_004bb560(iVar2);
        if (iVar1 != 0) {
          FUN_004bb0e0(iVar2,unused_reg_1_00,unused_stack_0);
        }
      }
    }
  }
  return;
}
