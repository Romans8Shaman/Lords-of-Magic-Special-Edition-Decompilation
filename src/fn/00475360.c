/* Rebuilt from lomse.exe FUN_00475360 @ 0x00475360 (13 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00475360 1
void __fastcall rb_00475360(int param_1)

{
  ((undefined4 (__stdcall *)(__typeof__(*(int **)(param_1 + 0x684))))(**(code **)(**(int **)(param_1 + 0x684) + 0x6c)))(*(int **)(param_1 + 0x684));
  /* v1.5: also restore the stashed 32-bpp primary, if any. */
  if (*(int *)(param_1 + 0x900) != 0) {
    ((undefined4 (__stdcall *)(__typeof__(*(int **)(param_1 + 0x900))))(**(code **)(**(int **)(param_1 + 0x900) + 0x6c)))(*(int **)(param_1 + 0x900));
  }
  return;
}
