/* Rebuilt from lomse.exe FUN_004f0e70 @ 0x004f0e70 (226 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005aa780 (*(int *)0x005aa780)
#define FUN_004923e0 ((int (__fastcall *)(int *, undefined4, undefined4, undefined4))0x004923e0)
#define FUN_00492850 ((int (__thiscall *)(void *, int))0x00492850)
#define FUN_0049ab90 ((undefined4 (__thiscall *)(void *, undefined4))0x0049ab90)
#define FUN_0049b450 ((undefined4 (__thiscall *)(void *, byte *, int *))0x0049b450)
#define FUN_004f0fa0 ((uint (__thiscall *)(void *, undefined4))0x004f0fa0)
#define FUN_004f6670 ((undefined4 (__thiscall *)(void *, int))0x004f6670)

#define LOM_SELF_004f0e70 1
int __fastcall rb_004f0e70(void *param_1)

{
  uint unused_stack_0;
  int iVar1;
  void *pvVar2;
  byte *pbVar3;
  undefined4 unused_reg_1;
  
  if (*(int *)((int)param_1 + 0xa4) < 0) {
    unused_stack_0 = FUN_004f0fa0(param_1,DAT_005aa780);
    if (unused_stack_0 == 0) {
      return -1;
    }
    iVar1 = FUN_004923e0(&DAT_005a7b50,unused_reg_1,unused_stack_0,0);
    *(int *)((int)param_1 + 0xa4) = iVar1;
    *(int *)((int)param_1 + 0xa8) = DAT_005aa780;
    pvVar2 = (void *)FUN_00492850(&DAT_005a7b50,iVar1);
    if (pvVar2 != (void *)0x0) {
      FUN_0049ab90(pvVar2,1);
      return *(int *)((int)param_1 + 0xa4);
    }
  }
  else {
    if (*(int *)((int)param_1 + 0xa8) == DAT_005aa780) {
      return *(int *)((int)param_1 + 0xa4);
    }
    pbVar3 = (byte *)FUN_004f0fa0(param_1,DAT_005aa780);
    if (pbVar3 == (byte *)0x0) {
      return -1;
    }
    pvVar2 = (void *)FUN_00492850(&DAT_005a7b50,*(int *)((int)param_1 + 0xa4));
    if (pvVar2 == (void *)0x0) {
      return -1;
    }
    iVar1 = FUN_0049b450(pvVar2,pbVar3,(int *)0x0);
    if (iVar1 == 0) {
      return -1;
    }
    *(int *)((int)param_1 + 0xa8) = DAT_005aa780;
    FUN_004f6670(&DAT_00584ae8,(int)pvVar2);
  }
  return *(int *)((int)param_1 + 0xa4);
}
