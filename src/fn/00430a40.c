/* Rebuilt from lomse.exe FUN_00430a40 @ 0x00430a40 (62 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)

#define LOM_SELF_00430a40 1
void __thiscall rb_00430a40(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    *(int *)((int)this + 0x10) = param_2;
  }
  else {
    if (param_1 == 1) {
      *(int *)((int)this + 0x14) = param_2;
      return;
    }
    if (param_1 == 2) {
      iVar1 = FUN_00492760(&DAT_005a7b50,param_2);
      *(int *)((int)this + 8) = iVar1;
      return;
    }
  }
  return;
}
