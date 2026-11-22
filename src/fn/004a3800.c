/* Rebuilt from lomse.exe FUN_004a3800 @ 0x004a3800 (131 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a3360 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x004a3360)
#define FUN_0053a110 ((uint (__stdcall *)(void))0x0053a110)

#define LOM_SELF_004a3800 1
void __thiscall rb_004a3800(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = FUN_0053a110();
  iVar1 = (param_3 - param_1 >> 1) + -0x28 +
          param_1 + ((int)(uVar3 * 0x50 + ((int)(uVar3 * 0x50) >> 0x1f & 0x7fffU)) >> 0xf);
  uVar3 = FUN_0053a110();
  iVar2 = (param_4 - param_2 >> 1) + -0x28 +
          param_2 + ((int)(uVar3 * 0x50 + ((int)(uVar3 * 0x50) >> 0x1f & 0x7fffU)) >> 0xf);
  FUN_004a3360(this,param_1,param_2,iVar1,iVar2);
  FUN_004a3360(this,iVar1,iVar2,param_3,param_4);
  return;
}
