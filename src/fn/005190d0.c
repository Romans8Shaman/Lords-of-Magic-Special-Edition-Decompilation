/* Rebuilt from lomse.exe FUN_005190d0 @ 0x005190d0 (476 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00585170 (*(int * *)0x00585170)
#define DAT_00585174 (*(undefined4 *)0x00585174)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005d2094 (*(byte *)0x005d2094)
#define DAT_005d20b8 (*(int *)0x005d20b8)
#define FUN_00476f70 ((undefined4 (__fastcall *)(uint *))0x00476f70)
#define FUN_004779b0 ((undefined4 (__thiscall *)(void *, int, int, int, int, uint))0x004779b0)

#define LOM_SELF_005190d0 1
undefined4 __thiscall rb_005190d0(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_34;
  typedef int _t_iStack_2c;
  typedef int _t_iStack_28;
  typedef int _t_iStack_20;
  typedef int _t_iStack_1c;
  typedef int _t_iStack_18;
  typedef int _t_iStack_14;
  typedef int _t_iStack_10;
  typedef int _t_iStack_c;
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define iStack_34 (*(_t_iStack_34 *)(_fr + 0x4))
#define iStack_2c (*(_t_iStack_2c *)(_fr + 0xc))
#define iStack_28 (*(_t_iStack_28 *)(_fr + 0x10))
#define iStack_20 (*(_t_iStack_20 *)(_fr + 0x18))
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x1c))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x20))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x24))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x28))
#define iStack_c (*(_t_iStack_c *)(_fr + 0x2c))
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x30))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x34))
  
  iStack_34 = 0x17f;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 8) {
    iStack_34 = 0x1df;
  }
  if ((param_1 == (uint *)0x0) || (param_1[3] != 0)) {
    iStack_c = *(int *)((int)this + 0x1b4);
    iStack_10 = *(int *)((int)this + 0x1b0);
    iStack_4 = iStack_34 + iStack_c;
    iStack_8 = iStack_10 + 0x280;
    ((undefined4 (__stdcall *)(__typeof__(DAT_00585170), __typeof__(0), __typeof__(0), __typeof__(DAT_00585174), __typeof__(&iStack_10), __typeof__(0)))(**(code **)(*DAT_00585170 + 0x1c)))(DAT_00585170,0,0,DAT_00585174,&iStack_10,0);
  }
  else {
    if (DAT_005d20b8 != 0) {
      FUN_00476f70(param_1);
    }
    uVar1 = *param_1;
    iStack_2c = 0;
    if (0 < (int)uVar1) {
      iStack_28 = 0;
      do {
        if ((iStack_28 < 0) || ((int)*param_1 <= iStack_2c)) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(param_1[4] + iStack_28);
        }
        iVar2 = *piVar4;
        iVar3 = piVar4[1];
        iStack_18 = piVar4[2];
        iStack_14 = piVar4[3];
        if (0x27f < iStack_18) {
          iStack_18 = 0x27f;
        }
        if (iStack_34 < iStack_14) {
          iStack_14 = iStack_34;
        }
        if ((iVar2 <= iStack_18) && (iVar3 <= iStack_14)) {
          iStack_20 = iVar2;
          iStack_1c = iVar3;
          if ((DAT_005d2094 & 1) != 0) {
            FUN_004779b0(&DAT_00584ae8,iVar2,iVar3,iStack_18,iStack_14,0xcccc);
          }
          iStack_20 = iStack_20 + *(int *)((int)this + 0x1b0);
          iStack_18 = iStack_18 + 1 + *(int *)((int)this + 0x1b0);
          iStack_1c = iStack_1c + *(int *)((int)this + 0x1b4);
          iStack_14 = iStack_14 + 1 + *(int *)((int)this + 0x1b4);
          ((undefined4 (__stdcall *)(__typeof__(DAT_00585170), __typeof__(iVar2), __typeof__(iVar3), __typeof__(DAT_00585174), __typeof__(&iStack_20), __typeof__(0)))(**(code **)(*DAT_00585170 + 0x1c)))(DAT_00585170,iVar2,iVar3,DAT_00585174,&iStack_20,0);
        }
        iStack_2c = iStack_2c + 1;
        iStack_28 = iStack_28 + 0x10;
      } while (iStack_2c < (int)uVar1);
      return 1;
    }
  }
  return 1;
#undef iStack_34
#undef iStack_2c
#undef iStack_28
#undef iStack_20
#undef iStack_1c
#undef iStack_18
#undef iStack_14
#undef iStack_10
#undef iStack_c
#undef iStack_8
#undef iStack_4
}
