/* Rebuilt from lomse.exe FUN_00548d30 @ 0x00548d30 (194 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5328 (*(undefined4 *)0x005d5328)
#define DAT_005d5530 (*(int *)0x005d5530)
#define FUN_0053ae60 ((uint * (__cdecl *)(uint *, char))0x0053ae60)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)

#define LOM_SELF_00548d30 1
uint * __cdecl rb_00548d30(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  
  if (DAT_005d5530 == 0) {
    puVar3 = FUN_0053ae60(param_1,(char)param_2);
    return puVar3;
  }
  FUN_0053cbb0(0x19);
  bVar1 = (byte)*param_1;
  while (uVar2 = (uint)bVar1, bVar1 != 0) {
    if ((*(byte *)((int)&DAT_005d5328 + uVar2 + 1) & 4) == 0) {
      puVar3 = param_1;
      if (param_2 == uVar2) break;
    }
    else {
      puVar3 = (uint *)((int)param_1 + 1);
      if (*(char *)((int)param_1 + 1) == '\0') {
        FUN_0053cc30(0x19);
        return (uint *)0x0;
      }
      if (param_2 == CONCAT11(bVar1,*(char *)((int)param_1 + 1))) {
        FUN_0053cc30(0x19);
        return param_1;
      }
    }
    param_1 = (uint *)((int)puVar3 + 1);
    bVar1 = *(byte *)((int)puVar3 + 1);
  }
  FUN_0053cc30(0x19);
  return (uint *)((param_2 != uVar2) - 1 & (uint)param_1);
}
