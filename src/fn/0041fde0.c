/* Rebuilt from lomse.exe FUN_0041fde0 @ 0x0041fde0 (464 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _DAT_005a9dc8 (*(undefined4 *)0x005a9dc8)

#define LOM_SELF_0041fde0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall rb_0041fde0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  local_8 = -1;
  iVar4 = -1;
  if (*(int *)((int)this + 8) != 0) {
    iVar4 = *(int *)((int)this + 0x24);
    param_2 = param_2 + 1;
    if (*(int *)((int)this + 0x18) < param_2) {
      param_2 = iVar4;
    }
    iVar3 = param_2;
    if (param_2 <= *(int *)((int)this + 0x18)) {
      do {
        piVar1 = *(int **)(*(int *)((int)this + 8) + iVar3 * 4);
        if (piVar1 != (int *)0x0) {
          iVar2 = piVar1[1];
          if (iVar2 == 0) {
            if ((piVar1[0x12] == param_1) && ((~piVar1[0xc] & 0x100U) != 0)) {
              local_8 = iVar3;
              break;
            }
          }
          else if (iVar2 == 2) {
            iVar2 = ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x3c)))(piVar1);
            if ((iVar2 == param_1) && (piVar1[0x12] != 0)) {
              local_8 = piVar1[10];
              break;
            }
          }
          else if (iVar2 == 3) {
            iVar2 = ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x3c)))(piVar1);
            if ((iVar2 == param_1) && (piVar1[0x11] != 0)) {
              local_8 = piVar1[10];
              break;
            }
          }
          else if (((iVar2 == 1) &&
                   (iVar2 = ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x3c)))(piVar1), iVar2 == param_1)) &&
                  (piVar1[0x16] != 0)) {
            local_8 = piVar1[10];
            break;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= *(int *)((int)this + 0x18));
    }
    if ((local_8 == -1) && (iVar4 <= param_2)) {
      do {
        piVar1 = *(int **)(*(int *)((int)this + 8) + iVar4 * 4);
        if (piVar1 != (int *)0x0) {
          iVar3 = piVar1[1];
          if (iVar3 == 0) {
            if ((piVar1[0x12] == param_1) && ((~piVar1[0xc] & 0x100U) != 0)) {
              _DAT_005a9dc8 = iVar4;
              return iVar4;
            }
          }
          else if (iVar3 == 2) {
            iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x3c)))(piVar1);
            if ((iVar3 == param_1) && (piVar1[0x12] != 0)) {
              return *(int *)(piVar1[0x12] + 0x28);
            }
          }
          else if (iVar3 == 3) {
            iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x3c)))(piVar1);
            if ((iVar3 == param_1) && (piVar1[0x11] != 0)) {
              return *(int *)(piVar1[0x11] + 0x28);
            }
          }
          else if (((iVar3 == 1) &&
                   (iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x3c)))(piVar1), iVar3 == param_1)) &&
                  (piVar1[0x16] != 0)) {
            local_8 = piVar1[10];
            break;
          }
        }
        iVar4 = iVar4 + 1;
        if (param_2 < iVar4) {
          return -1;
        }
      } while( true );
    }
    iVar4 = local_8;
  }
  return iVar4;
#undef local_8
}
