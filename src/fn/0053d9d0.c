/* Rebuilt from lomse.exe FUN_0053d9d0 @ 0x0053d9d0 (57 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053d980 ((undefined4 (__cdecl *)(uint, int *, int *))0x0053d980)

#define LOM_SELF_0053d9d0 1
void __cdecl rb_0053d9d0(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_0053d980(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}
