/* Rebuilt from lomse.exe FUN_00523160 @ 0x00523160 (247 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492850 ((int (__thiscall *)(void *, int))0x00492850)
#define FUN_0049ab20 ((undefined4 (__fastcall *)(int *))0x0049ab20)
#define FUN_004f6670 ((undefined4 (__thiscall *)(void *, int))0x004f6670)

#define LOM_SELF_00523160 1
void __fastcall rb_00523160(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00492850(&DAT_005a7b50,*(int *)(param_1 + 0x3c0));
  if (piVar1 != (int *)0x0) {
    FUN_0049ab20(piVar1);
    FUN_004f6670(&DAT_00584ae8,(int)piVar1);
  }
  *(undefined4 *)(param_1 + 0x3d4) = 0xffffffff;
  piVar1 = (int *)FUN_00492850(&DAT_005a7b50,*(int *)(param_1 + 0x3c4));
  if (piVar1 != (int *)0x0) {
    FUN_0049ab20(piVar1);
    FUN_004f6670(&DAT_00584ae8,(int)piVar1);
  }
  *(undefined4 *)(param_1 + 0x3d8) = 0xffffffff;
  piVar1 = (int *)FUN_00492850(&DAT_005a7b50,*(int *)(param_1 + 0x3c8));
  if (piVar1 != (int *)0x0) {
    FUN_0049ab20(piVar1);
    FUN_004f6670(&DAT_00584ae8,(int)piVar1);
  }
  *(undefined4 *)(param_1 + 0x3dc) = 0xffffffff;
  piVar1 = (int *)FUN_00492850(&DAT_005a7b50,*(int *)(param_1 + 0x3cc));
  if (piVar1 != (int *)0x0) {
    FUN_0049ab20(piVar1);
    FUN_004f6670(&DAT_00584ae8,(int)piVar1);
  }
  *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
  piVar1 = (int *)FUN_00492850(&DAT_005a7b50,*(int *)(param_1 + 0x3d0));
  if (piVar1 != (int *)0x0) {
    FUN_0049ab20(piVar1);
    FUN_004f6670(&DAT_00584ae8,(int)piVar1);
  }
  *(undefined4 *)(param_1 + 0x3e4) = 0xffffffff;
  return;
}
