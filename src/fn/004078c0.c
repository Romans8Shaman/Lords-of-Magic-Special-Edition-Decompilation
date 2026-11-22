/* Rebuilt from lomse.exe FUN_004078c0 @ 0x004078c0 (55 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_004078c0 1
undefined4 __stdcall rb_004078c0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 == 0) {
    return 0;
  }
  *(undefined1 *)(uVar1 + 0xc0) = 0x14;
  *(undefined1 *)(uVar1 + 0xc1) = 0;
  *(undefined2 *)(uVar1 + 0xc2) = 0xffff;
  return 1;
}
