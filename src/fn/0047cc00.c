/* Rebuilt from lomse.exe FUN_0047cc00 @ 0x0047cc00 (68 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0047cbd0 ((undefined4 * (__stdcall *)(void))0x0047cbd0)

#define LOM_SELF_0047cc00 1
int * __cdecl
rb_0047cc00(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int *this;
  
  this = FUN_0047cbd0();
  this[0x11] = param_1;
  this[0x13] = param_3;
  this[0x12] = param_2;
  this[0x1b] = param_6;
  this[0x19] = param_4;
  this[0x1c] = param_7;
  this[0x1a] = param_5;
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x2c)))(this);
  return this;
}
