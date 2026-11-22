/* Rebuilt from lomse.exe FUN_00530f00 @ 0x00530f00 (289 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058516c (*(int * *)0x0058516c)
#define DAT_00585170 (*(int * *)0x00585170)
#define DAT_00585174 (*(undefined4 *)0x00585174)
#define DAT_0058517c (*(undefined4 *)0x0058517c)
#define FUN_00531930 ((undefined4 (__thiscall *)(void *))0x00531930)
#define FUN_005319b0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x005319b0)
#define Ordinal_19 (*(__typeof__(undefined4 (__stdcall *)(undefined4)) *)0x0054d360) /* SMACKW32.DLL!Ordinal_19 via IAT */
#define Ordinal_21 (*(__typeof__(undefined4 (__stdcall *)(undefined4)) *)0x0054d358) /* SMACKW32.DLL!Ordinal_21 via IAT */

#define LOM_SELF_00530f00 1

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

void __fastcall rb_00530f00(int *param_1)

{
  uchar _fr[0x80] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_74;
  typedef undefined4 _t_uStack_70;
  typedef undefined4 _t_uStack_6c;
  typedef undefined4 _t_uStack_68;
  typedef undefined4 _t_auStack_64[23];
  typedef undefined4 _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_74 (*(_t_uStack_74 *)(_fr + 0x4))
#define uStack_70 (*(_t_uStack_70 *)(_fr + 0x8))
#define uStack_6c (*(_t_uStack_6c *)(_fr + 0xc))
#define uStack_68 (*(_t_uStack_68 *)(_fr + 0x10))
#define auStack_64 (*(_t_auStack_64 *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x70))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x74))
  
  Ordinal_19(*param_1);
  uStack_70 = 0;
  uStack_68 = 0x1e0;
  uStack_74 = 0;
  uStack_6c = 0x280;
  if (param_1[0x89] == 0) {
    FUN_005319b0(param_1,4,param_1[0x87],param_1[0x88]);
    ((undefined4 (__stdcall *)(__typeof__(DAT_00585170), __typeof__(0), __typeof__(0), __typeof__(DAT_00585174), __typeof__(&uStack_74), __typeof__(0)))(**(code **)(*DAT_00585170 + 0x1c)))(DAT_00585170,0,0,DAT_00585174,&uStack_74,0);
  }
  else {
    FUN_005319b0(param_1,1,param_1[0x87],param_1[0x88]);
  }
  Ordinal_21(*param_1);
  if (*(int *)(*param_1 + 0x68) != 0) {
    FUN_00531930(param_1);
  }
  if (param_1[0x89] == 0) {
    auStack_64[0] = 100;
    uStack_8 = 0;
    uStack_4 = 0;
    ((undefined4 (__stdcall *)(__typeof__(DAT_00585170), __typeof__(0), __typeof__(DAT_0058517c), __typeof__(param_1 + 0x83), __typeof__(0x1010000), __typeof__(auStack_64)))(**(code **)(*DAT_00585170 + 0x14)))
              (DAT_00585170,0,DAT_0058517c,param_1 + 0x83,0x1010000,auStack_64);
    ((undefined4 (__stdcall *)(__typeof__(DAT_0058516c), __typeof__(0), __typeof__(0), __typeof__(DAT_00585170), __typeof__(0), __typeof__(0)))(**(code **)(*DAT_0058516c + 0x1c)))(DAT_0058516c,0,0,DAT_00585170,0,0);
    v15_flush_primary(0x584ae8);
    return;
  }
  ((undefined4 (__stdcall *)(__typeof__(DAT_0058516c), __typeof__(param_1[0x87]), __typeof__(param_1[0x88]), __typeof__(DAT_00585170), __typeof__(param_1 + 0x83), __typeof__(0)))(**(code **)(*DAT_0058516c + 0x1c)))
            (DAT_0058516c,param_1[0x87],param_1[0x88],DAT_00585170,param_1 + 0x83,0);
  v15_flush_primary(0x584ae8);
  return;
#undef uStack_74
#undef uStack_70
#undef uStack_6c
#undef uStack_68
#undef auStack_64
#undef uStack_8
#undef uStack_4
}
