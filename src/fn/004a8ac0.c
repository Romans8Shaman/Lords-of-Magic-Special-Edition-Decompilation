/* Rebuilt from lomse.exe FUN_004a8ac0 @ 0x004a8ac0 (143 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a8ac0 1
int __thiscall
rb_004a8ac0(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 0x6c);
  uVar1 = param_1 % iVar2 - param_2 % iVar2;
  uVar3 = (int)uVar1 >> 0x1f;
  iVar4 = (uVar1 ^ uVar3) - uVar3;
  uVar3 = param_1 / iVar2 - param_2 / iVar2;
  uVar1 = (int)uVar3 >> 0x1f;
  iVar2 = (uVar3 ^ uVar1) - uVar1;
  *param_3 = 0;
  *param_4 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    if (*(int *)((int)this + 0x6c) - iVar4 < iVar4) {
      *param_3 = 1;
      iVar4 = *(int *)((int)this + 0x6c) - iVar4;
    }
    if (*(int *)((int)this + 0x70) - iVar2 < iVar2) {
      *param_4 = 1;
      iVar2 = *(int *)((int)this + 0x70) - iVar2;
    }
  }
  if (iVar2 <= iVar4) {
    iVar2 = iVar4;
  }
  return iVar2;
}
