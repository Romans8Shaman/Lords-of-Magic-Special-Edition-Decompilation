/* Rebuilt from lomse.exe FUN_004ed190 @ 0x004ed190 (36 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_004ed190 1
undefined4 __stdcall rb_004ed190(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,1);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x54) = param_2;
  }
  return 1;
}
