/* Rebuilt from lomse.exe FUN_00541bb0 @ 0x00541bb0 (33 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053e120 ((uint (__cdecl *)(int *))0x0053e120)

#define LOM_SELF_00541bb0 1
uint __cdecl rb_00541bb0(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[1];
  param_1[1] = iVar2 + -1;
  if (iVar2 + -1 < 0) {
    uVar3 = FUN_0053e120(param_1);
    return uVar3;
  }
  bVar1 = *(byte *)*param_1;
  *param_1 = (int)((byte *)*param_1 + 1);
  return (uint)bVar1;
}
