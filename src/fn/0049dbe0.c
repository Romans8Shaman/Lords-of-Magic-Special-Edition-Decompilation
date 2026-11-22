/* Rebuilt from lomse.exe FUN_0049dbe0 @ 0x0049dbe0 (113 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049abe0 ((byte * (__thiscall *)(void *, uint, uint, uint, uint *))0x0049abe0)
#define FUN_0049acf0 ((int (__thiscall *)(void *, uint, uint, undefined4 *))0x0049acf0)
#define FUN_0049adb0 ((int (__thiscall *)(void *, uint))0x0049adb0)
#define FUN_0049ca00 ((undefined4 (__fastcall *)(int))0x0049ca00)
#define FUN_0049dcf0 ((int (__thiscall *)(void *, int, int))0x0049dcf0)

#define LOM_SELF_0049dbe0 1
void __fastcall rb_0049dbe0(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (*(int *)((int)param_1 + 0x3c) != 0) {
    FUN_0049ca00((int)param_1);
    iVar1 = FUN_0049adb0(*(void **)((int)param_1 + 0x3c),*(uint *)((int)param_1 + 4));
    puVar6 = (uint *)((int)param_1 + 0x28);
    *(int *)((int)param_1 + 0x24) = iVar1;
    puVar5 = puVar6;
    uVar2 = FUN_0049dcf0(param_1,*(int *)((int)param_1 + 0x10),*(int *)((int)param_1 + 0x14));
    iVar1 = FUN_0049acf0(*(void **)((int)param_1 + 0x3c),*(uint *)((int)param_1 + 4),uVar2,puVar5);
    uVar2 = *(uint *)((int)param_1 + 0xc);
    *(int *)((int)param_1 + 0x20) = iVar1;
    uVar3 = FUN_0049dcf0(param_1,*(int *)((int)param_1 + 0x10),*(int *)((int)param_1 + 0x14));
    pbVar4 = FUN_0049abe0(*(void **)((int)param_1 + 0x3c),*(uint *)((int)param_1 + 4),uVar3,uVar2,
                          puVar6);
    *(byte **)((int)param_1 + 0x1c) = pbVar4;
    *(byte *)((int)param_1 + 0x2c) = *(byte *)((int)param_1 + 0x2c) | 1;
  }
  return;
}
