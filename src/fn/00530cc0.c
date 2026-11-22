/* Rebuilt from lomse.exe FUN_00530cc0 @ 0x00530cc0 (56 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005743e4 (*(int *)0x005743e4)
#define DAT_005743e8 (*(int *)0x005743e8)

#define LOM_SELF_00530cc0 1
int __thiscall rb_00530cc0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (DAT_005743e4 + *(int *)this * 2) % DAT_005743e8;
  *(int *)this = iVar2;
  iVar1 = (param_2 - param_1) + 1;
  if (iVar1 < 2) {
    return param_1;
  }
  return iVar2 % iVar1 + param_1;
}
