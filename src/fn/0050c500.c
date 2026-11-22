/* Rebuilt from lomse.exe FUN_0050c500 @ 0x0050c500 (198 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): local_4 */
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005d2cf8 (*(uint *)0x005d2cf8)
#define DAT_005d2cfc (*(int * *)0x005d2cfc)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0050c500 1
uint __fastcall rb_0050c500(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_4;
  
  pvVar3 = DAT_005a7b78;
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    iVar5 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar2;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005d2cf8,DAT_005d2cfc);
  pvVar3 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    uVar6 = *(uint *)(*piVar1 + -8 + iVar5 * 8);
    local_4 = *(uint *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar6 = 0;
  }
  if ((uVar6 & 0xff) == 0) {
    return 0;
  }
  return local_4 & ((uVar6 & 0xff) != 8) - 1;
}
