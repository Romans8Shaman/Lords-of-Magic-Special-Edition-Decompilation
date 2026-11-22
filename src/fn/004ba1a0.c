/* Rebuilt from lomse.exe FUN_004ba1a0 @ 0x004ba1a0 (24 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584484 (*(int *)0x00584484)
#define FUN_004f59f0 ((undefined4 (__fastcall *)(undefined4 *))0x004f59f0)
#define PTR_LAB_0054dc68 (*(undefined * *)0x0054dc68)

#define LOM_SELF_004ba1a0 1
void __fastcall rb_004ba1a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0054dc68;
  DAT_00584484 = DAT_00584484 + -0x58;
  FUN_004f59f0(param_1);
  return;
}
