/* Rebuilt from lomse.exe FUN_004a5210 @ 0x004a5210 (45 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a5170 ((int (__thiscall *)(void *, int, int))0x004a5170)
#define _DAT_0054da80 (*(float *)0x0054da80)

#define LOM_SELF_004a5210 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall rb_004a5210(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004a5170(param_1,param_2,param_3);
  if (*(int *)((int)param_1 + 0x54) == 0) {
    return (float10)_DAT_0054da80;
  }
  return (float10)*(float *)(*(int *)((int)param_1 + 0x54) + 4 + iVar1 * 8);
}
