/* Rebuilt from lomse.exe thunk_FUN_0046ba30 @ 0x0046ba80 (12 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0046ba30 ((undefined4 (__fastcall *)(int))0x0046ba30)

#define LOM_SELF_0046ba80 1
undefined4 __fastcall rb_0046ba80(int param_1)

{
  *(int *)0x0058312c -= 84; /* original: sub dword ptr [0x0058312c], 0x54 before the tail jump (Ghidra omitted) */
  return (undefined4)FUN_0046ba30(param_1);
}
