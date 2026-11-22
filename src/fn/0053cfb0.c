/* Rebuilt from lomse.exe FUN_0053cfb0 @ 0x0053cfb0 (61 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053cdb0 ((undefined4 (__cdecl *)(int *))0x0053cdb0)

#define LOM_SELF_0053cfb0 1
void __cdecl rb_0053cfb0(int param_1,int *param_2)

{
  if ((param_1 != 0) && ((param_2[3] & 0x1000U) != 0)) {
    FUN_0053cdb0(param_2);
    param_2[6] = 0;
    param_2[3] = param_2[3] & 0xffffeeff;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}
