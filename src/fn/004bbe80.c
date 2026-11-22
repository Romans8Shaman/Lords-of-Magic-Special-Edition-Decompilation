/* Rebuilt from lomse.exe FUN_004bbe80 @ 0x004bbe80 (147 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00462d10 ((undefined4 (__fastcall *)(int))0x00462d10)
#define FUN_004bbe50 ((undefined4 (__fastcall *)(int))0x004bbe50)
#define FUN_004bede0 ((undefined4 (__fastcall *)(int *))0x004bede0)
#define FUN_0050a190 ((undefined4 (__fastcall *)(int))0x0050a190)
#define FUN_0051b7d0 ((undefined4 (__fastcall *)(int))0x0051b7d0)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define thunk_FUN_0042d4f0 ((undefined4 (__fastcall *)(int))0x0042d4e0)

#define LOM_SELF_004bbe80 1
void __fastcall rb_004bbe80(int param_1)

{

  FUN_004bbe50(param_1);
  FUN_0051b7d0(param_1 + 0x1c64);
  FUN_00462d10(param_1 + 0x15e0);
  FUN_00539eb0(param_1 + 0xd28,0x88,0x10,FUN_0050a190);
  FUN_004bede0((int *)(param_1 + 0x34));
  thunk_FUN_0042d4f0(param_1);
  return;
}
