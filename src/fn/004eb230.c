/* Rebuilt from lomse.exe FUN_004eb230 @ 0x004eb230 (60 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004eb230 1
undefined4 __fastcall rb_004eb230(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x24) == 0) || (*(int *)(param_1 + 4) == 0)) {
    return 0;
  }
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = ((undefined4 (__thiscall *)(void *))(**(code **)(param_1 + 0x40)))((void *)param_1); /* ECX = param_1 */
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return 1;
}
