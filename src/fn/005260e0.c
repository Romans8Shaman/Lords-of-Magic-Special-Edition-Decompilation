/* Rebuilt from lomse.exe FUN_005260e0 @ 0x005260e0 (64 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)

#define LOM_SELF_005260e0 1
void __thiscall rb_005260e0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + iVar1 * 1000;
  }
  *param_1 = *(undefined4 *)(iVar1 + 0x114);
  param_1[1] = *(undefined4 *)(iVar1 + 0x118);
  return;
}
