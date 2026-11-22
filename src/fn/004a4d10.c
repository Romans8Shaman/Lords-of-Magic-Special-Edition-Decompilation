/* Rebuilt from lomse.exe FUN_004a4d10 @ 0x004a4d10 (481 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a4d10 1
int __thiscall rb_004a4d10(void *this,int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    if (param_1 < *(int *)((int)this + 0x6c)) {
      return *(int *)((int)this + 0x74) + param_1;
    }
    return param_1 - *(int *)((int)this + 0x6c);
  case 1:
    break;
  case 2:
    if (param_1 % *(int *)((int)this + 0x6c) < *(int *)((int)this + 0x78)) {
      return param_1 + 1;
    }
    return param_1 - *(int *)((int)this + 0x78);
  case 3:
    if (*(int *)((int)this + 0x74) <= param_1) {
      if (param_1 - *(int *)((int)this + 0x74) < *(int *)((int)this + 0x78)) {
        return param_1 - *(int *)((int)this + 0x8c);
      }
      return param_1 - *(int *)((int)this + 0x90);
    }
    if (param_1 % *(int *)((int)this + 0x6c) < *(int *)((int)this + 0x78)) {
      return *(int *)((int)this + 0x88) + param_1;
    }
    return param_1 + 1;
  case 4:
    if (param_1 < *(int *)((int)this + 0x74)) {
      return *(int *)((int)this + 0x6c) + param_1;
    }
    return param_1 - *(int *)((int)this + 0x74);
  case 5:
    if (*(int *)((int)this + 0x74) <= param_1) {
      if (param_1 - *(int *)((int)this + 0x74) < 1) {
        return param_1 - *(int *)((int)this + 0x9c);
      }
      return param_1 - *(int *)((int)this + 0x98);
    }
    if (param_1 % *(int *)((int)this + 0x6c) < 1) {
      return *(int *)((int)this + 0x94) + param_1;
    }
    return *(int *)((int)this + 0x78) + param_1;
  case 6:
    if (param_1 % *(int *)((int)this + 0x6c) < 1) {
      return *(int *)((int)this + 0x78) + param_1;
    }
    return param_1 + -1;
  case 7:
    if (param_1 < *(int *)((int)this + 0x6c)) {
      if (param_1 < 1) {
        return *(int *)((int)this + 0xa4) + param_1;
      }
      return *(int *)((int)this + 0x8c) + param_1;
    }
    if (param_1 % *(int *)((int)this + 0x6c) < 1) {
      return param_1 + -1;
    }
    return param_1 - *(int *)((int)this + 0xa0);
  default:
    return param_1;
  }
  if (param_1 < *(int *)((int)this + 0x6c)) {
    if (param_1 < *(int *)((int)this + 0x78)) {
      return *(int *)((int)this + 0x80) + param_1;
    }
    return *(int *)((int)this + 0x84) + param_1;
  }
  if (param_1 % *(int *)((int)this + 0x6c) < *(int *)((int)this + 0x78)) {
    return param_1 - *(int *)((int)this + 0x78);
  }
  return param_1 - *(int *)((int)this + 0x7c);
}
