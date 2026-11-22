/* Rebuilt from lomse.exe FUN_00404d50 @ 0x00404d50 (70 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004ee130 ((undefined4 (__thiscall *)(void *, int))0x004ee130)

#define LOM_SELF_00404d50 1
undefined4 __stdcall rb_00404d50(int param_1,int param_2)

{
  void *this;
  undefined4 uVar1;
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (this == (void *)0x0) {
    return 0;
  }
  uVar1 = FUN_004ee130(this,param_2);
  *(undefined1 *)((int)this + 0xc0) = 8;
  *(undefined1 *)((int)this + 0xc1) = 0;
  *(short *)((int)this + 0xc2) = (short)uVar1;
  return 1;
}
