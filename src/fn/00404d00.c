/* Rebuilt from lomse.exe FUN_00404d00 @ 0x00404d00 (69 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00404ae0 ((undefined4 (__thiscall *)(void *, int, int))0x00404ae0)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004aeff0 ((undefined4 (__thiscall *)(void *, int))0x004aeff0)

#define LOM_SELF_00404d00 1
void __thiscall rb_00404d00(void *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0);
  if (uVar1 != 0) {
    FUN_004aeff0(param_1,uVar1);
    uVar2 = FUN_0047c9e0(&DAT_005aa12c,*(int *)(uVar1 + 0x48));
    if (uVar2 != 0) {
      FUN_00404ae0((void *)(uVar1 + 0x68),(int)param_1,uVar1);
    }
  }
  return;
}
