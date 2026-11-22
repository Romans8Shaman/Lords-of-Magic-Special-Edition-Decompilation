/* Rebuilt from lomse.exe FUN_00492550 @ 0x00492550 (156 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00491c70 ((int (__fastcall *)(int *))0x00491c70)
#define FUN_0049c890 ((undefined4 * (__fastcall *)(undefined4 *))0x0049c890)
#define FUN_0049f120 ((undefined4 (__stdcall *)(void))0x0049f120)

#define LOM_SELF_00492550 1
int __fastcall rb_00492550(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  iVar1 = FUN_00491c70(param_1);
  puVar2 = (undefined4 *)FUN_00491c20(param_1,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    return -1;
  }
  puVar3 = (undefined4 *)FUN_0049f120();
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0049c890(puVar3);
  }
  puVar2[1] = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return -1;
  }
  *puVar2 = 0xe;
  return iVar1;
}
