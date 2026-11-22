/* Rebuilt from lomse.exe FUN_00421960 @ 0x00421960 (55 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005221f0 ((undefined4 (__stdcall *)(undefined4, undefined4))0x005221f0)

#define LOM_SELF_00421960 1
int __thiscall rb_00421960(void *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    do {
      iVar1 = FUN_005221f0(*(undefined4 *)((int)this + 0x28),iVar3);
      iVar2 = iVar2 + iVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x4c));
  }
  return iVar2;
}
