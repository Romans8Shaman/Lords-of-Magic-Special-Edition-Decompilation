/* Rebuilt from lomse.exe FUN_00543180 @ 0x00543180 (58 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574e92 (*(undefined *)0x00574e92)
#define DAT_005d5328 (*(undefined4 *)0x005d5328)

#define LOM_SELF_00543180 1
undefined4 __cdecl rb_00543180(uint param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if ((*(byte *)((int)&DAT_005d5328 + (param_1 & 0xff) + 1) & param_3) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(&DAT_00574e92 + (param_1 & 0xff) * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
