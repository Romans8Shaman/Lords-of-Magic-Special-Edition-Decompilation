/* Rebuilt from lomse.exe FUN_0049dde0 @ 0x0049dde0 (23 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_005836f8 (*(undefined4 *)0x005836f8)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)

#define LOM_SELF_0049dde0 1
void __stdcall rb_0049dde0(void)

{
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(&DAT_005836f8);
  return;
}
