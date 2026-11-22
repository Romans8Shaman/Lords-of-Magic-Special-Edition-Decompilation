/* Rebuilt from lomse.exe FUN_00481800 @ 0x00481800 (32 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0052b600 ((undefined4 (__fastcall *)(int))0x0052b600)

#define LOM_SELF_00481800 1
void __fastcall rb_00481800(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x232a8;
  iVar2 = 8;
  do {
    FUN_0052b600(iVar1);
    iVar1 = iVar1 + 0x400;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
