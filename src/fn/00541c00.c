/* Rebuilt from lomse.exe FUN_00541c00 @ 0x00541c00 (72 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053b6e0 ((uint (__cdecl *)(int))0x0053b6e0)
#define FUN_00541bb0 ((uint (__cdecl *)(int *))0x00541bb0)

#define LOM_SELF_00541c00 1
uint __cdecl rb_00541c00(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = *param_1 + 1;
  uVar1 = FUN_00541bb0(param_2);
  uVar2 = FUN_0053b6e0(uVar1);
  while (uVar2 != 0) {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_00541bb0(param_2);
    uVar2 = FUN_0053b6e0(uVar1);
  }
  return uVar1;
}
