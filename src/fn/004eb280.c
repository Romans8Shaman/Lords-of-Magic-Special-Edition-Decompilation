/* Rebuilt from lomse.exe FUN_004eb280 @ 0x004eb280 (9 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004eb280 1
uint __fastcall rb_004eb280(int param_1)

{
  int iVar1;
  
  iVar1 = ((undefined4 (__thiscall *)(void *))(**(code **)(param_1 + 0x58)))((void *)param_1); /* ECX = param_1 */
  return (uint)(iVar1 == 0);
}
