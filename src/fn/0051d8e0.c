/* Rebuilt from lomse.exe FUN_0051d8e0 @ 0x0051d8e0 (54 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005cc9d4 (*(int *)0x005cc9d4)

#define LOM_SELF_0051d8e0 1
undefined * __stdcall rb_0051d8e0(void)

{
  undefined *puVar1;
  
  if ((DAT_005cc9d4 < 0) || (0xf < DAT_005cc9d4)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_005af194 + DAT_005cc9d4 * 0x1d84;
  }
  if (puVar1 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  return puVar1 + 0x1c64;
}
