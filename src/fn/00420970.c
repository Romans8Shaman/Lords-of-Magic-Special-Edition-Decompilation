/* Rebuilt from lomse.exe FUN_00420970 @ 0x00420970 (80 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004192c0 ((uint (__fastcall *)(int))0x004192c0)
#define FUN_004208d0 ((int (__thiscall *)(void *, int, int))0x004208d0)
#define FUN_004c2a10 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x004c2a10)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_00531fb0 ((uint (__thiscall *)(void *, uint, int))0x00531fb0)

#define LOM_SELF_00420970 1
undefined4 __fastcall rb_00420970(void *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *this;
  int iVar3;
  undefined4 unused_reg_1;
  int iVar4;
  void *pvVar5;
  
  uVar1 = FUN_004192c0((int)param_1);
  iVar4 = 0;
  do {
    uVar2 = FUN_004208d0(param_1,*(int *)((int)param_1 + 0x1c),iVar4);
    if (uVar2 != *(uint *)((int)param_1 + 0x1c)) {
      pvVar5 = param_1;
      this = FUN_004c6fc0();
      uVar2 = FUN_00531fb0(this,uVar2,(int)pvVar5);
      iVar3 = FUN_004c2a10((int)param_1,unused_reg_1,uVar2);
      if (iVar3 <= (int)uVar1) {
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  return 0;
}
