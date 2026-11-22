/* Rebuilt from lomse.exe FUN_00469f70 @ 0x00469f70 (41 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577e0 (*(undefined4 *)0x005577e0)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_00519b30 ((undefined4 (__thiscall *)(void *, int))0x00519b30)

#define LOM_SELF_00469f70 1
void __fastcall rb_00469f70(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *param_1;
  piVar3 = &DAT_005577e0;
  piVar4 = param_1 + 0x19;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(iVar1 + 0x2c)))(param_1);
  FUN_00519b30(&DAT_005876d0,1);
  return;
}
