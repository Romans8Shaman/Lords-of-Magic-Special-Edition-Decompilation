/* Rebuilt from lomse.exe FUN_005072f0 @ 0x005072f0 (78 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_005072f0 1
undefined4 __thiscall rb_005072f0(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *this_00;
  
  this_00 = FUN_00485080(this,*param_1,0x2f);
  if (this_00 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_004176d0(this_00,0);
  uVar1 = this_00[0xc];
  if ((uVar1 & 0x40000000) == 0) {
    this_00[0xc] = uVar1 | 0x40000000;
    return 1;
  }
  this_00[0xc] = uVar1 & 0xbfffffff;
  return 1;
}
