/* Rebuilt from lomse.exe FUN_0053b530 @ 0x0053b530 (88 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053cc50 ((undefined4 (__cdecl *)(uint))0x0053cc50)
#define FUN_0053ccc0 ((undefined4 (__cdecl *)(uint))0x0053ccc0)
#define FUN_0053dd60 ((uint (__cdecl *)(uint, int *))0x0053dd60)

#define LOM_SELF_0053b530 1
uint __cdecl rb_0053b530(uint param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_0053cc50((uint)param_2);
  iVar1 = param_2[1];
  param_2[1] = iVar1 + -1;
  if (iVar1 + -1 < 0) {
    uVar2 = FUN_0053dd60(param_1,param_2);
    FUN_0053ccc0((uint)param_2);
    return uVar2;
  }
  *(char *)*param_2 = (char)param_1;
  *param_2 = *param_2 + 1;
  FUN_0053ccc0((uint)param_2);
  return param_1 & 0xff;
}
