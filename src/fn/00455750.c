/* Rebuilt from lomse.exe FUN_00455750 @ 0x00455750 (198 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00455750 1
void __thiscall rb_00455750(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  
  *param_2 = 0;
  *param_3 = 0;
  cVar1 = *(char *)((int)this + 0x4c);
  if (cVar1 == '\0') {
    if (param_1 == 1) {
      *param_2 = 0xffffffff;
      *param_3 = 0;
      return;
    }
    if (param_1 == 2) {
      *param_2 = 1;
      *param_3 = 0;
      return;
    }
    return;
  }
  if (cVar1 == '\x02') {
    if (param_1 != 1) {
      if (param_1 == 2) {
        *param_2 = 0;
        *param_3 = 1;
        return;
      }
      return;
    }
  }
  else {
    if (cVar1 == '\x04') {
      if (param_1 == 1) {
        *param_2 = 1;
        *param_3 = 0;
        return;
      }
      if (param_1 == 2) {
        *param_2 = 0xffffffff;
        *param_3 = 0;
        return;
      }
      return;
    }
    if (cVar1 != '\x06') {
      return;
    }
    if (param_1 == 1) {
      *param_2 = 0;
      *param_3 = 1;
      return;
    }
    if (param_1 != 2) {
      return;
    }
  }
  *param_2 = 0;
  *param_3 = 0xffffffff;
  return;
}
