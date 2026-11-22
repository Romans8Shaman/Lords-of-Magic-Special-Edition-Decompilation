/* Rebuilt from lomse.exe FUN_004fbad0 @ 0x004fbad0 (60 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f6030 ((int (__thiscall *)(void *, int))0x004f6030)

#define LOM_SELF_004fbad0 1
undefined4 __fastcall rb_004fbad0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x1c) == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)param_1 + 0x24)) {
    iVar1 = 0;
    do {
      FUN_004f6030(param_1,*(int *)((int)param_1 + 0x1c) + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x58;
    } while (iVar2 < *(int *)((int)param_1 + 0x24));
  }
  return 1;
}
