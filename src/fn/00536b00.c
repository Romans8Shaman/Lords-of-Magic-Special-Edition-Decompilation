/* Rebuilt from lomse.exe FUN_00536b00 @ 0x00536b00 (67 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00537160 ((undefined4 (__cdecl *)(int *, int, int *))0x00537160)

#define LOM_SELF_00536b00 1
undefined4 __cdecl rb_00536b00(int param_1)

{
  uint *puVar1;
  
  if ((param_1 == 0) || (puVar1 = *(uint **)(param_1 + 0x1c), puVar1 == (uint *)0x0)) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *puVar1 = -(uint)(puVar1[3] != 0) & 7;
  FUN_00537160(*(int **)(*(int *)(param_1 + 0x1c) + 0x14),param_1,(int *)0x0);
  return 0;
}
