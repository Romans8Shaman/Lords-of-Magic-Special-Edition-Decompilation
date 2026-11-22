/* Rebuilt from lomse.exe FUN_00483cf0 @ 0x00483cf0 (56 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005851a0 (*(int *)0x005851a0)
#define FUN_00483cd0 ((undefined4 (__fastcall *)(int))0x00483cd0)
#define FUN_00484140 ((undefined4 (__stdcall *)(void))0x00484140)

#define LOM_SELF_00483cf0 1
void __fastcall rb_00483cf0(int param_1)

{
  if (((DAT_005851a0 != 0) && (*(int *)(param_1 + 0x5034) != 0)) &&
     (*(int *)(param_1 + 0x5038) == 0)) {
    if (*(int *)(param_1 + 0x503c) == 0) {
      FUN_00484140();
    }
    FUN_00483cd0(param_1);
  }
  return;
}
