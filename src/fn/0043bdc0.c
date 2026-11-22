/* Rebuilt from lomse.exe FUN_0043bdc0 @ 0x0043bdc0 (93 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd310 (*(undefined *)0x005cd310)
#define FUN_0043be80 ((int (__fastcall *)(void *))0x0043be80)
#define FUN_0043c360 ((undefined4 (__thiscall *)(void *, undefined4, int, int, int))0x0043c360)
#define FUN_004f5a90 ((undefined4 (__thiscall *)(void *, int))0x004f5a90)
#define FUN_004f5b30 ((undefined4 (__thiscall *)(void *, uint))0x004f5b30)

#define LOM_SELF_0043bdc0 1
void __fastcall rb_0043bdc0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = param_1[0x16];
  if ((iVar2 < 0x11) || (0x14 < iVar2)) {
    pvVar1 = (void *)FUN_0043c360(&DAT_005cd310,(int)(short)param_1[0x15],
                                  (int)*(short *)((int)param_1 + 0x56),iVar2,param_1[0x17]);
    if (pvVar1 == (void *)0x0) {
      FUN_004f5a90(param_1,-1);
      return;
    }
    iVar2 = FUN_0043be80(pvVar1);
    FUN_004f5a90(param_1,iVar2);
    FUN_004f5b30(param_1,(uint)*(byte *)(param_1 + 0x14));
    ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x1c)))(param_1);
  }
  return;
}
