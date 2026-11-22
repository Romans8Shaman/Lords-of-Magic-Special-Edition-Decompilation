/* Rebuilt from lomse.exe FUN_004f3550 @ 0x004f3550 (21 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f32d0 ((undefined4 (__fastcall *)(void *))0x004f32d0)

#define LOM_SELF_004f3550 1
uint __fastcall rb_004f3550(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004f32d0(param_1);
  return (uint)(iVar1 != 0);
}
