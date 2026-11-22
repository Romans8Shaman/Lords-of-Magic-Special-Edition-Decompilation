/* Rebuilt from lomse.exe FUN_0043bac0 @ 0x0043bac0 (65 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd310 (*(undefined *)0x005cd310)
#define FUN_0043c310 ((int (__thiscall *)(void *, undefined4, int, int, int))0x0043c310)

#define LOM_SELF_0043bac0 1
void __thiscall rb_0043bac0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *(undefined4 *)((int)this + 0x1c);
  puVar3 = (undefined4 *)((int)this + 0x4c);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x60) = uVar1;
  iVar2 = FUN_0043c310(&DAT_005cd310,(int)*(short *)((int)this + 0x54),
                       (int)*(short *)((int)this + 0x56),*(int *)((int)this + 0x58),
                       *(int *)((int)this + 0x5c));
  *(int *)((int)this + 0x90) = iVar2;
  return;
}
