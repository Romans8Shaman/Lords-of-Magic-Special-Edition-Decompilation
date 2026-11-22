/* Rebuilt from lomse.exe FUN_00421610 @ 0x00421610 (85 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00420490 ((int (__fastcall *)(int))0x00420490)
#define FUN_004b0670 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x004b0670)
#define FUN_004f5a10 ((undefined4 (__thiscall *)(void *, int, int))0x004f5a10)

#define LOM_SELF_00421610 1
bool __thiscall rb_00421610(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00420490((int)this);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_004f5a10(this,param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_004b0670((void *)((int)this + 0x55c),param_1,param_2,*(int *)((int)this + 0x14),
                         *(int *)((int)this + 0x18));
    return iVar1 != 0;
  }
  return true;
}
