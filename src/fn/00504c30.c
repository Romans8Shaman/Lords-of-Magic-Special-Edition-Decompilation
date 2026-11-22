/* Rebuilt from lomse.exe FUN_00504c30 @ 0x00504c30 (159 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_004950c0 ((undefined4 * (__thiscall *)(void *, int *))0x004950c0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00497270 ((undefined4 (__thiscall *)(void *, int, int, uint, int, undefined2))0x00497270)

#define LOM_SELF_00504c30 1

/* v1.5: if a non-16-bpp real primary was stashed at object+0x900, Blt-convert
 * the 16-bit fake primary at +0x684 onto it (DirectDraw format conversion). */
static void v15_flush_primary(int obj)
{
  int *real;
  int *fake;
  int rect[4];
  int hr;
  real = *(int **)(obj + 0x900);
  fake = *(int **)(obj + 0x684);
  if ((real == (int *)0x0) || (fake == (int *)0x0)) {
    return;
  }
  rect[0] = 0;
  rect[1] = 0;
  rect[2] = 0x280;
  rect[3] = 0x1e0;
  hr = ((int (__stdcall *)(int *, int *, int *, int, unsigned int, int))(**(code **)(*real + 0x14)))
              (real,rect,fake,0,0x1000000,0);
  if (hr == -0x7789fe3e) {
    ((int (__stdcall *)(int *))(**(code **)(*real + 0x6c)))(real);
    ((int (__stdcall *)(int *))(**(code **)(*fake + 0x6c)))(fake);
    ((int (__stdcall *)(int *, int *, int *, int, unsigned int, int))(**(code **)(*real + 0x14)))
              (real,rect,fake,0,0x1000000,0);
  }
}

void __fastcall rb_00504c30(int param_1)

{
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_2c[8];
#define local_2c (*(_t_local_2c *)(_fr + 0x4))

  if (*(int *)(param_1 + 0x22ff4) != 0) {
    FUN_004950c0(local_2c,*(int **)(param_1 + 0x688));
    FUN_00497270(local_2c,0,0,0x280,0x1e0,0);
    ((undefined4 (__stdcall *)(__typeof__(*(int **)(param_1 + 0x684)), __typeof__(0), __typeof__(0), __typeof__(*(undefined4 *)(param_1 + 0x688)), __typeof__(0), __typeof__(0)))(**(code **)(**(int **)(param_1 + 0x684) + 0x1c)))
              (*(int **)(param_1 + 0x684),0,0,*(undefined4 *)(param_1 + 0x688),0,0);
    DAT_00583648 = DAT_00583648 + -0x20;
    FUN_00495590(local_2c);
    v15_flush_primary(param_1);
  }
  return;
#undef local_2c
}
