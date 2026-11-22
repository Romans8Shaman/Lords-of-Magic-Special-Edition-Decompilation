/* Rebuilt from lomse.exe FUN_0053b4e0 @ 0x0053b4e0 (74 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053cc50 ((undefined4 (__cdecl *)(uint))0x0053cc50)
#define FUN_0053ccc0 ((undefined4 (__cdecl *)(uint))0x0053ccc0)
#define FUN_0053e120 ((uint (__cdecl *)(int *))0x0053e120)

#define LOM_SELF_0053b4e0 1
uint __cdecl rb_0053b4e0(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  FUN_0053cc50((uint)param_1);
  iVar2 = param_1[1];
  param_1[1] = iVar2 + -1;
  if (iVar2 + -1 < 0) {
    uVar3 = FUN_0053e120(param_1);
    FUN_0053ccc0((uint)param_1);
    return uVar3;
  }
  bVar1 = *(byte *)*param_1;
  *param_1 = (int)((byte *)*param_1 + 1);
  FUN_0053ccc0((uint)param_1);
  return (uint)bVar1;
}
