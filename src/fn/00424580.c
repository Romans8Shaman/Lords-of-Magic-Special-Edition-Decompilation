/* Rebuilt from lomse.exe FUN_00424580 @ 0x00424580 (31 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_00424580 1
void __thiscall rb_00424580(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00485080(this,*param_1,0x2f);
  if (piVar1 == (int *)0x0) {
    return;
  }
  FUN_004245a0(piVar1);
  return;
}
