/* Rebuilt from lomse.exe FUN_0048cb80 @ 0x0048cb80 (106 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_0048cbf0 ((undefined4 (__thiscall *)(void *, int))0x0048cbf0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_0048cb80 1
uint __fastcall rb_0048cb80(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 1;
  iVar2 = DAT_005d1e84;
  while( true ) {
    if ((iVar2 == 0) || (iVar1 = *(int *)(iVar2 + 0x100), iVar1 < 1)) {
      iVar1 = 1;
    }
    if (iVar1 < iVar3) break;
    if (iVar2 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = FUN_004b7dd0(iVar2);
      iVar2 = DAT_005d1e84;
    }
    if (iVar3 != iVar1) {
      iVar2 = FUN_0048cbf0(param_1,iVar3);
      if (iVar2 != 0) {
        uVar4 = uVar4 | 1 << ((byte)iVar3 & 0x1f);
      }
      iVar2 = DAT_005d1e84;
    }
    iVar3 = iVar3 + 1;
  }
  return uVar4;
}
