/* Rebuilt from lomse.exe FUN_004d3930 @ 0x004d3930 (605 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d3110 ((int (__fastcall *)(int, undefined4, undefined4))0x004d3110)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_004d3930 1
void __fastcall
rb_004d3930(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0,undefined4 unused_stack_4
            )

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_1d;
  typedef int * _t_local_1c[2];
  typedef int * _t_local_14;
  typedef undefined4 _t_local_10;
  typedef undefined4 _t_local_c;
  typedef undefined4 _t_local_8;
  typedef int * _t_local_4;
#define local_1d (*(_t_local_1d *)(_fr + 0x3))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
#define local_4 (*(_t_local_4 *)(_fr + 0x1c))
  
  iVar6 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58);
  iVar1 = iVar6;
  if (iVar6 < iVar3) {
    pcVar4 = (char *)(*(int *)(param_1 + 0x50) + iVar6 * 8);
    do {
      if (*pcVar4 == '\f') break;
      iVar1 = iVar1 + 1;
      pcVar4 = pcVar4 + 8;
    } while (iVar1 < iVar3);
  }
  if (iVar1 == iVar3) {
    *(undefined4 *)(param_1 + 0x90) = 0xb;
    goto LAB_004d3b6e;
  }
  iVar1 = iVar1 - iVar6;
  uVar7 = 0;
  piVar2 = (int *)FUN_004d3110(param_1,iVar3,0x10);
  if (piVar2 != (int *)0x0) {
    iVar6 = *(int *)(param_1 + 0xa84) + 0x10;
    *(int *)(param_1 + 0xa84) = iVar6;
    piVar2[1] = iVar1;
    piVar2[2] = 0;
    piVar2[3] = 0;
    if (iVar1 < 1) {
      *piVar2 = 0;
    }
    else {
      iVar6 = FUN_004d3110(param_1,iVar6,iVar1 * 8);
      *piVar2 = iVar6;
      if (iVar6 == 0) goto LAB_004d39ee;
      *(int *)(param_1 + 0xa84) = *(int *)(param_1 + 0xa84) + iVar1 * 8;
    }
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *piVar2;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar3 + -8 + iVar6 * 8) = 0;
        *(int **)(iVar3 + -4 + iVar6 * 8) = local_14;
      } while (iVar6 < iVar1);
    }
    uVar7 = 6;
    local_14 = piVar2;
  }
LAB_004d39ee:
  piVar2 = local_14;
  local_4 = local_14;
  local_8 = uVar7;
  if ((char)uVar7 == '\0') {
    *(undefined4 *)(param_1 + 0x90) = 2;
  }
  else {
    if (0 < iVar1) {
      iVar6 = iVar1 * 8;
      do {
        if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x58)) {
          iVar3 = *(int *)(param_1 + 0x54) + 1;
          *(int *)(param_1 + 0x54) = iVar3;
          uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x50) + -8 + iVar3 * 8);
          piVar5 = *(int **)(*(int *)(param_1 + 0x50) + -4 + iVar3 * 8);
        }
        else {
          *(undefined4 *)(param_1 + 0x90) = 6;
          FUN_004d4550((void *)param_1);
          uVar7 = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined4 *)(param_1 + 0xa4) = 0;
          piVar5 = piVar2;
        }
        iVar3 = *local_14;
        *(undefined4 *)(iVar3 + -8 + iVar6) = uVar7;
        *(int **)(iVar3 + -4 + iVar6) = piVar5;
        local_10 = *(undefined4 *)(*(int *)(param_1 + 0x870) + -8 + *(int *)(param_1 + 0x54) * 8);
        local_c = *(undefined4 *)(*(int *)(param_1 + 0x870) + *(int *)(param_1 + 0x54) * 8 + -4);
        if (*(int **)(param_1 + 0x868) != (int *)0x0) {
          local_1d = '\x02';
          FUN_00539660(&local_1d,1,1,*(int **)(param_1 + 0x868));
          FUN_00539660((char *)&local_10,8,1,*(int **)(param_1 + 0x868));
        }
        iVar6 = iVar6 + -8;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    local_1c[0] = local_14;
    if (*(int **)(param_1 + 0x868) != (int *)0x0) {
      local_1d = '\x01';
      FUN_00539660(&local_1d,1,1,*(int **)(param_1 + 0x868));
      FUN_00539660((char *)local_1c,4,1,*(int **)(param_1 + 0x868));
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
      iVar6 = *(int *)(param_1 + 0x50);
      iVar3 = *(int *)(param_1 + 0x54) + -1;
      *(int *)(param_1 + 0x54) = iVar3;
      *(undefined4 *)(iVar6 + iVar3 * 8) = 6;
      *(int **)(iVar6 + 4 + iVar3 * 8) = local_4;
      return;
    }
    *(undefined4 *)(param_1 + 0x90) = 3;
  }
LAB_004d3b6e:
  FUN_004d4550((void *)param_1);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
#undef local_1d
#undef local_1c
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
