/* Rebuilt from lomse.exe FUN_00497ac0 @ 0x00497ac0 (60 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00497a00 ((undefined4 (__fastcall *)(int))0x00497a00)

#define LOM_SELF_00497ac0 1
void __thiscall rb_00497ac0(void *this,int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  }
  else if ((*(char **)((int)this + 8) != (char *)0x0) && (0 < *(int *)((int)this + 0x10))) {
    uVar2 = 0xffffffff;
    pcVar3 = *(char **)((int)this + 8);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    *(uint *)((int)this + 0xc) = ~uVar2 - 1;
    FUN_00497a00((int)this);
    return;
  }
  return;
}
