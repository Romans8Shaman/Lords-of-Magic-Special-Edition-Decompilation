/* Rebuilt from lomse.exe FUN_004f59a0 @ 0x004f59a0 (18 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f5960 ((undefined4 (__fastcall *)(int))0x004f5960)
#define PTR_FUN_0054de80 (*(undefined * *)0x0054de80)

#define LOM_SELF_004f59a0 1
undefined4 * __fastcall rb_004f59a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0054de80;
  FUN_004f5960((int)param_1);
  return param_1;
}
