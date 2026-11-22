/* Rebuilt from lomse.exe FUN_0050b9d0 @ 0x0050b9d0 (34 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0050b9a0 ((undefined4 (__fastcall *)(int))0x0050b9a0)

#define LOM_SELF_0050b9d0 1
int __fastcall rb_0050b9d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0050b9a0(param_1);
  iVar2 = iVar1;
  if ((iVar1 < 0) || (iVar2 = *(int *)(param_1 + 0x6a8), iVar1 != iVar2)) {
    return iVar2;
  }
  return *(int *)(param_1 + 0xc84);
}
