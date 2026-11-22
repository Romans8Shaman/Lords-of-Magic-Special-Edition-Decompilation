/* Rebuilt from lomse.exe FUN_005005f0 @ 0x005005f0 (81 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048d730 ((undefined4 (__fastcall *)(int))0x0048d730)

#define LOM_SELF_005005f0 1
int __thiscall rb_005005f0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 & 0xff000000) == 0x11000000) &&
     ((int)(param_1 & 0xffffff) < *(int *)((int)this + 0x25598))) {
    iVar1 = (param_1 & 0xffffff) * 0x80;
    iVar2 = FUN_0048d730(*(int *)((int)this + 0x255a0) + iVar1);
    if (iVar2 != 0) {
      return *(int *)((int)this + 0x255a0) + iVar1;
    }
  }
  return 0;
}
