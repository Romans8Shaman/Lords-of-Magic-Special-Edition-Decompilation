/* Rebuilt from lomse.exe FUN_004924a0 @ 0x004924a0 (167 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00491c70 ((int (__fastcall *)(int *))0x00491c70)
#define FUN_0049c960 ((undefined4 * (__thiscall *)(void *, undefined4))0x0049c960)
#define FUN_0049f120 ((undefined4 (__stdcall *)(void))0x0049f120)

#define LOM_SELF_004924a0 1
int __thiscall rb_004924a0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 *puVar3;

  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    return -1;
  }
  this_00 = (void *)FUN_0049f120();
  if (this_00 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0049c960(this_00,param_1);
  }
  puVar2[1] = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return -1;
  }
  *puVar2 = 0xe;
  return iVar1;
}
