/* Rebuilt from lomse.exe FUN_00454ec0 @ 0x00454ec0 (133 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a6e60 ((undefined4 (__thiscall *)(void *, int, int))0x004a6e60)

#define LOM_SELF_00454ec0 1
void __thiscall rb_00454ec0(void *this,int param_1,int param_2)

{
  int iVar1;
  uchar _fr[0x5f0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_5e8[375];
#define local_5e8 (*(_t_local_5e8 *)(_fr + 0x0))

  FUN_00411610(local_5e8);
  iVar1 = FUN_004a6e60((void *)((int)this + 0x482c),param_1,param_2);
  FUN_00482ac0(this,iVar1,0);
  FUN_00411910(local_5e8);
  return;
#undef local_5e8
}
