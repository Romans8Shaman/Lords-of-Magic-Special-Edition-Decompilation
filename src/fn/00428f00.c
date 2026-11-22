/* Rebuilt from lomse.exe FUN_00428f00 @ 0x00428f00 (24 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005788b8 (*(undefined *)0x005788b8)
#define FUN_004d6220 ((undefined4 (__thiscall *)(void *, void *, int, undefined4))0x004d6220)

#define LOM_SELF_00428f00 1
undefined4 __thiscall rb_00428f00(void *this,void *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004d6220(&DAT_005788b8,param_1,param_2,this);
  return uVar1;
}
