/* Rebuilt from lomse.exe FUN_004b4630 @ 0x004b4630 (72 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b6030 ((undefined4 (__stdcall *)(int))0x004b6030)
#define FUN_004b6b30 ((undefined4 (__cdecl *)(int))0x004b6b30)
#define FUN_004b6b70 ((undefined4 (__cdecl *)(int))0x004b6b70)

#define LOM_SELF_004b4630 1
int __thiscall rb_004b4630(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = -1;
  do {
    if (-1 < iVar3) {
      return iVar3;
    }
    iVar1 = FUN_004b6030(iVar4);
    if ((-1 < iVar1) && (iVar2 = FUN_004b6b30(iVar1), iVar2 == param_1)) {
      iVar3 = FUN_004b6b70(iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return iVar3;
}
