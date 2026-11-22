/* Rebuilt from lomse.exe FUN_004498d0 @ 0x004498d0 (157 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00449a20 ((uint (__thiscall *)(void *, int))0x00449a20)

#define LOM_SELF_004498d0 1
undefined4 __thiscall rb_004498d0(void *this,int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00449a20(this,param_1);
    switch(*(undefined2 *)((int)this + 0x56)) {
    case 0:
      return (uint)(uVar1 != 2);
    case 1:
      if (uVar1 == 0) {
        return 1;
      }
      if (uVar1 == 3) {
        return 1;
      }
      return 0;
    case 2:
      if (((uVar1 != 1) && (uVar1 != 3)) && (uVar1 != 6)) {
        return 1;
      }
      break;
    case 3:
      if ((uVar1 != 1) && (uVar1 != 4)) {
        return 1;
      }
      break;
    case 4:
      if ((uVar1 != 2) && (uVar1 != 4)) {
        return 1;
      }
      break;
    case 5:
      return (uint)(uVar1 != 1);
    case 6:
    case 7:
      return 1;
    }
  }
  return 0;
}
