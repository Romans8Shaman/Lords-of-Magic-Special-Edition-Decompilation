/* Rebuilt from lomse.exe FUN_0045ac40 @ 0x0045ac40 (26 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577c8 (*(int *)0x005577c8)
#define DAT_005aa7d0 (*(undefined4 *)0x005aa7d0)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadac (*(undefined4 *)0x005aadac)

#define LOM_SELF_0045ac40 1
undefined4 __stdcall rb_0045ac40(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_005aa7d0;
  if (DAT_005aa7d4 != DAT_005577c8) {
    uVar1 = DAT_005aadac;
  }
  return uVar1;
}
