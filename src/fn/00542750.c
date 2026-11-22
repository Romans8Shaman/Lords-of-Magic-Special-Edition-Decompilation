/* Rebuilt from lomse.exe FUN_00542750 @ 0x00542750 (83 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5550 (*(int *)0x005d5550)
#define FUN_00542620 ((undefined4 (__cdecl *)(int))0x00542620)

#define LOM_SELF_00542750 1
void __cdecl rb_00542750(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_005d5550 = DAT_005d5550 + 1, DAT_005d5550 == 0x20)) {
    FUN_00542620(0x10);
  }
  return;
}
