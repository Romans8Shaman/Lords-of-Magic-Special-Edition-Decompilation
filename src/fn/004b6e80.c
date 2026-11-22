/* Rebuilt from lomse.exe FUN_004b6e80 @ 0x004b6e80 (98 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b574 (*(int *)0x0055b574)
#define DAT_0055b578 (*(int *)0x0055b578)
#define DAT_00583560 (*(int *)0x00583560)
#define FUN_0048c340 ((int (__stdcall *)(void))0x0048c340)
#define FUN_0048c550 ((int (__stdcall *)(void))0x0048c550)
#define FUN_0048c5e0 ((undefined4 (__stdcall *)(void))0x0048c5e0)
#define FUN_004b6ef0 ((undefined4 (__cdecl *)(undefined4, int))0x004b6ef0)
#define s__PULSED__0055d35c (*(char (*)[])0x0055d35c)

#define LOM_SELF_004b6e80 1
void __cdecl rb_004b6e80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_0048c550();
  iVar2 = DAT_00583560;
  iVar1 = DAT_0055b574;
  if (iVar3 != 0) {
    iVar3 = DAT_0055b578;
    if (DAT_0055b578 < 5) {
      iVar3 = 5;
    }
    iVar4 = FUN_0048c340();
    if (iVar4 != 0) {
      FUN_0048c5e0();
      return;
    }
    if (((param_1 != 0) && (iVar1 < 0)) && (iVar2 < param_1 - iVar3)) {
      FUN_004b6ef0(s__PULSED__0055d35c,param_1 - iVar3);
    }
  }
  return;
}
