/* Rebuilt from lomse.exe FUN_004c2370 @ 0x004c2370 (58 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004c2450 ((undefined4 (__fastcall *)(int))0x004c2450)

#define LOM_SELF_004c2370 1
void __fastcall rb_004c2370(int param_1)

{
  void *this;
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x5b4),0);
  if (this != (void *)0x0) {
    FUN_004c2450((int)this);
    FUN_004176d0(this,0);
  }
  *(undefined4 *)(param_1 + 0x5b4) = 0xffffffff;
  return;
}
