/* Rebuilt from lomse.exe FUN_00455680 @ 0x00455680 (206 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00455680 1
void __thiscall rb_00455680(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  
  *param_2 = 0;
  *param_3 = 0;
  cVar1 = *(char *)((int)this + 0x4c);
  if (cVar1 == '\0') {
    if (param_1 == 1) {
      *param_2 = 0xfffffffe;
      *param_3 = 1;
      return;
    }
    if (param_1 == 2) {
      *param_2 = 2;
      *param_3 = 1;
      return;
    }
  }
  else if (cVar1 == '\x02') {
    if (param_1 == 1) {
      *param_2 = 0xffffffff;
      *param_3 = 0xfffffffe;
      return;
    }
    if (param_1 == 2) {
      *param_2 = 0xffffffff;
      *param_3 = 2;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if (param_1 == 1) {
      *param_2 = 2;
      *param_3 = 0xffffffff;
      return;
    }
    if (param_1 == 2) {
      *param_2 = 0xfffffffe;
      *param_3 = 0xffffffff;
      return;
    }
  }
  else if (cVar1 == '\x06') {
    if (param_1 == 1) {
      *param_2 = 1;
      *param_3 = 2;
      return;
    }
    if (param_1 == 2) {
      *param_2 = 1;
      *param_3 = 0xfffffffe;
    }
  }
  return;
}
