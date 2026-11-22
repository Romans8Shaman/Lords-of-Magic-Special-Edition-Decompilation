/* Rebuilt from lomse.exe FUN_004ba060 @ 0x004ba060 (52 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004ba060 1
undefined4 __fastcall rb_004ba060(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4c) == -1) ||
     (iVar1 = *(int *)(param_1 + 0x48) + -1, *(int *)(param_1 + 0x48) = iVar1, 0 < iVar1)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  return 1;
}
