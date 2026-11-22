/* Rebuilt from lomse.exe thunk_FUN_00477f50 @ 0x00477f40 (12 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00477f50 ((undefined4 (__fastcall *)(int))0x00477f50)

#define LOM_SELF_00477f40 1
undefined4 __fastcall rb_00477f40(int param_1)

{
  *(int *)0x005832e8 -= 12; /* original: sub dword ptr [0x005832e8], 0xc before the tail jump (Ghidra omitted) */
  return (undefined4)FUN_00477f50(param_1);
}
