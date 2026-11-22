/* Rebuilt from lomse.exe FUN_004141f0 @ 0x004141f0 (231 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004141f0 1
void __thiscall rb_004141f0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x44);
  if (iVar1 == 0) {
    *param_1 = 0x18;
    *param_2 = 0x24;
    return;
  }
  if (iVar1 == 1) {
    *param_1 = 0xf;
    *param_2 = 0x21;
    return;
  }
  if (iVar1 == 2) {
    *param_1 = 0xc;
    *param_2 = 0x18;
    return;
  }
  if (iVar1 == 3) {
    *param_1 = 0xf;
    *param_2 = 0xf;
    return;
  }
  if (iVar1 == 4) {
    *param_1 = 0x18;
    *param_2 = 0xc;
    return;
  }
  if (iVar1 == 5) {
    *param_1 = 0x21;
    *param_2 = 0xf;
    return;
  }
  if (iVar1 == 6) {
    *param_1 = 0x24;
    *param_2 = 0x18;
    return;
  }
  *param_1 = 0x21;
  *param_2 = 0x21;
  return;
}
