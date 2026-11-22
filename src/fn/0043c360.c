/* Rebuilt from lomse.exe FUN_0043c360 @ 0x0043c360 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0043c2b0 ((int (__thiscall *)(void *, int))0x0043c2b0)
#define FUN_0043c310 ((int (__thiscall *)(void *, undefined4, int, int, int))0x0043c310)

#define LOM_SELF_0043c360 1
int __thiscall rb_0043c360(void *this,undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0043c310(this,param_1,param_2,param_3,param_4);
  iVar1 = FUN_0043c2b0(this,iVar1);
  return iVar1;
}
