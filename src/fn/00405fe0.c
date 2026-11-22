/* Rebuilt from lomse.exe FUN_00405fe0 @ 0x00405fe0 (__thiscall).
 * HAND-WRITTEN: Ghidra's extraout_var (upper EAX bytes of the bool callee) -> return the callee's full EAX. */
#include "lom.h"

#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_00406000_EAX ((undefined4 (__thiscall *)(void *, int, uint))0x00406000) /* bool in AL; caller returns all of EAX */

#define LOM_SELF_00405fe0 1
undefined4 __thiscall rb_00405fe0(void *this,int param_1)

{
  uint uVar2;
  undefined *this_00;

  uVar2 = *(uint *)((int)this + 0x54);
  this_00 = FUN_004c6fc0();
  return FUN_00406000_EAX(this_00,param_1,uVar2);
}
