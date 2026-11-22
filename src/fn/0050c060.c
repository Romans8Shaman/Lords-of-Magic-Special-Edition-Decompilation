/* Rebuilt from lomse.exe FUN_0050c060 @ 0x0050c060 (78 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2d60 (*(int *)0x005d2d60)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define PTR_FUN_0054e910 (*(undefined * *)0x0054e910)

#define LOM_SELF_0050c060 1
undefined4 * __thiscall rb_0050c060(void *this,undefined4 param_1)

{
  FUN_004f59a0(this);
  *(undefined ***)this = &PTR_FUN_0054e910;
  DAT_005d2d60 = DAT_005d2d60 + 0x60;
  *(undefined4 *)((int)this + 0x48) = param_1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined2 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  *(undefined4 *)((int)this + 0x5c) = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined1 *)((int)this + 0x4c) = 0xff;
  *(undefined1 *)((int)this + 0x4d) = 1;
  return this;
}
