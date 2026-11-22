/* Rebuilt from lomse.exe FUN_004c10e0 @ 0x004c10e0 (62 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee70 (*(int *)0x005aee70)
#define FUN_004bca80 ((undefined4 (__fastcall *)(int))0x004bca80)
#define FUN_004bee00 ((undefined4 (__fastcall *)(int))0x004bee00)
#define FUN_004bee50 ((undefined4 (__thiscall *)(void *, int))0x004bee50)

#define LOM_SELF_004c10e0 1
void __fastcall rb_004c10e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x15b8) = 0xffffffff;
  FUN_004bca80(param_1);
  FUN_004bee50((void *)(param_1 + 0x34),DAT_005aee70);
  FUN_004bee00(param_1);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x15d8) = *(uint *)(param_1 + 0x15d8) & 0xffffff7f;
  return;
}
