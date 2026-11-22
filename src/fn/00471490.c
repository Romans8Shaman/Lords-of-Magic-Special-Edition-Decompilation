/* Rebuilt from lomse.exe FUN_00471490 @ 0x00471490 (172 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_0058364c (*(int *)0x0058364c)
#define FUN_004950c0 ((undefined4 * (__thiscall *)(void *, int *))0x004950c0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00495db0 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00495db0)

#define LOM_SELF_00471490 1
void __fastcall rb_00471490(int param_1)

{
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_40[4];
  typedef undefined4 _t_local_30;
  typedef int _t_local_2c[8];
#define local_40 (*(_t_local_40 *)(_fr + 0x0))
#define local_30 (*(_t_local_30 *)(_fr + 0x10))
#define local_2c (*(_t_local_2c *)(_fr + 0x14))

  if (*(int *)(param_1 + 0x20) != 0) {
    local_30 = *(undefined4 *)(param_1 + 0x34);
    local_40[3] = *(undefined4 *)(param_1 + 0x30);
    DAT_0058364c = DAT_0058364c + 0x14;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[0] = param_1;
    FUN_004950c0(local_2c,*(int **)(param_1 + 0x24));
    FUN_00495db0(local_2c,local_40,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x2c));
    DAT_00583648 = DAT_00583648 + -0x20;
    FUN_00495590(local_2c);
    DAT_0058364c = DAT_0058364c + -0x14;
  }
  return;
#undef local_40
#undef local_30
#undef local_2c
}
