/* Rebuilt from lomse.exe FUN_00533b60 @ 0x00533b60 (118 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00534000 ((undefined4 (__cdecl *)(int))0x00534000)
#define FUN_00534c10 ((undefined4 (__cdecl *)(int))0x00534c10)

#define LOM_SELF_00533b60 1
undefined4 __cdecl rb_00533b60(int param_1)

{
  int iVar1;
  
  if ((((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) ||
      (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
  if (*(int *)(iVar1 + 0x18) < 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  *(uint *)(iVar1 + 4) = (-(uint)(*(int *)(iVar1 + 0x18) != 0) & 0x47) + 0x2a;
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  FUN_00534c10(iVar1);
  FUN_00534000(iVar1);
  return 0;
}
