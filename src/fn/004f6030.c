/* Rebuilt from lomse.exe FUN_004f6030 @ 0x004f6030 (184 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f6270 ((undefined4 (__fastcall *)(int))0x004f6270)
#define FUN_004f62f0 ((undefined4 (__fastcall *)(int))0x004f62f0)

#define LOM_SELF_004f6030 1
int __thiscall rb_004f6030(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 4) == 8) {
    iVar3 = *(int *)((int)this + 0x24);
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x24);
    iVar3 = *(int *)((int)this + 0x10);
  }
  if ((iVar5 < 0) || (iVar4 = *(int *)((int)this + 0x10), iVar4 <= iVar5)) {
    iVar4 = *(int *)((int)this + 0x10);
  }
  else if (((iVar1 <= iVar5) && (iVar5 < iVar3)) &&
          (*(int *)(*(int *)((int)this + 8) + iVar5 * 4) == 0)) goto LAB_004f6076;
  iVar5 = iVar4;
LAB_004f6076:
  if (iVar5 == iVar4) {
    if (iVar1 < iVar3) {
      piVar2 = (int *)(*(int *)((int)this + 8) + iVar1 * 4);
      do {
        if (*piVar2 == 0) break;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < iVar3);
    }
    iVar5 = iVar1;
    if (iVar1 == iVar4) {
      return -1;
    }
  }
  *(int *)(*(int *)((int)this + 8) + iVar5 * 4) = param_1;
  *(int *)(*(int *)(*(int *)((int)this + 8) + iVar5 * 4) + 0x28) = iVar5;
  *(void **)(*(int *)(*(int *)((int)this + 8) + iVar5 * 4) + 0x40) = this;
  iVar3 = *(int *)((int)this + 0x18);
  if (*(int *)((int)this + 0x18) <= iVar5) {
    iVar3 = iVar5;
  }
  *(int *)((int)this + 0x18) = iVar3;
  if ((*(int *)((int)this + 4) == 0) && (iVar3 = FUN_004f6270((int)this), iVar3 == 0)) {
    FUN_004f62f0((int)this);
  }
  return iVar5;
}
