/* Rebuilt from lomse.exe FUN_004c5f90 @ 0x004c5f90 (347 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c5f90 1
undefined4 __thiscall rb_004c5f90(void *this,int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (((((param_1 < 0) || (*(int *)((int)this + 4) <= param_1)) || (param_2 < 0)) ||
      ((*(int *)((int)this + 8) <= param_2 || (param_3 < 0)))) ||
     ((*(int *)((int)this + 4) <= param_3 || ((param_4 < 0 || (*(int *)((int)this + 8) <= param_4)))
      ))) {
    return 0;
  }
  uVar5 = param_3 - param_1;
  uVar6 = param_4 - param_2;
  iVar4 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  iVar2 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
  if (iVar2 < iVar4) {
    iVar2 = iVar4 + 1;
    if ((int)uVar5 < 0) {
      uVar5 = 0xffffffff;
    }
    else if (0 < (int)uVar5) {
      uVar5 = 1;
    }
    if (1 < iVar2) {
      uVar6 = (int)(uVar6 * 0x10000) / iVar4;
    }
    iVar4 = param_2 * 0x10000 + 0x8000;
    if (iVar2 != 0) {
      iVar3 = param_1;
      param_1 = iVar2;
      do {
        iVar2 = (iVar4 >> 0x10) * *(int *)((int)this + 4) + iVar3;
        iVar3 = iVar3 + uVar5;
        iVar4 = iVar4 + uVar6;
        pbVar1 = (byte *)(*(int *)this + 1 + iVar2 * 6);
        *pbVar1 = *pbVar1 | 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 1;
    }
  }
  else {
    iVar4 = iVar2 + 1;
    if ((int)uVar6 < 0) {
      uVar6 = 0xffffffff;
    }
    else if (0 < (int)uVar6) {
      uVar6 = 1;
    }
    if (1 < iVar4) {
      uVar5 = (int)(uVar5 * 0x10000) / iVar2;
    }
    iVar2 = param_1 * 0x10000 + 0x8000;
    if (iVar4 != 0) {
      param_1 = iVar4;
      do {
        iVar4 = param_2 * *(int *)((int)this + 4);
        iVar3 = iVar2 >> 0x10;
        iVar2 = iVar2 + uVar5;
        param_2 = param_2 + uVar6;
        pbVar1 = (byte *)(*(int *)this + 1 + (iVar4 + iVar3) * 6);
        *pbVar1 = *pbVar1 | 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return 1;
}
