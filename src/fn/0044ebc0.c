/* Rebuilt from lomse.exe FUN_0044ebc0 @ 0x0044ebc0 (191 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0043b930 ((undefined4 * (__fastcall *)(undefined4 *))0x0043b930)
#define FUN_0043ba50 ((undefined4 (__fastcall *)(undefined4 *))0x0043ba50)
#define FUN_0043bac0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0043bac0)
#define FUN_0043bdc0 ((undefined4 (__fastcall *)(int *))0x0043bdc0)

#define LOM_SELF_0044ebc0 1
void __fastcall rb_0044ebc0(int param_1)

{
  undefined4 *this;
  undefined4 uVar1;
  uchar _fr[0xa8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_a0[11];
  typedef undefined4 _t_local_74;
  typedef undefined4 _t_local_60;
#define local_a0 (*(_t_local_a0 *)(_fr + 0x0))
#define local_74 (*(_t_local_74 *)(_fr + 0x2c))
#define local_60 (*(_t_local_60 *)(_fr + 0x40))

  FUN_0043b930(local_a0);
  *(undefined2 *)(param_1 + 0xcc) = *(undefined2 *)(param_1 + 0x74);
  *(undefined2 *)(param_1 + 0xce) = *(undefined2 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x68);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x1c);
  FUN_0043bac0(local_a0,(undefined4 *)(param_1 + 0xc4));
  FUN_0043bdc0(local_a0);
  this = *(undefined4 **)(param_1 + 0x2c);
  if (this != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(1)))(**(code **)*this))(this,1);
  }
  uVar1 = local_74;
  local_74 = 0;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  FUN_0043ba50(local_a0);
  return;
#undef local_a0
#undef local_74
#undef local_60
}
