/* Rebuilt from lomse.exe FUN_00436bb0 @ 0x00436bb0 (24 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004e7250 ((int (__stdcall *)(int))0x004e7250)
#define FUN_004e7300 ((undefined4 (__fastcall *)(int))0x004e7300)

#define LOM_SELF_00436bb0 1
int __thiscall rb_00436bb0(void *this,int param_1)

{
  int iVar1;
  
  FUN_004e7300((int)this);
  iVar1 = FUN_004e7250(param_1);
  return iVar1;
}
