/* Rebuilt from lomse.exe FUN_00504b80 @ 0x00504b80 (150 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_004950c0 ((undefined4 * (__thiscall *)(void *, int *))0x004950c0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00497270 ((undefined4 (__thiscall *)(void *, int, int, uint, int, undefined2))0x00497270)

#define LOM_SELF_00504b80 1
void __fastcall rb_00504b80(int param_1)

{
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_2c[8];
#define local_2c (*(_t_local_2c *)(_fr + 0x4))

  if (*(int *)(param_1 + 0x22ff4) != 0) {
    FUN_004950c0(local_2c,*(int **)(param_1 + 0x68c));
    FUN_00497270(local_2c,0,0,*(int *)(param_1 + 0x2dd4) * 2 + 0x280,
                 *(int *)(param_1 + 0x2dd8) * 2 + 0x180,0);
    DAT_00583648 = DAT_00583648 + -0x20;
    FUN_00495590(local_2c);
  }
  return;
#undef local_2c
}
