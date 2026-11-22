/* Rebuilt from lomse.exe FUN_004b9870 @ 0x004b9870 (113 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b7890 ((int (__thiscall *)(void *, int))0x004b7890)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_004b9870 1
uint __fastcall rb_004b9870(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 1;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x4b2c);
    if ((iVar2 == 0) || (iVar1 = *(int *)(iVar2 + 0x100), iVar1 < 1)) {
      iVar1 = 1;
    }
    if (iVar1 < iVar4) break;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = FUN_004b7dd0(iVar2);
    }
    if (iVar4 != iVar2) {
      if (*(void **)(param_1 + 0x4b2c) == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004b7890(*(void **)(param_1 + 0x4b2c),iVar4);
      }
      if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
        uVar3 = uVar3 | 1 << ((byte)iVar4 & 0x1f);
      }
    }
    iVar4 = iVar4 + 1;
  }
  return uVar3;
}
