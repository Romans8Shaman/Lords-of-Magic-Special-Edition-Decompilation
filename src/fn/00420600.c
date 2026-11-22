/* Rebuilt from lomse.exe FUN_00420600 @ 0x00420600 (21 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00526040 ((int (__fastcall *)(void *))0x00526040)

#define LOM_SELF_00420600 1
int __fastcall rb_00420600(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00526040((void *)(param_1 + 0xc4 + *(int *)(param_1 + 0x50) * 0x4c));
  return iVar1;
}
