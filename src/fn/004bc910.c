/* Rebuilt from lomse.exe FUN_004bc910 @ 0x004bc910 (50 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042d620 ((undefined4 (__thiscall *)(void *, uint))0x0042d620)
#define FUN_0042d750 ((undefined4 (__thiscall *)(void *, int, undefined4, int))0x0042d750)

#define LOM_SELF_004bc910 1
void __fastcall rb_004bc910(int param_1)

{
  undefined4 *this;
  int iVar1;
  
  this = (undefined4 *)(param_1 + 0x5068);
  iVar1 = 0x10;
  do {
    FUN_0042d750(this,this[2],*this,-1);
    FUN_0042d620(this,3);
    this = this + 0x761;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
