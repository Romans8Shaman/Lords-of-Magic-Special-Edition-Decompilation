/* Rebuilt from lomse.exe FUN_00406020 @ 0x00406020 (35 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00405a00 ((uint (__fastcall *)(int))0x00405a00)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_00406020 1
undefined4 __stdcall rb_00406020(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = FUN_00405a00(uVar1 + 0x68);
  return uVar1;
}
