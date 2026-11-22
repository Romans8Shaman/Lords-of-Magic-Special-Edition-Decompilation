/* Rebuilt from lomse.exe FUN_004af2c0 @ 0x004af2c0 (288 bytes, __stdcall).
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
#define FUN_004b0b80 ((uint (__stdcall *)(uint, int *, undefined4))0x004b0b80)
#define FUN_004f6670 ((undefined4 (__thiscall *)(void *, int))0x004f6670)
#define PTR_PTR_0055cc18 (*(void * *)0x0055cc18)

#define LOM_SELF_004af2c0 1
int __stdcall rb_004af2c0(int *param_1,int *param_2,uint param_3,int *param_4,undefined4 param_5)

{
  uint unused_stack_0;
  int iVar1;
  void *pvVar2;
  byte *pbVar3;
  undefined4 unused_reg_1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_local_c[12];
#define local_c (*(_t_local_c *)(_fr + 0x4))
  
  if (*param_1 < 0) {
    unused_stack_0 = FUN_004b0b80(param_3,param_4,param_5);
    if (unused_stack_0 == 0) {
      return -1;
    }
    FUN_0049dd20(local_c,(int *)&PTR_PTR_0055cc18);
    iVar1 = FUN_004923e0(&DAT_005a7b50,unused_reg_1,unused_stack_0,local_c);
    *param_1 = iVar1;
    *param_2 = DAT_005aa780;
    pvVar2 = (void *)FUN_00492850(&DAT_005a7b50,*param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_0049ab90(pvVar2,1);
      return *param_1;
    }
  }
  else {
    if (*param_2 == DAT_005aa780) {
      return *param_1;
    }
    pbVar3 = (byte *)FUN_004b0b80(param_3,param_4,param_5);
    if (pbVar3 == (byte *)0x0) {
      return -1;
    }
    pvVar2 = (void *)FUN_00492850(&DAT_005a7b50,*param_1);
    if (pvVar2 == (void *)0x0) {
      return -1;
    }
    iVar1 = FUN_0049b450(pvVar2,pbVar3,(int *)0x0);
    if (iVar1 == 0) {
      return -1;
    }
    *param_2 = DAT_005aa780;
    FUN_004f6670(&DAT_00584ae8,(int)pvVar2);
  }
  return *param_1;
#undef local_c
}
