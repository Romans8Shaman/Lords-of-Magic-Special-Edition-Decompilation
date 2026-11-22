/* Rebuilt from lomse.exe FUN_004bb660 @ 0x004bb660 (267 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005aa780 (*(int *)0x005aa780)
#define FUN_004923e0 ((int (__fastcall *)(int *, undefined4, undefined4, undefined4))0x004923e0)
#define FUN_00492850 ((int (__thiscall *)(void *, int))0x00492850)
#define FUN_0049ab90 ((undefined4 (__thiscall *)(void *, undefined4))0x0049ab90)
#define FUN_0049b450 ((undefined4 (__thiscall *)(void *, byte *, int *))0x0049b450)
#define FUN_0049dd20 ((undefined4 (__thiscall *)(void *, int *))0x0049dd20)
#define FUN_004f6670 ((undefined4 (__thiscall *)(void *, int))0x004f6670)
#define FUN_00523350 ((uint (__thiscall *)(void *, undefined4))0x00523350)
#define PTR_s_CITY_SELECTED_0055d6d0 (*(undefined * *)0x0055d6d0)

#define LOM_SELF_004bb660 1
int __fastcall rb_004bb660(void *param_1)

{
  uint unused_stack_0;
  int iVar1;
  void *pvVar2;
  byte *pbVar3;
  undefined4 unused_reg_1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_local_c[12];
#define local_c (*(_t_local_c *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x15c0) < 0) {
    unused_stack_0 = FUN_00523350(param_1,DAT_005aa780);
    if (unused_stack_0 == 0) {
      return -1;
    }
    FUN_0049dd20(local_c,(int *)&PTR_s_CITY_SELECTED_0055d6d0);
    iVar1 = FUN_004923e0(&DAT_005a7b50,unused_reg_1,unused_stack_0,local_c);
    *(int *)((int)param_1 + 0x15c0) = iVar1;
    *(int *)((int)param_1 + 0x15c4) = DAT_005aa780;
    pvVar2 = (void *)FUN_00492850(&DAT_005a7b50,iVar1);
    if (pvVar2 != (void *)0x0) {
      FUN_0049ab90(pvVar2,1);
      return *(int *)((int)param_1 + 0x15c0);
    }
  }
  else {
    if (*(int *)((int)param_1 + 0x15c4) == DAT_005aa780) {
      return *(int *)((int)param_1 + 0x15c0);
    }
    pbVar3 = (byte *)FUN_00523350(param_1,DAT_005aa780);
    if (pbVar3 == (byte *)0x0) {
      return -1;
    }
    pvVar2 = (void *)FUN_00492850(&DAT_005a7b50,*(int *)((int)param_1 + 0x15c0));
    if (pvVar2 == (void *)0x0) {
      return -1;
    }
    iVar1 = FUN_0049b450(pvVar2,pbVar3,(int *)0x0);
    if (iVar1 == 0) {
      return -1;
    }
    *(int *)((int)param_1 + 0x15c4) = DAT_005aa780;
    FUN_004f6670(&DAT_00584ae8,(int)pvVar2);
  }
  return *(int *)((int)param_1 + 0x15c0);
#undef local_c
}
