/* Rebuilt from lomse.exe FUN_0051c540 @ 0x0051c540 (130 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573be4 (*(int *)0x00573be4)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_0051bd20 ((undefined4 (__stdcall *)(int))0x0051bd20)
#define FUN_0051c4c0 ((undefined4 (__thiscall *)(void *, int))0x0051c4c0)
#define FUN_0051c6b0 ((undefined4 (__fastcall *)(int))0x0051c6b0)

#define LOM_SELF_0051c540 1
void __fastcall rb_0051c540(void *param_1)

{
  int *this;
  int iVar1;
  uint uVar2;
  
  if (DAT_00573be4 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00482ac0(&DAT_005aa12c,DAT_00573be4,3);
  }
  this = (int *)FUN_0051bd20(uVar2);
  if (this == (int *)0x0) {
    DAT_00573be4 = 0xffffffff;
    FUN_0051c6b0((int)param_1);
    return;
  }
  do {
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x3c)))(this);
    if (iVar1 == *(int *)((int)param_1 + 0x68)) {
      DAT_00573be4 = this[10];
      FUN_0051c4c0(param_1,(int)this);
      return;
    }
    this = (int *)FUN_0051bd20((int)this);
  } while (this != (int *)0x0);
  DAT_00573be4 = 0xffffffff;
  FUN_0051c6b0((int)param_1);
  return;
}
