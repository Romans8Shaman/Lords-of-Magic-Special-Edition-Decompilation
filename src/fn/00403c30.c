/* Rebuilt from lomse.exe FUN_00403c30 @ 0x00403c30 (28 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)

#define LOM_SELF_00403c30 1
void __thiscall rb_00403c30(void *this,void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1c);
  *(undefined4 *)this = 1;
  *(undefined4 *)((int)this + 8) = uVar1;
  FUN_0041efa0(param_1,2);
  return;
}
