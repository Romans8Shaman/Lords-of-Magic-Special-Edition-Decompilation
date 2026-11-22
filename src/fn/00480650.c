/* Rebuilt from lomse.exe FUN_00480650 @ 0x00480650 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00422fa0 ((undefined4 (__thiscall *)(void *, int, int))0x00422fa0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_00480650 1
void __thiscall rb_00480650(void *this,int *param_1)

{
  undefined4 *this_00;
  
  this_00 = FUN_00485080(this,*param_1,0x2f);
  if (this_00 == (undefined4 *)0x0) {
    return;
  }
  FUN_00422fa0(this_00,param_1[1],param_1[2]);
  return;
}
