/* Rebuilt from lomse.exe FUN_0043d490 @ 0x0043d490 (129 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0043dbb0 ((uint (__fastcall *)(int))0x0043dbb0)
#define FUN_0043dbd0 ((uint (__fastcall *)(int))0x0043dbd0)

#define LOM_SELF_0043d490 1
void __thiscall rb_0043d490(void *this,int *param_1)

{
  int *this_00;
  int *this_01;
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x58) == 0xd) {
    this_00 = (int *)FUN_0043dbb0((int)this);
    this_01 = (int *)FUN_0043dbd0((int)this);
    if (this_00 != (int *)0x0) {
      iVar1 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
      iVar2 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
      if (iVar1 == iVar2) {
        *(int *)((int)this + 0x80) = this_00[10];
        return;
      }
    }
    if (this_01 != (int *)0x0) {
      iVar1 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
      iVar2 = ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x3c)))(this_01);
      if (iVar1 == iVar2) {
        *(int *)((int)this + 0x80) = this_01[10];
        return;
      }
    }
    *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  }
  return;
}
