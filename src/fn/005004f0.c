/* Rebuilt from lomse.exe FUN_005004f0 @ 0x005004f0 (126 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048d5b0 ((undefined4 (__thiscall *)(void *, int))0x0048d5b0)
#define FUN_0048d730 ((undefined4 (__fastcall *)(int))0x0048d730)

#define LOM_SELF_005004f0 1
int __thiscall rb_005004f0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x25598)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_0048d730(*(int *)((int)this + 0x255a0) + iVar2);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x80;
    } while (iVar3 < *(int *)((int)this + 0x25598));
  }
  if (*(int *)((int)this + 0x2559c) <= iVar3) {
    return -1;
  }
  iVar2 = iVar3 + 1;
  if (iVar3 + 1 <= *(int *)((int)this + 0x25598)) {
    iVar2 = *(int *)((int)this + 0x25598);
  }
  *(int *)((int)this + 0x25598) = iVar2;
  FUN_0048d5b0((void *)(iVar3 * 0x80 + *(int *)((int)this + 0x255a0)),param_1);
  return iVar3 + 0x11000000;
}
