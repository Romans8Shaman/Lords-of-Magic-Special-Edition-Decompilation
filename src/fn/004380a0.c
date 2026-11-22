/* Rebuilt from lomse.exe FUN_004380a0 @ 0x004380a0 (86 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00438100 ((undefined4 (__fastcall *)(undefined4 *))0x00438100)
#define thunk_FUN_00438150 ((undefined4 (__fastcall *)(undefined4 *))0x00438140)

#define LOM_SELF_004380a0 1
void __fastcall rb_004380a0(undefined4 *param_1)

{

  FUN_00438100(param_1);
  thunk_FUN_00438150(param_1 + 0x14);
  thunk_FUN_00438150(param_1);
  return;
}
