/* Rebuilt from lomse.exe FUN_00411760 @ 0x00411760 (129 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042d4f0 ((undefined4 (__fastcall *)(int))0x0042d4f0)
#define FUN_004b0260 ((undefined4 (__fastcall *)(int *))0x004b0260)
#define FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526ea0)

#define LOM_SELF_00411760 1
undefined4 __fastcall rb_00411760(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0xf;
  iVar4 = param_1 + 0xc4;
  do {
    FUN_00526ea0(iVar4);
    iVar4 = iVar4 + 0x4c;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x58c);
  if (puVar1 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
    *(undefined4 *)(param_1 + 0x58c) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x598);
  if (puVar1 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
    *(undefined4 *)(param_1 + 0x598) = 0;
  }
  FUN_004b0260((int *)(param_1 + 0x55c));
  uVar2 = FUN_0042d4f0(param_1 + 0x568);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return uVar2;
}
