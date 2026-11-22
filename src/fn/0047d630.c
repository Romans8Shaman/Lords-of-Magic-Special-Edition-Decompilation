/* Rebuilt from lomse.exe FUN_0047d630 @ 0x0047d630 (76 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0047d680 ((undefined4 (__stdcall *)(int))0x0047d680)
#define FUN_0049da80 ((undefined4 (__thiscall *)(void *, uint))0x0049da80)
#define FUN_004b02a0 ((undefined4 (__fastcall *)(int *))0x004b02a0)

#define LOM_SELF_0047d630 1
void __thiscall rb_0047d630(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xb8) != 0) {
    iVar1 = FUN_004b02a0((int *)((int)this + 0x88));
    if (iVar1 != 0) {
      uVar2 = FUN_0047d680(param_1);
      FUN_0049da80(*(void **)((int)this + 0xb8),uVar2);
      return;
    }
    FUN_0049da80(*(void **)((int)this + 0xb8),param_1);
  }
  return;
}
