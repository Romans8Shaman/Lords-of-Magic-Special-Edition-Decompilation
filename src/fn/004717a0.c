/* Rebuilt from lomse.exe thunk_FUN_00495590 @ 0x004717a0 (12 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)

#define LOM_SELF_004717a0 1
undefined4 __fastcall rb_004717a0(int * param_1)

{
  *(int *)0x00583648 -= 32; /* original: sub dword ptr [0x00583648], 0x20 before the tail jump (Ghidra omitted) */
  return (undefined4)FUN_00495590(param_1);
}
