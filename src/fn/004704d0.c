/* Rebuilt from lomse.exe FUN_004704d0 @ 0x004704d0 (366 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005d1e84 (*(int * *)0x005d1e84)
#define FUN_00474e70 ((uint (__thiscall *)(void *, uint *, uint *, uint *, ushort))0x00474e70)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00495db0 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00495db0)

#define LOM_SELF_004704d0 1
undefined4
__stdcall rb_004704d0(undefined1 volatile param_1, uint volatile param_2, int volatile param_3, uint volatile param_4, uint volatile param_5, int *volatile param_6, int *volatile param_7, undefined4 *volatile param_8)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_auStack_2c[5];
  typedef uint _t_uStack_18;
#define auStack_2c (*(_t_auStack_2c *)(_fr + 0x4))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x18))

  if (DAT_005d1e84 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)((undefined4 (__thiscall *)(__typeof__((void *)(DAT_005d1e84)), __typeof__(&param_1), __typeof__(param_2)))(**(code **)(*DAT_005d1e84 + 0x60)))((void *)(DAT_005d1e84),&param_1,param_2);
  }
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    DAT_00583648 = DAT_00583648 + 0x20;
    FUN_00494610(auStack_2c);
    puVar6 = (uint *)*piVar1;
    puVar8 = auStack_2c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar3 = uStack_18 & 0xfffffffe;
    auStack_2c[0] = param_4;
    auStack_2c[1] = piVar1[3];
    *param_6 = piVar1[3];
    *param_7 = piVar1[4];
    if ((uStack_18 & 4) == 0) {
      *param_8 = 8;
      piVar5 = (int *)piVar1[3];
      param_6 = piVar5;
      uStack_18 = uVar3;
      if (param_3 != 0) {
        iVar4 = 0;
        puVar7 = (undefined1 *)(param_3 + 2);
        do {
          FUN_00474e70(&DAT_00584ae8,(uint *)&param_8,&param_2,&param_4,
                       CONCAT22((short)((uint)piVar5 >> 0x10),
                                *(undefined2 *)(*(int *)(*piVar1 + 0x10) + iVar4)));
          iVar4 = iVar4 + 2;
          piVar5 = (int *)CONCAT31((uint)((uint)0 >> 8),(undefined1)param_4);
          puVar7[-2] = (*(uchar *)((uchar *)&param_8 + 0));
          puVar7[-1] = (undefined1)param_2;
          *puVar7 = (undefined1)param_4;
          puVar7[1] = 0;
          puVar7 = puVar7 + 4;
        } while (iVar4 < 0x200);
      }
      piVar5 = param_6;
    }
    else {
      *param_8 = 0x10;
      piVar5 = (int *)(piVar1[3] << 1);
      uStack_18 = uVar3;
    }
    auStack_2c[2] = param_5 / (uint)piVar5;
    FUN_00495db0(auStack_2c,piVar1,0,0);
    DAT_00583648 = DAT_00583648 + -0x20;
    FUN_00495590((int *)auStack_2c);
    uVar2 = 1;
  }
  return uVar2;
#undef auStack_2c
#undef uStack_18
}
