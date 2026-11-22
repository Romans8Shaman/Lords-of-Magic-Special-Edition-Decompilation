/* Rebuilt from lomse.exe FUN_00539e70 @ 0x00539e70 (54 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6b30 (*(undefined4 * *)0x005d6b30)
#define DAT_005d6b34 (*(undefined4 * *)0x005d6b34)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define __amsg_exit ((void (__cdecl *)(int))0x0053c470)

#define LOM_SELF_00539e70 1
void __cdecl rb_00539e70(void)

{
  DAT_005d6b34 = (undefined4 *)FUN_0053c1f0(0x80);
  if (DAT_005d6b34 == (undefined4 *)0x0) {
    __amsg_exit(0x18);
  }
  *DAT_005d6b34 = 0;
  DAT_005d6b30 = DAT_005d6b34;
  return;
}
