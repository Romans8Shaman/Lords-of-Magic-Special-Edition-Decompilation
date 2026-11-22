/* Rebuilt from lomse.exe FUN_0051ab90 @ 0x0051ab90 (107 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7aa4 (*(undefined4 *)0x005a7aa4)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_004f6730 ((undefined4 (__fastcall *)(int))0x004f6730)

#define LOM_SELF_0051ab90 1
void __fastcall rb_0051ab90(int param_1)

{
  *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1a4) + *(int *)(param_1 + 0x1ec);
  *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1ec);
  *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1f0);
  *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x1a8) + *(int *)(param_1 + 0x1f0);
  FUN_004f6730(0x5ae974);
  FUN_00476010(&DAT_005a7aa4,0,0,0x27f,0x1df);
  return;
}
