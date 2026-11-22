/* Rebuilt from lomse.exe FUN_004f2cc0 @ 0x004f2cc0 (124 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f2da0 ((undefined4 (__fastcall *)(int))0x004f2da0)
#define FUN_004f3240 ((undefined4 (__thiscall *)(void *, int, ushort))0x004f3240)
#define PTR_FUN_0054ddf0 (*(undefined * *)0x0054ddf0)
#define PTR_LAB_0054dde8 (*(void * *)0x0054dde8)
#define PTR_LAB_0054de10 (*(void * *)0x0054de10)

#define LOM_SELF_004f2cc0 1
undefined4 * __thiscall rb_004f2cc0(void *this,int param_1,ushort param_2)

{

  *(undefined ***)((int)this + 4) = &PTR_LAB_0054de10;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0xbf800000;
  *(undefined4 *)((int)this + 0x10) = 0x3f800000;
  *(undefined4 *)((int)this + 0x14) = 0x40c00000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined ***)this = &PTR_FUN_0054ddf0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_0054dde8;
  FUN_004f2da0((int)this);
  FUN_004f3240(this,param_1,param_2);
  return this;
}
