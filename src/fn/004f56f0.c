/* Rebuilt from lomse.exe FUN_004f56f0 @ 0x004f56f0 (87 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f5750 ((undefined4 (__fastcall *)(int))0x004f5750)
#define FUN_0052b240 ((undefined4 (__fastcall *)(undefined4 *))0x0052b240)
#define PTR_LAB_0054de30 (*(undefined * *)0x0054de30)
#define PTR_LAB_0054de68 (*(undefined * *)0x0054de68)

#define LOM_SELF_004f56f0 1
undefined4 * __fastcall rb_004f56f0(undefined4 *param_1)

{

  *param_1 = &PTR_LAB_0054de30;
  FUN_0052b240(param_1 + 4);
  *param_1 = &PTR_LAB_0054de68;
  FUN_004f5750((int)param_1);
  return param_1;
}
