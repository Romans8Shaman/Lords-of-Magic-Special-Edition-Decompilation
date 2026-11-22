/* Rebuilt from lomse.exe FUN_0044ea50 @ 0x0044ea50 (272 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)
#define FUN_0043dbb0 ((uint (__fastcall *)(int))0x0043dbb0)
#define FUN_0043dbd0 ((uint (__fastcall *)(int))0x0043dbd0)
#define FUN_00446580 ((undefined4 (__thiscall *)(void *, int))0x00446580)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_0044ea50 1
void __thiscall rb_0044ea50(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  int *this_01;
  int *this_02;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_005ae98c;
  iVar3 = DAT_005ae998;
  do {
    if (iVar1 < iVar3) {
      return;
    }
    this_00 = (void *)FUN_004f6000(&DAT_005ae974,iVar3);
    if ((((this_00 == (void *)0x0) || (*(int *)((int)this_00 + 4) != 2)) ||
        (*(int *)((int)this_00 + 0x4c) == param_1)) ||
       (*(int *)((int)this_00 + 0x80) != *(int *)((int)this + 0x28))) goto LAB_0044eb41;
    if (*(int *)((int)this_00 + 0x58) == 0xd) {
      this_01 = (int *)FUN_0043dbb0((int)this_00);
      this_02 = (int *)FUN_0043dbd0((int)this_00);
      if ((this_01 == (int *)0x0) || (this_02 == (int *)0x0)) goto LAB_0044eb16;
      if (*(int *)((int)this + 0x28) == this_01[10]) {
        iVar2 = ((undefined4 (__thiscall *)(__typeof__(this_02)))(**(code **)(*this_02 + 0x3c)))(this_02);
        if (*(int *)((int)this_00 + 0x4c) != iVar2) goto LAB_0044eb16;
        *(int *)((int)this_00 + 0x80) = this_02[10];
      }
      else {
        if ((*(int *)((int)this + 0x28) != this_02[10]) ||
           (iVar2 = ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x3c)))(this_01), *(int *)((int)this_00 + 0x4c) != iVar2)
           ) goto LAB_0044eb16;
        *(int *)((int)this_00 + 0x80) = this_01[10];
      }
    }
    else {
LAB_0044eb16:
      if (*(int **)((int)this_00 + 0x48) != (int *)0x0) {
        FUN_004245a0(*(int **)((int)this_00 + 0x48));
      }
      *(int *)((int)this_00 + 0x4c) = param_1;
      *(undefined4 *)((int)this_00 + 0x84) = 0xffffffff;
      *(undefined4 *)((int)this_00 + 0x88) = 0;
      FUN_00446580(this_00,param_1);
    }
LAB_0044eb41:
    iVar3 = iVar3 + 1;
  } while( true );
}
