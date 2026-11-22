/* Rebuilt from lomse.exe FUN_005449f0 @ 0x005449f0 (93 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5670 (*(int *)0x005d5670)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)

#define LOM_SELF_005449f0 1
void __cdecl rb_005449f0(int *param_1)

{
  int iVar1;
  
  DAT_005d5670 = DAT_005d5670 + 1;
  iVar1 = FUN_0053c1f0(0x1000);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    param_1[6] = 2;
    param_1[3] = param_1[3] | 4;
    param_1[2] = (int)(param_1 + 5);
    *param_1 = (int)(param_1 + 5);
    param_1[1] = 0;
    return;
  }
  param_1[3] = param_1[3] | 8;
  param_1[6] = 0x1000;
  *param_1 = param_1[2];
  param_1[1] = 0;
  return;
}
