/* Rebuilt from lomse.exe FUN_004b7bf0 @ 0x004b7bf0 (34 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b6030 ((undefined4 (__stdcall *)(int))0x004b6030)

#define LOM_SELF_004b7bf0 1
int __thiscall rb_004b7bf0(void *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = FUN_004b6030(iVar3);
    if (-1 < iVar1) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return iVar2;
}
