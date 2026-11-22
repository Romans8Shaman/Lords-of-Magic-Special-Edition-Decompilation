/* Rebuilt from lomse.exe FUN_004a6470 @ 0x004a6470 (31 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f6270 ((undefined4 (__fastcall *)(int))0x004f6270)
#define FUN_004f62f0 ((undefined4 (__fastcall *)(int))0x004f62f0)
#define FUN_004f6730 ((undefined4 (__fastcall *)(int))0x004f6730)

#define LOM_SELF_004a6470 1
void __fastcall rb_004a6470(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x1c;
  FUN_004f6730(iVar1);
  iVar2 = FUN_004f6270(iVar1);
  if (iVar2 == 0) {
    FUN_004f62f0(iVar1);
  }
  return;
}
