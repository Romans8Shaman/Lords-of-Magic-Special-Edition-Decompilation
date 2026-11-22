/* Rebuilt from lomse.exe FUN_004d3b90 @ 0x004d3b90 (647 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d3110 ((int (__fastcall *)(int, undefined4, undefined4))0x004d3110)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004d3b90 1
void __fastcall
rb_004d3b90(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0,undefined4 unused_stack_4
            )

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 unused_reg_1_00;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef undefined4 _t_local_8;
  typedef int * _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  iVar4 = *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x58);
  iVar1 = iVar4;
  if (iVar4 < iVar5) {
    pcVar7 = (char *)(*(int *)(param_1 + 0x50) + iVar4 * 8);
    do {
      if (*pcVar7 == '\x0e') break;
      iVar1 = iVar1 + 1;
      pcVar7 = pcVar7 + 8;
    } while (iVar1 < iVar5);
  }
  if (iVar1 == iVar5) {
    *(undefined4 *)(param_1 + 0x90) = 0xb;
    goto LAB_004d3df8;
  }
  uVar2 = iVar1 - iVar4;
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x90) = 0xc;
    goto LAB_004d3df8;
  }
  local_8 = 0;
  local_c = (int)uVar2 / 2;
  piVar3 = (int *)FUN_004d3110(param_1,(int)uVar2 >> 0x1f,0x10);
  if (piVar3 == (int *)0x0) {
LAB_004d3c92:
    uVar8 = 0;
    piVar3 = local_4;
  }
  else {
    *(int *)(param_1 + 0xa80) = *(int *)(param_1 + 0xa80) + 0x10;
    piVar3[1] = local_c;
    if (local_c < 1) {
      *piVar3 = 0;
    }
    else {
      iVar4 = FUN_004d3110(param_1,unused_reg_1_00,local_c * 0x10);
      *piVar3 = iVar4;
      if (iVar4 == 0) goto LAB_004d3c92;
      *(int *)(param_1 + 0xa80) = *(int *)(param_1 + 0xa80) + local_c * 0x10;
    }
    iVar4 = *(int *)(param_1 + 0x7c);
    piVar3[3] = -1;
    piVar3[2] = iVar4;
    if (0 < local_c) {
      iVar4 = 0;
      local_10 = local_c;
      do {
        iVar5 = *piVar3;
        iVar4 = iVar4 + 0x10;
        *(undefined4 *)(iVar5 + -0x10 + iVar4) = 0;
        *(int **)(iVar5 + -0xc + iVar4) = local_4;
        iVar5 = *piVar3;
        *(undefined4 *)(iVar5 + -8 + iVar4) = 0;
        *(int **)(iVar5 + -4 + iVar4) = local_4;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    local_8 = 7;
    uVar8 = 7;
  }
  if ((char)uVar8 == '\0') {
    *(undefined4 *)(param_1 + 0x90) = 2;
  }
  else {
    if (0 < local_c) {
      iVar4 = local_c << 4;
      local_10 = local_c;
      do {
        if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x58)) {
          iVar5 = *(int *)(param_1 + 0x54) + 1;
          *(int *)(param_1 + 0x54) = iVar5;
          uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x50) + -8 + iVar5 * 8);
          piVar6 = *(int **)(*(int *)(param_1 + 0x50) + -4 + iVar5 * 8);
        }
        else {
          *(undefined4 *)(param_1 + 0x90) = 6;
          FUN_004d4550((void *)param_1);
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined4 *)(param_1 + 0xa4) = 0;
          uVar8 = 0;
          piVar6 = local_4;
        }
        iVar5 = *piVar3;
        *(undefined4 *)(iVar5 + -8 + iVar4) = uVar8;
        *(int **)(iVar5 + -4 + iVar4) = piVar6;
        if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x58)) {
          iVar5 = *(int *)(param_1 + 0x54) + 1;
          *(int *)(param_1 + 0x54) = iVar5;
          uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x50) + -8 + iVar5 * 8);
          piVar6 = *(int **)(*(int *)(param_1 + 0x50) + -4 + iVar5 * 8);
        }
        else {
          *(undefined4 *)(param_1 + 0x90) = 6;
          FUN_004d4550((void *)param_1);
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined4 *)(param_1 + 0xa4) = 0;
          uVar8 = 0;
          piVar6 = local_4;
        }
        iVar5 = *piVar3;
        *(undefined4 *)(iVar5 + -0x10 + iVar4) = uVar8;
        *(int **)(iVar5 + -0xc + iVar4) = piVar6;
        if ((char)uVar8 == '\x05') {
          piVar9 = (int *)piVar3[2];
          if ((int)piVar6 <= piVar3[2]) {
            piVar9 = piVar6;
          }
          piVar3[2] = (int)piVar9;
          piVar9 = (int *)piVar3[3];
          if (piVar3[3] < (int)piVar6) {
            piVar9 = piVar6;
          }
          piVar3[3] = (int)piVar9;
          iVar5 = *(int *)(*(int *)(param_1 + 0x80) + (int)piVar6 * 4);
          *(int **)(iVar5 + 0x10) = piVar3;
          *(int *)(iVar5 + 0x14) = local_10 + -1;
        }
        iVar4 = iVar4 + -0x10;
        local_10 = local_10 + -1;
        local_c = local_c + -1;
      } while (local_c != 0);
      uVar8 = local_8;
    }
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x58)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x90) = 6;
      FUN_004d4550((void *)param_1);
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar4 = *(int *)(param_1 + 0x50);
      iVar5 = *(int *)(param_1 + 0x54) + -1;
      *(int *)(param_1 + 0x54) = iVar5;
      *(undefined4 *)(iVar4 + iVar5 * 8) = uVar8;
      *(int **)(iVar4 + 4 + iVar5 * 8) = piVar3;
      return;
    }
    *(undefined4 *)(param_1 + 0x90) = 3;
  }
LAB_004d3df8:
  FUN_004d4550((void *)param_1);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
