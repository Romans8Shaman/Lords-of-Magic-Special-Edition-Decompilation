/* Rebuilt from lomse.exe FUN_00509570 @ 0x00509570 (46 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053a110 ((uint (__stdcall *)(void))0x0053a110)

#define LOM_SELF_00509570 1
undefined4 __thiscall rb_00509570(void *this,int *param_1)

{
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    return *(undefined4 *)((int)this + 0x3c);
  }
  if (*param_1 < 1) {
    return *(undefined4 *)((int)this + 0x3c);
  }
  uVar1 = FUN_0053a110();
  return *(undefined4 *)(param_1[1] + ((int)uVar1 % *param_1) * 4);
}
