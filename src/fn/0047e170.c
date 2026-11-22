/* Rebuilt from lomse.exe FUN_0047e170 @ 0x0047e170 (102 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005557e0 (*(int *)0x005557e0)
#define FUN_004b05e0 ((undefined4 (__thiscall *)(void *, LONG, LONG, int, int))0x004b05e0)
#define FUN_004f5a50 ((undefined4 (__thiscall *)(void *, LONG, LONG))0x004f5a50)

#define LOM_SELF_0047e170 1
undefined4 __thiscall rb_0047e170(void *this,LONG param_1,LONG param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_005557e0 != 2) && ((*(byte *)((int)this + 0x30) & 0x12) == 0)) {
    return 0;
  }
  iVar1 = FUN_004b05e0((void *)((int)this + 0x88),param_1,param_2,*(int *)((int)this + 0x14),
                       *(int *)((int)this + 0x18));
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)this + 0x30) & 2) == 0) {
    uVar2 = FUN_004f5a50(this,param_1,param_2);
    return uVar2;
  }
  return 0;
}
