/* Rebuilt from lomse.exe FUN_0050b9a0 @ 0x0050b9a0 (48 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0050b9a0 1
undefined4 __fastcall rb_0050b9a0(int param_1)

{
  if (*(int *)(param_1 + 0x6ac) < 1) {
    if (*(int *)(param_1 + 0xc88) < 1) {
      return 0xfffffffe;
    }
    return *(undefined4 *)(param_1 + 0xc84);
  }
  if (*(int *)(param_1 + 0xc88) < 1) {
    return *(undefined4 *)(param_1 + 0x6a8);
  }
  return 0xffffffff;
}
