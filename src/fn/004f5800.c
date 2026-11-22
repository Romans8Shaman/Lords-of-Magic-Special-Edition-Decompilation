/* Rebuilt from lomse.exe FUN_004f5800 @ 0x004f5800 (56 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ad0 (*(int *)0x00584ad0)
#define FUN_004f5170 ((undefined4 (__cdecl *)(undefined4 *))0x004f5170)
#define FUN_004f5690 ((undefined4 (__thiscall *)(void *, int))0x004f5690)
#define FUN_004f58d0 ((undefined4 (__stdcall *)(void))0x004f58d0)

#define LOM_SELF_004f5800 1
void __fastcall rb_004f5800(int param_1)

{
  FUN_004f5170((undefined4 *)(param_1 + 8));
  DAT_00584ad0 = DAT_00584ad0 + -1;
  if (DAT_00584ad0 == 0) {
    FUN_004f58d0();
  }
  FUN_004f5690(*(void **)(param_1 + 0xc),*(int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}
