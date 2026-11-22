/* Rebuilt from lomse.exe FUN_004298a0 @ 0x004298a0 (29 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004298c0 ((int (__thiscall *)(void *, int, int *, int *))0x004298c0)

#define LOM_SELF_004298a0 1
int __thiscall rb_004298a0(void *this,int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004298c0((void *)((int)this + 0x4848),param_1,param_2,param_3);
  return iVar1;
}
