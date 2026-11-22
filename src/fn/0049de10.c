/* Rebuilt from lomse.exe FUN_0049de10 @ 0x0049de10 (44 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_005836cc (*(byte *)0x005836cc)
#define DAT_005836f8 (*(undefined4 *)0x005836f8)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)

#define LOM_SELF_0049de10 1
void __cdecl rb_0049de10(void)

{
  if ((DAT_005836cc & 1) == 0) {
    DAT_005836cc = DAT_005836cc | 1;
    DAT_00583648 = DAT_00583648 + -0x20;
    FUN_00495590(&DAT_005836f8);
    return;
  }
  return;
}
