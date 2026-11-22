/* Rebuilt from lomse.exe FUN_0048a450 @ 0x0048a450 (131 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2ca0 (*(int *)0x005d2ca0)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_0048a680 ((undefined4 (__fastcall *)(undefined4 *))0x0048a680)

#define LOM_SELF_0048a450 1
undefined4 __thiscall rb_0048a450(void *this,undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar3 = FUN_0048a680(param_1);
    if (DAT_005d2ca0 == 0) {
      *(undefined1 *)((int)this + 0x4d439) = *(undefined1 *)((int)param_1 + 5);
    }
  }
  else {
    bVar1 = *(byte *)((int)param_1 + 7);
    uVar2 = FUN_0048a400((int)this);
    if (bVar1 == uVar2) {
      uVar3 = FUN_0048a680(param_1);
      return uVar3;
    }
    if (*(char *)(param_1 + 1) != 'P') {
      if (bVar1 == 1) {
        uVar3 = FUN_0048a680(param_1);
        return uVar3;
      }
      return 0;
    }
  }
  return uVar3;
}
