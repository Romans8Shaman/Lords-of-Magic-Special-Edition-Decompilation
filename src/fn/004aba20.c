/* Rebuilt from lomse.exe FUN_004aba20 @ 0x004aba20 (78 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004ab950 ((undefined4 (__thiscall *)(void *, int, int, int, int, int *, int *))0x004ab950)

#define LOM_SELF_004aba20 1
int __thiscall rb_004aba20(void *this, int volatile param_1, int volatile param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x6c);
  FUN_004ab950(this,param_1 % iVar1,param_1 / iVar1,param_2 % iVar1,param_2 / iVar1,&param_1,
               &param_2);
  iVar1 = FUN_004a51c0(this,param_1,param_2);
  return iVar1;
}
