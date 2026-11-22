/* Rebuilt from lomse.exe FUN_00493f80 @ 0x00493f80 (26 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00493520 ((uint (__fastcall *)(undefined4 *))0x00493520)

#define LOM_SELF_00493f80 1
void __fastcall rb_00493f80(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00491c20(&DAT_005a7b50,*(int *)(param_1 + 4));
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  FUN_00493520(puVar1);
  return;
}
