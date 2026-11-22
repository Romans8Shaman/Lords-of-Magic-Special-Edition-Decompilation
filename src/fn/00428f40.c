/* Rebuilt from lomse.exe FUN_00428f40 @ 0x00428f40 (37 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578810 (*(undefined *)0x00578810)
#define FUN_004d6220 ((undefined4 (__thiscall *)(void *, void *, int, undefined4))0x004d6220)

#define LOM_SELF_00428f40 1
bool __thiscall rb_00428f40(void *this,void *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x15) {
    return false;
  }
  uVar1 = FUN_004d6220(&DAT_00578810,param_1,param_2 + -0x15,this);
  return SUB41(uVar1,0);
}
