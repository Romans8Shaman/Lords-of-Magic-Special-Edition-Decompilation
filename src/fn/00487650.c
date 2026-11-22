/* Rebuilt from lomse.exe FUN_00487650 @ 0x00487650 (86 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005851a0 (*(int *)0x005851a0)
#define FUN_004876c0 ((undefined4 (__thiscall *)(void *, undefined4))0x004876c0)
#define FUN_0048a510 ((undefined4 (__stdcall *)(void))0x0048a510)

#define LOM_SELF_00487650 1
void __thiscall rb_00487650(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x10) == 1) {
    iVar1 = ((param_1 * 0x19) / *(int *)((int)this + 8)) * 4;
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    else if (99 < iVar1) {
      iVar1 = 99;
    }
    if (*(int *)((int)this + 0xc) < iVar1) {
      FUN_004876c0(this,iVar1);
      *(int *)((int)this + 0xc) = iVar1;
      if (DAT_005851a0 != 0) {
        FUN_0048a510();
      }
    }
  }
  return;
}
