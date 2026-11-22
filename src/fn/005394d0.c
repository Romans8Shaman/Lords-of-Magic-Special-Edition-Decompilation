/* Rebuilt from lomse.exe FUN_005394d0 @ 0x005394d0 (61 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539510 ((undefined4 (__cdecl *)(int *))0x00539510)
#define FUN_0053cc50 ((undefined4 (__cdecl *)(uint))0x0053cc50)
#define FUN_0053ccc0 ((undefined4 (__cdecl *)(uint))0x0053ccc0)

#define LOM_SELF_005394d0 1
undefined4 __cdecl rb_005394d0(int *param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    FUN_0053cc50((uint)param_1);
    uVar1 = FUN_00539510(param_1);
    FUN_0053ccc0((uint)param_1);
    return uVar1;
  }
  param_1[3] = 0;
  return 0xffffffff;
}
