/* Rebuilt from lomse.exe FUN_0048dbf0 @ 0x0048dbf0 (142 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_0048dc80 ((undefined4 (__thiscall *)(void *, undefined4, uint, LONG))0x0048dc80)
#define FUN_00492790 ((int (__thiscall *)(void *, int))0x00492790)
#define FUN_00492820 ((int (__thiscall *)(void *, int))0x00492820)
#define FUN_00493330 ((int (__thiscall *)(void *, int))0x00493330)
#define FUN_00495900 ((undefined4 (__thiscall *)(void *, undefined4))0x00495900)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)

#define LOM_SELF_0048dbf0 1
void __thiscall rb_0048dbf0(void *this,undefined4 param_1,uint param_2,LONG param_3)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_00492790(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xd0) = 0xffffffff;
    return;
  }
  pvVar2 = (void *)FUN_00493330(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (pvVar2 != (void *)0x0) {
    FUN_00495900(pvVar2,0);
    return;
  }
  iVar1 = FUN_00492820(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x230) = 0;
    return;
  }
  pvVar2 = (void *)FUN_005005f0(&DAT_00584ae8,*(uint *)((int)this + 0xc));
  if (pvVar2 != (void *)0x0) {
    FUN_0048dc80(pvVar2,param_1,param_2,param_3);
  }
  return;
}
