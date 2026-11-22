/* Rebuilt from lomse.exe FUN_0051b870 @ 0x0051b870 (20 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c5ec0 ((int (__thiscall *)(void *, int))0x004c5ec0)
#define FUN_004c6fb0 ((undefined4 * (__stdcall *)(void))0x004c6fb0)

#define LOM_SELF_0051b870 1
int __stdcall rb_0051b870(int param_1)

{
  undefined4 *this;
  int iVar1;
  
  this = FUN_004c6fb0();
  iVar1 = FUN_004c5ec0(this,param_1);
  return iVar1;
}
