/* Rebuilt from lomse.exe FUN_005436c0 @ 0x005436c0 (61 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574964 (*(int *)0x00574964)
#define DAT_005d5240 (*(int *)0x005d5240)
#define DAT_005d566c (*(undefined * *)0x005d566c)
#define FUN_00543700 ((undefined4 (__cdecl *)(int))0x00543700)

#define LOM_SELF_005436c0 1
void __stdcall rb_005436c0(void)

{
  if ((DAT_005d5240 == 1) || ((DAT_005d5240 == 0 && (DAT_00574964 == 1)))) {
    FUN_00543700(0xfc);
    if (DAT_005d566c != (code *)0x0) {
      ((undefined4 (__stdcall *)(void))(DAT_005d566c))() /* HAND r68: call the pointer; *DAT read a byte */;
    }
    FUN_00543700(0xff);
  }
  return;
}
