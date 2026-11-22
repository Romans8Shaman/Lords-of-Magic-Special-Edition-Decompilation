/* Rebuilt from lomse.exe FUN_004ef6f0 @ 0x004ef6f0 (73 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004ef600 ((undefined4 (__fastcall *)(int))0x004ef600)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define PTR_FUN_0054dd88 (*(undefined * *)0x0054dd88)

#define LOM_SELF_004ef6f0 1
undefined4 * __fastcall rb_004ef6f0(undefined4 *param_1)

{

  FUN_004f59a0(param_1);
  *param_1 = &PTR_FUN_0054dd88;
  FUN_004ef600((int)param_1);
  return param_1;
}
