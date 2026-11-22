/* Rebuilt from lomse.exe FUN_0041da60 @ 0x0041da60 (357 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00415470 ((undefined4 (__fastcall *)(int *))0x00415470)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_0041da60 1
void __fastcall rb_0041da60(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uchar _fr[0x88] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_7c;
  typedef int _t_aiStack_78[30];
#define local_7c (*(_t_local_7c *)(_fr + 0x4))
#define aiStack_78 (*(_t_aiStack_78 *)(_fr + 0x8))
  
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar4 = (int *)(param_1 + 0xc4);
    do {
      if ((-1 < *piVar4) && (iVar1 = FUN_00415470(piVar4), iVar1 != 0)) {
        *(int *)(param_1 + 0x50) = iVar6;
        break;
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 0x13;
    } while (iVar6 < *(int *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x50) < 0) {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      iVar1 = param_1 + 0xc4;
      do {
        uVar2 = FUN_00525f10(iVar1);
        if (uVar2 != 0) {
          *(int *)(param_1 + 0x50) = iVar6;
          break;
        }
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + 0x4c;
      } while (iVar6 < *(int *)(param_1 + 0x4c));
    }
    if ((*(int *)(param_1 + 0x50) < 0) && (iVar6 = 0, 0 < *(int *)(param_1 + 0x4c))) {
      piVar4 = (int *)(param_1 + 0xd4);
      iVar1 = local_7c;
      do {
        iVar3 = FUN_00525fc0(piVar4 + -4);
        if ((-1 < iVar3) && ((*(int *)(param_1 + 0x50) < 0 || (iVar1 < *piVar4)))) {
          *(int *)(param_1 + 0x50) = iVar6;
          iVar1 = *piVar4;
        }
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 0x13;
      } while (iVar6 < *(int *)(param_1 + 0x4c));
    }
  }
  iVar6 = 0;
  if (*(int *)(param_1 + 0x50) < 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      piVar4 = (int *)(param_1 + 0xd4);
      do {
        if ((*(int *)(param_1 + 0x50) < 0) || (local_7c < *piVar4)) {
          *(int *)(param_1 + 0x50) = iVar1;
          local_7c = *piVar4;
        }
        iVar1 = iVar1 + 1;
        piVar4 = piVar4 + 0x13;
      } while (iVar1 < *(int *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 0x50) < 0) {
      iVar1 = 0;
      local_7c = 1;
      *(undefined4 *)(param_1 + 0x50) = 0;
      if (0 < *(int *)(param_1 + 0x4c)) {
        piVar4 = (int *)(param_1 + 0xc4);
        do {
          iVar3 = 0;
          if (0 < iVar1) {
            piVar5 = aiStack_78 + 1;
            do {
              if (*piVar5 == *piVar4) break;
              iVar3 = iVar3 + 1;
              piVar5 = piVar5 + 2;
            } while (iVar3 < iVar1);
          }
          if (iVar3 == iVar1) {
            iVar7 = *piVar4;
            iVar1 = iVar1 + 1;
            aiStack_78[iVar3 * 2] = 1;
            aiStack_78[iVar3 * 2 + 1] = iVar7;
          }
          else {
            iVar7 = aiStack_78[iVar3 * 2] + 1;
            aiStack_78[iVar3 * 2] = iVar7;
            if (local_7c < iVar7) {
              *(int *)(param_1 + 0x50) = iVar6;
              local_7c = iVar7;
            }
          }
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 0x13;
        } while (iVar6 < *(int *)(param_1 + 0x4c));
      }
    }
  }
  return;
#undef local_7c
#undef aiStack_78
}
