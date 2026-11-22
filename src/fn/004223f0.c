/* Rebuilt from lomse.exe FUN_004223f0 @ 0x004223f0 (104 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004225a0 ((undefined4 (__thiscall *)(void *, void *, int))0x004225a0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_004223f0 1
void __thiscall rb_004223f0(void *this,int *param_1)

{
  undefined4 *this_00;
  void *pvVar1;
  
  this_00 = FUN_00485080(this,*param_1,0x2f);
  if (this_00 == (undefined4 *)0x0) {
    return;
  }
  pvVar1 = (void *)FUN_00482ac0(this,param_1[1],2);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)FUN_00482ac0(this,param_1[1],3);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)FUN_00482ac0(this,param_1[1],1);
      if (pvVar1 == (void *)0x0) {
        return;
      }
    }
  }
  FUN_004225a0(this_00,pvVar1,1);
  return;
}
