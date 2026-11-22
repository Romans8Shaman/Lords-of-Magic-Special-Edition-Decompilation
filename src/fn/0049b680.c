/* Rebuilt from lomse.exe thunk_FUN_0049ab20 @ 0x0049b680 (15 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049ab20 ((undefined4 (__fastcall *)(int *))0x0049ab20)

#define LOM_SELF_0049b680 1
undefined4 __fastcall rb_0049b680(int * param_1)

{
  *(int *)0x00583718 -= 292; /* original: sub dword ptr [0x00583718], 0x124 before the tail jump (Ghidra omitted) */
  return (undefined4)FUN_0049ab20(param_1);
}
