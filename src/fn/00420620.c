/* Rebuilt from lomse.exe FUN_00420620 @ 0x00420620 (11 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521ed0 ((uint (__fastcall *)(int *))0x00521ed0)

#define LOM_SELF_00420620 1
uint __fastcall rb_00420620(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00521ed0((int *)(param_1 + 0xc4));
  return uVar1;
}
