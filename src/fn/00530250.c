/* Rebuilt from lomse.exe FUN_00530250 @ 0x00530250 (220 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)
#define FUN_00415170 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x00415170)
#define FUN_00420970 ((undefined4 (__fastcall *)(void *))0x00420970)
#define FUN_0052d190 ((undefined4 (__fastcall *)(int))0x0052d190)
#define FUN_0052d240 ((undefined4 * (__fastcall *)(int))0x0052d240)

#define LOM_SELF_00530250 1
undefined4 __fastcall rb_00530250(int param_1)

{
  undefined4 *this;
  uint uVar1;
  undefined4 uVar2;
  uchar _fr[0x5f0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_5e8[375];
#define local_5e8 (*(_t_local_5e8 *)(_fr + 0x0))

  if (*(int *)(param_1 + 0x2e8) == 3) {
    return 1;
  }
  this = FUN_0052d240(param_1);
  if (this == (undefined4 *)0x0) {
    return 0;
  }
  uVar1 = FUN_0052d190(param_1);
  if (uVar1 == 0) {
    uVar1 = 0xffffffff;
  }
  FUN_00411610(local_5e8);
  FUN_00415170(this,local_5e8,uVar1);
  uVar2 = FUN_00420970(local_5e8);
  FUN_004117f0(local_5e8,0);
  FUN_00411910(local_5e8);
  return uVar2;
#undef local_5e8
}
