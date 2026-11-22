/* Rebuilt from lomse.exe FUN_004ab950 @ 0x004ab950 (208 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004ab950 1
void __thiscall
rb_004ab950(void *this,int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  iVar4 = param_3;
  if (param_3 < param_1) {
    iVar4 = param_1;
    param_1 = param_3;
  }
  if (param_4 < param_2) {
    param_2 = param_4;
    param_4 = iVar3;
  }
  if (*(int *)((int)this + 0x14) == 0) {
    bVar1 = false;
    bVar2 = false;
  }
  else {
    bVar1 = *(int *)((int)this + 0x6c) - (iVar4 - param_1) < iVar4 - param_1;
    bVar2 = *(int *)((int)this + 0x70) - (param_4 - param_2) < param_4 - param_2;
  }
  if (bVar1) {
    iVar3 = iVar4 + param_1 + *(int *)((int)this + 0x6c) >> 1;
    *param_5 = iVar3;
    if (*(int *)((int)this + 0x6c) <= iVar3) {
      *param_5 = iVar3 - *(int *)((int)this + 0x6c);
    }
  }
  else {
    *param_5 = iVar4 + param_1 >> 1;
  }
  if (bVar2) {
    iVar3 = param_4 + param_2 + *(int *)((int)this + 0x70) >> 1;
    *param_6 = iVar3;
    if (*(int *)((int)this + 0x70) <= iVar3) {
      *param_6 = iVar3 - *(int *)((int)this + 0x70);
      return;
    }
  }
  else {
    *param_6 = param_4 + param_2 >> 1;
  }
  return;
}
