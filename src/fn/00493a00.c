/* Rebuilt from lomse.exe FUN_00493a00 @ 0x00493a00 (97 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)

#define LOM_SELF_00493a00 1
undefined4 __thiscall rb_00493a00(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0x10));
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = param_2 + *(int *)this;
  param_1[1] = param_3 + *(int *)((int)this + 4);
  param_1[2] = *(int *)((int)this + 8) + param_2 + -1 + *(int *)this;
  param_1[3] = *(int *)((int)this + 0xc) + param_3 + -1 + *(int *)((int)this + 4);
  return 1;
}
