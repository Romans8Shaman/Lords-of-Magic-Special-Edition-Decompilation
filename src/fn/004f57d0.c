/* Rebuilt from lomse.exe FUN_004f57d0 @ 0x004f57d0 (34 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f3ac0 ((undefined4 (__cdecl *)(int, int, int *, undefined4, void *))0x004f3ac0)

#define LOM_SELF_004f57d0 1
undefined4 __thiscall rb_004f57d0(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004f3ac0(param_1,param_2,(int *)((int)this + 8),param_3,(void *)((int)this + 0x10));
  return uVar1;
}
