/* Rebuilt from lomse.exe FUN_005473e0 @ 0x005473e0 (104 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005473b0 ((undefined4 (__cdecl *)(uint, uint, uint *))0x005473b0)

#define LOM_SELF_005473e0 1
void __cdecl rb_005473e0(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_005473b0(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_005473b0(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_005473b0(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_005473b0(param_1[2],param_2[2],param_1 + 2);
  return;
}
