/* Rebuilt from lomse.exe FUN_00462d10 @ 0x00462d10 (87 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004986b0 ((undefined4 (__fastcall *)(int))0x004986b0)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_00462d10 1
void __fastcall rb_00462d10(int param_1)

{

  FUN_004986b0(param_1);
  FUN_00539eb0(param_1 + 0x5e4,0x10,10,op_sunlight);
  return;
}
