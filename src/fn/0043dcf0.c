/* Rebuilt from lomse.exe FUN_0043dcf0 @ 0x0043dcf0 (88 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)

#define LOM_SELF_0043dcf0 1
undefined4 __thiscall rb_0043dcf0(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00482ac0(this,*param_1,2);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if ((int *)piVar1[0x12] != (int *)0x0) {
    FUN_004245a0((int *)piVar1[0x12]);
  }
  piVar1[0x11] = 0;
  piVar1[0x21] = -1;
  piVar1[0x22] = 0;
  FUN_00483be0(this,piVar1);
  return 1;
}
