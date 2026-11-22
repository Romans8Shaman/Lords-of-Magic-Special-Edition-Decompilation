/* Rebuilt from lomse.exe FUN_004f3ac0 @ 0x004f3ac0 (90 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584aa0 (*(int *)0x00584aa0)
#define DAT_00584aa4 (*(int *)0x00584aa4)
#define FUN_004f3b20 ((undefined4 (__cdecl *)(undefined4 *, undefined4, void *))0x004f3b20)

#define LOM_SELF_004f3ac0 1
void __cdecl rb_004f3ac0(int param_1,int param_2,int *param_3,undefined4 param_4,void *param_5)

{
  int iVar1;
  
  *param_3 = param_1;
  *(int *)((int)param_5 + 4) = param_2;
  if ((DAT_00584aa4 != 0) && (iVar1 = 0, 0 < param_2)) {
    do {
      DAT_00584aa0 = DAT_00584aa0 + (uint)*(byte *)(iVar1 + param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  *(byte *)(*param_3 + 1) = *(byte *)(*param_3 + 1) | 0x40;
  FUN_004f3b20(param_3,param_4,param_5);
  return;
}
