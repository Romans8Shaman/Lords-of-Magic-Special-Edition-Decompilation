/* Rebuilt from lomse.exe FUN_004a2da0 @ 0x004a2da0 (138 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a2d80 ((undefined4 (__thiscall *)(void *, int))0x004a2d80)

#define LOM_SELF_004a2da0 1
int __thiscall rb_004a2da0(void *this,undefined4 *param_1)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  bVar1 = false;
  iVar3 = *(int *)this;
  if (iVar3 <= *(int *)((int)this + 4)) {
    return -1;
  }
  pbVar5 = *(byte **)((int)this + 0x18);
  if (pbVar5 == (byte *)0x0) {
    return -1;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    pbVar2 = pbVar5;
    do {
      if ((*pbVar2 & 2) == 0) {
        bVar1 = true;
        break;
      }
      iVar4 = iVar4 + 1;
      pbVar2 = pbVar2 + 0x58;
    } while (iVar4 < iVar3);
  }
  if (bVar1) {
    pbVar5 = pbVar5 + iVar4 * 0x58;
    for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pbVar5 = *param_1;
      param_1 = param_1 + 1;
      pbVar5 = pbVar5 + 4;
    }
    FUN_004a2d80((void *)(*(int *)((int)this + 0x18) + iVar4 * 0x58),1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    return iVar4;
  }
  return -1;
}
