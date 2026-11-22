/* Rebuilt from lomse.exe FUN_0049f120 @ 0x0049f120 (10 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005836f4 (*(undefined4 *)0x005836f4)
#define FUN_0049f170 ((undefined4 * (__fastcall *)(int *))0x0049f170)

#define LOM_SELF_0049f120 1
undefined4 * __stdcall rb_0049f120(void)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0049f170(&DAT_005836f4);
  return puVar1;
}
