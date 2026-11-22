/* Rebuilt from lomse.exe FUN_0050a190 @ 0x0050a190 (87 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004bede0 ((undefined4 (__fastcall *)(int *))0x004bede0)
#define FUN_0050a4b0 ((undefined4 (__fastcall *)(int))0x0050a4b0)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_0050a190 1
void __fastcall rb_0050a190(int param_1)

{

  FUN_0050a4b0(param_1);
  FUN_004bede0((int *)(param_1 + 0x7c));
  op_sunlight();
  return;
}
