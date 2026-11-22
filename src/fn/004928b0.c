/* Rebuilt from lomse.exe FUN_004928b0 @ 0x004928b0 (33 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)

#define LOM_SELF_004928b0 1
int __thiscall rb_004928b0(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00491c20(this,param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*piVar1 == 0xf) {
    return piVar1[1];
  }
  return 0;
}
