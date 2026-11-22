/* Rebuilt from lomse.exe FUN_0040adb0 @ 0x0040adb0 (100 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0040adb0 1
undefined4 * __thiscall rb_0040adb0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x50);
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    *param_1 = *(undefined4 *)(iVar2 + -8 + iVar1 * 8);
    param_1[1] = *(undefined4 *)(iVar2 + -4 + iVar1 * 8);
    return param_1;
  }
  *(undefined4 *)((int)this + 0x90) = 6;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *param_1 = 0;
  param_1[1] = local_4;
  return param_1;
#undef local_4
}
