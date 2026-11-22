/* Rebuilt from lomse.exe FUN_00491ad0 @ 0x00491ad0 (24 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491b60 ((undefined4 (__thiscall *)(void *, int))0x00491b60)

#define LOM_SELF_00491ad0 1
void * __fastcall rb_00491ad0(void *param_1)

{
  *(undefined4 *)((int)param_1 + 4) = 0;
  FUN_00491b60(param_1,2000);
  return param_1;
}
