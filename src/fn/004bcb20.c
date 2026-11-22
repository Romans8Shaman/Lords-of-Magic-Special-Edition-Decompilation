/* Rebuilt from lomse.exe FUN_004bcb20 @ 0x004bcb20 (18 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584488 (*(undefined *)0x00584488)
#define FUN_004bf640 ((undefined4 (__thiscall *)(void *, int))0x004bf640)

#define LOM_SELF_004bcb20 1
undefined4 __fastcall rb_004bcb20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004bf640(&DAT_00584488,*(int *)(param_1 + 0x15a8));
  return uVar1;
}
