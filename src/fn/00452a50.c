/* Rebuilt from lomse.exe FUN_00452a50 @ 0x00452a50 (69 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)

#define LOM_SELF_00452a50 1
undefined4 __stdcall rb_00452a50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fbe60(&DAT_005ae974,0,3);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  do {
    if (*(int *)(iVar1 + 0x80) == param_1) {
      return *(undefined4 *)(iVar1 + 0x28);
    }
    iVar1 = FUN_004fbe60(&DAT_005ae974,iVar1,3);
  } while (iVar1 != 0);
  return 0xffffffff;
}
