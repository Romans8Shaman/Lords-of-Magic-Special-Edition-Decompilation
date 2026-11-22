/* Rebuilt from lomse.exe FUN_004205e0 @ 0x004205e0 (21 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521eb0 ((uint (__fastcall *)(int *))0x00521eb0)

#define LOM_SELF_004205e0 1
uint __fastcall rb_004205e0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00521eb0((int *)(param_1 + 0xc4 + *(int *)(param_1 + 0x50) * 0x4c));
  return uVar1;
}
