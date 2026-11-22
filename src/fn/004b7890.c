/* Rebuilt from lomse.exe FUN_004b7890 @ 0x004b7890 (39 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b7890 1
int __thiscall rb_004b7890(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(param_1 + -1)))(**(code **)(*(int *)this + 0x5c)))(this,param_1 + -1);
  iVar2 = (int)this + iVar1 * 0x25 + -0x19;
  if (*(int *)((int)this + iVar1 * 0x25 + -0x15) == 0) {
    iVar2 = 0;
  }
  return iVar2;
}
