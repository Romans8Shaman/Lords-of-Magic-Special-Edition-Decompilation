/* Rebuilt from lomse.exe FUN_004554c0 @ 0x004554c0 (125 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00522b60 ((int (__fastcall *)(void *))0x00522b60)
#define FUN_00523160 ((undefined4 (__fastcall *)(int))0x00523160)

#define LOM_SELF_004554c0 1
void __fastcall rb_004554c0(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)(DAT_005cd2f4 + iVar1 * 1000);
  }
  if (pvVar2 != (void *)0x0) {
    FUN_00523160((int)pvVar2);
    FUN_00522b60(pvVar2);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)(DAT_005cd2f4 + iVar1 * 1000);
  }
  if (pvVar2 != (void *)0x0) {
    FUN_00523160((int)pvVar2);
    FUN_00522b60(pvVar2);
  }
  return;
}
