/* Rebuilt from lomse.exe FUN_00540130 @ 0x00540130 (37 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574bb8 (*(undefined4 *)0x00574bb8)

#define LOM_SELF_00540130 1
undefined4 __cdecl rb_00540130(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00574bb8;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x574bbc);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x574c90);
  return 0;
}
