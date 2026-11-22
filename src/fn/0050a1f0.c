/* Rebuilt from lomse.exe FUN_0050a1f0 @ 0x0050a1f0 (50 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee70 (*(int *)0x005aee70)
#define FUN_0049f200 ((undefined4 (__fastcall *)(undefined4 *))0x0049f200)
#define FUN_004bee50 ((undefined4 (__thiscall *)(void *, int))0x004bee50)
#define FUN_0050a4b0 ((undefined4 (__fastcall *)(int))0x0050a4b0)

#define LOM_SELF_0050a1f0 1
void __fastcall rb_0050a1f0(int param_1)

{
  FUN_004bee50((void *)(param_1 + 0x7c),DAT_005aee70);
  FUN_0050a4b0(param_1);
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0049f200((undefined4 *)(param_1 + 0x18));
  return;
}
