/* Rebuilt from lomse.exe FUN_004bee00 @ 0x004bee00 (32 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0050a1f0 ((undefined4 (__fastcall *)(int))0x0050a1f0)

#define LOM_SELF_004bee00 1
void __fastcall rb_004bee00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0xd28;
  iVar2 = 0x10;
  do {
    FUN_0050a1f0(iVar1);
    iVar1 = iVar1 + 0x88;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
