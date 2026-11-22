/* Rebuilt from lomse.exe FUN_004bb120 @ 0x004bb120 (32 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004bb560 ((undefined4 (__fastcall *)(int))0x004bb560)
#define FUN_0051f400 ((undefined4 (__stdcall *)(int))0x0051f400)

#define LOM_SELF_004bb120 1
void __thiscall rb_004bb120(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004bb560((int)this);
  if (iVar1 != 0) {
    FUN_0051f400(param_1);
  }
  return;
}
