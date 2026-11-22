/* Rebuilt from lomse.exe FUN_00435480 @ 0x00435480 (31 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00435440 ((undefined4 (__fastcall *)(int))0x00435440)

#define LOM_SELF_00435480 1
int __fastcall rb_00435480(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00435440(param_1);
  if (iVar1 < 0) {
    return -1;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar1 == iVar2) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  return iVar2;
}
