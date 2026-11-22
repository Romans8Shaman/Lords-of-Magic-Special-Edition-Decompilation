/* Rebuilt from lomse.exe FUN_004f00b0 @ 0x004f00b0 (63 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_004bee20 ((undefined4 (__thiscall *)(void *, int))0x004bee20)
#define FUN_004bee50 ((undefined4 (__thiscall *)(void *, int))0x004bee50)
#define FUN_004efd70 ((undefined4 (__thiscall *)(void *, int))0x004efd70)

#define LOM_SELF_004f00b0 1
void __thiscall rb_004f00b0(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  
  FUN_004efd70(&DAT_005aee6c,param_1);
  this_00 = (void *)((int)this + 0x5068);
  iVar1 = 0x10;
  do {
    FUN_004bee50((void *)((int)this_00 + 0x34),param_1);
    FUN_004bee20(this_00,param_1);
    this_00 = (void *)((int)this_00 + 0x1d84);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
