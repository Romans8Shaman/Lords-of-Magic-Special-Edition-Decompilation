/* Rebuilt from lomse.exe FUN_004215b0 @ 0x004215b0 (85 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00420490 ((int (__fastcall *)(int))0x00420490)
#define FUN_004b05e0 ((undefined4 (__thiscall *)(void *, LONG, LONG, int, int))0x004b05e0)
#define FUN_004f5a50 ((undefined4 (__thiscall *)(void *, LONG, LONG))0x004f5a50)

#define LOM_SELF_004215b0 1
bool __thiscall rb_004215b0(void *this,LONG param_1,LONG param_2)

{
  int iVar1;
  
  iVar1 = FUN_00420490((int)this);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_004f5a50(this,param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_004b05e0((void *)((int)this + 0x55c),param_1,param_2,*(int *)((int)this + 0x14),
                         *(int *)((int)this + 0x18));
    return iVar1 != 0;
  }
  return true;
}
