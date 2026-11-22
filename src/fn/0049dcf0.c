/* Rebuilt from lomse.exe FUN_0049dcf0 @ 0x0049dcf0 (36 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049d980 ((uint (__fastcall *)(int))0x0049d980)

#define LOM_SELF_0049dcf0 1
int __thiscall rb_0049dcf0(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0049d980((int)this);
  iVar2 = (int)(uVar1 * param_1 + (param_2 >> 1)) / param_2;
  if ((int)uVar1 <= iVar2) {
    iVar2 = iVar2 - uVar1;
  }
  return iVar2;
}
