/* Rebuilt from lomse.exe FUN_0047b4b0 @ 0x0047b4b0 (80 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0047b520 ((undefined4 (__fastcall *)(undefined4 *))0x0047b520)
#define FUN_0047b560 ((undefined4 (__fastcall *)(undefined4 *))0x0047b560)
#define FUN_0048ed70 ((undefined4 (__thiscall *)(void *, undefined4))0x0048ed70)

#define LOM_SELF_0047b4b0 1
void __thiscall rb_0047b4b0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_0047b560((undefined4 *)((int)this + 0x255a4));
    return;
  }
  iVar1 = *(int *)((int)this + 0x25318);
  while (iVar1 != 0) {
    iVar1 = **(int **)((int)this + 0x25318);
    FUN_0048ed70(*(int **)((int)this + 0x25318),0xffffffff);
    *(int *)((int)this + 0x25318) = iVar1;
  }
  FUN_0047b520((undefined4 *)((int)this + 0x255a4));
  return;
}
