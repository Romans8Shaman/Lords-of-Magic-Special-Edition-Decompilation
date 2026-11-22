/* Rebuilt from lomse.exe FUN_00420890 @ 0x00420890 (57 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_00420890 1
undefined4 __thiscall rb_00420890(void *this,int param_1)

{
  undefined *this_00;
  int iVar1;
  
  this_00 = FUN_004c6fc0();
  iVar1 = FUN_004a8300(this_00,param_1,0);
  if ((-1 < iVar1) && (iVar1 != *(int *)((int)this + 0x28))) {
    iVar1 = FUN_00420580((int)this);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}
