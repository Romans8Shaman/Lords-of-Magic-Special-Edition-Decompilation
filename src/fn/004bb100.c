/* Rebuilt from lomse.exe FUN_004bb100 @ 0x004bb100 (32 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004bb560 ((undefined4 (__fastcall *)(int))0x004bb560)
#define FUN_0051f320 ((undefined4 (__stdcall *)(int))0x0051f320)

#define LOM_SELF_004bb100 1
void __thiscall rb_004bb100(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004bb560((int)this);
  if (iVar1 != 0) {
    FUN_0051f320(param_1);
  }
  return;
}
