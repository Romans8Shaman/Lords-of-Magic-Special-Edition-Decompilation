/* Rebuilt from lomse.exe FUN_00480620 @ 0x00480620 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00422e90 ((undefined4 (__thiscall *)(void *, int, int))0x00422e90)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_00480620 1
void __thiscall rb_00480620(void *this,int *param_1)

{
  undefined4 *this_00;
  
  this_00 = FUN_00485080(this,*param_1,0x2f);
  if (this_00 == (undefined4 *)0x0) {
    return;
  }
  FUN_00422e90(this_00,param_1[1],param_1[2]);
  return;
}
