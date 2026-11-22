/* Rebuilt from lomse.exe FUN_004a3080 @ 0x004a3080 (47 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a2d80 ((undefined4 (__thiscall *)(void *, int))0x004a2d80)

#define LOM_SELF_004a3080 1
void * __fastcall rb_004a3080(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x24) = 10;
  *(undefined4 *)((int)param_1 + 0x54) = 10;
  *(undefined1 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined4 *)((int)param_1 + 0x30) = 1;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  FUN_004a2d80(param_1,0);
  return param_1;
}
