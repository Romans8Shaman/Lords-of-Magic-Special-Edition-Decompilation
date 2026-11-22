/* Rebuilt from lomse.exe FUN_004e72b0 @ 0x004e72b0 (66 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584690 (*(undefined4 *)0x00584690)
#define DAT_005846a0 (*(undefined4 *)0x005846a0)
#define DAT_005846b4 (*(undefined4 *)0x005846b4)
#define DAT_005846c8 (*(undefined4 *)0x005846c8)

#define LOM_SELF_004e72b0 1
undefined4 __stdcall rb_004e72b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00584690;
  while (*piVar1 != param_1) {
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
    if (0x58470f < (int)piVar1) {
      return 0xffffffff;
    }
  }
  if (iVar2 < 5) {
    return DAT_005846a0;
  }
  if (iVar2 < 10) {
    return DAT_005846b4;
  }
  return DAT_005846c8;
}
