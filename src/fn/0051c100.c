/* Rebuilt from lomse.exe FUN_0051c100 @ 0x0051c100 (108 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004c8660 ((undefined4 (__fastcall *)(int))0x004c8660)

#define LOM_SELF_0051c100 1
undefined4 __thiscall rb_0051c100(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = FUN_004c8660(param_1);
  iVar1 = *(int *)((int)this + 0x68);
  if (iVar2 != iVar1) {
    if ((iVar1 < 0) || (0xf < iVar1)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = &DAT_005af194 + iVar1 * 0x1d84;
    }
    if ((iVar2 < 0) || (0xf < iVar2)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar3 + iVar2 * 0x88 + 0xd28;
    }
    if ((puVar3 != (undefined *)0x0) && ((puVar3[8] & 0x40) != 0)) {
      return 0;
    }
  }
  return 1;
}
