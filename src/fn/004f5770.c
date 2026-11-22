/* Rebuilt from lomse.exe FUN_004f5770 @ 0x004f5770 (90 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f56c0 ((undefined4 (__fastcall *)(int *))0x004f56c0)
#define FUN_004f5800 ((undefined4 (__fastcall *)(int))0x004f5800)
#define PTR_LAB_0054de30 (*(undefined * *)0x0054de30)
#define PTR_LAB_0054de68 (*(undefined * *)0x0054de68)

#define LOM_SELF_004f5770 1
void __fastcall rb_004f5770(undefined4 *param_1)

{

  *param_1 = &PTR_LAB_0054de68;
  if (-1 < (int)param_1[1]) {
    FUN_004f5800((int)param_1);
  }
  FUN_004f56c0(param_1 + 4);
  *param_1 = &PTR_LAB_0054de30;
  return;
}
