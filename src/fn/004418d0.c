/* Rebuilt from lomse.exe FUN_004418d0 @ 0x004418d0 (130 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005564f8 (*(undefined *)0x005564f8)
#define DAT_005cd310 (*(undefined *)0x005cd310)
#define FUN_0043c360 ((undefined4 (__thiscall *)(void *, undefined4, int, int, int))0x0043c360)

#define LOM_SELF_004418d0 1
int __fastcall rb_004418d0(int param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0043c360(&DAT_005cd310,(int)*(short *)(param_1 + 0x54),(int)*(short *)(param_1 + 0x56)
                       ,*(int *)(param_1 + 0x58),*(int *)(param_1 + 0x5c));
  iVar2 = *(int *)(param_1 + 0x58);
  if ((iVar2 == 0xf) && (0 < *(int *)(param_1 + 0x5c))) {
    return *(int *)(&DAT_005564f8 + *(int *)(param_1 + 0x5c) * 4);
  }
  this = *(int **)(param_1 + 0x48);
  if (this == (int *)0x0) {
    if ((iVar2 < 9) || ((10 < iVar2 && (iVar2 != 0xc)))) {
      return 0;
    }
    return *(int *)(iVar1 + 0x18);
  }
  if (iVar1 == 0) {
    iVar2 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x38)))(this);
    return iVar2;
  }
  iVar2 = *(int *)(iVar1 + 0x18);
  iVar1 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x38)))(this);
  if (iVar1 < iVar2) {
    return iVar2;
  }
  iVar2 = ((undefined4 (__thiscall *)(__typeof__(*(int **)(param_1 + 0x48))))(**(code **)(**(int **)(param_1 + 0x48) + 0x38)))(*(int **)(param_1 + 0x48));
  return iVar2;
}
