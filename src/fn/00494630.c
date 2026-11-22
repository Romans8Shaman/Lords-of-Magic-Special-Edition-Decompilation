/* Rebuilt from lomse.exe FUN_00494630 @ 0x00494630 (146 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00494630 1
undefined4 __thiscall rb_00494630(void *this,int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *param_2;
  iVar2 = param_2[1];
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar5 = param_2[2];
  if (param_2[2] < iVar4) {
    iVar5 = iVar4;
  }
  iVar3 = param_2[3];
  if (param_2[3] < iVar2) {
    iVar3 = iVar2;
  }
  if (param_1[1] <= iVar5) {
    iVar5 = param_1[1] + -1;
  }
  if (param_1[2] <= iVar3) {
    iVar3 = param_1[2] + -1;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(int *)((int)this + 0x10) = param_1[4];
  *(int *)((int)this + 4) = (iVar5 - iVar4) + 1;
  *(int *)((int)this + 8) = (iVar3 - iVar2) + 1;
  *(int *)((int)this + 0xc) = param_1[3];
  uVar1 = param_1[5];
  *(uint *)((int)this + 0x14) = uVar1 & 0xfffffff6;
  *(uint *)this = iVar2 * *(int *)((int)this + 0xc) + (((uVar1 & 4) != 0) + 1) * iVar4 + *param_1;
  return 1;
}
