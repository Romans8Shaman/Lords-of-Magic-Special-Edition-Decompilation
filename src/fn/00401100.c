/* Rebuilt from lomse.exe FUN_00401100 @ 0x00401100 (23 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00401570 ((undefined4 (__thiscall *)(void *, int *))0x00401570)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)

#define LOM_SELF_00401100 1
void __fastcall rb_00401100(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00407d50((int)param_1);
  if (iVar1 == 0) {
    FUN_00401570(param_1 + 0x1a,param_1);
  }
  return;
}
