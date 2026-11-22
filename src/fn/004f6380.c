/* Rebuilt from lomse.exe FUN_004f6380 @ 0x004f6380 (445 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573300 (*(int *)0x00573300)
#define DAT_00573304 (*(int *)0x00573304)
#define DAT_00573308 (*(int *)0x00573308)

#define LOM_SELF_004f6380 1
int __thiscall rb_004f6380(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_30;
  typedef int _t_local_2c;
  typedef int _t_local_28;
  typedef int _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_iStack_10;
  typedef int _t_iStack_c;
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define local_30 (*(_t_local_30 *)(_fr + 0x0))
#define local_2c (*(_t_local_2c *)(_fr + 0x4))
#define local_28 (*(_t_local_28 *)(_fr + 0x8))
#define local_20 (*(_t_local_20 *)(_fr + 0x10))
#define local_1c (*(_t_local_1c *)(_fr + 0x14))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x20))
#define iStack_c (*(_t_iStack_c *)(_fr + 0x24))
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x28))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x2c))
  
  if (*(int *)((int)this + 0xc) == 0) {
    return -1;
  }
  local_2c = *(int *)((int)this + 0x14) + -1;
  local_28 = -1;
  bVar3 = false;
  local_30 = 999;
  local_20 = 999;
  local_1c = 999;
  iVar4 = -1;
  if (-1 < local_2c) {
    do {
      if (param_3 < 0) {
LAB_004f63ea:
        piVar1 = *(int **)(*(int *)((int)this + 0xc) + local_2c * 4);
        iVar4 = ((undefined4 (__thiscall *)(__typeof__(piVar1), __typeof__(param_1), __typeof__(param_2)))(**(code **)(*piVar1 + 8)))(piVar1,param_1,param_2);
        if (iVar4 != 0) {
          piVar1 = *(int **)(*(int *)((int)this + 0xc) + local_2c * 4);
          iVar4 = ((undefined4 (__thiscall *)(__typeof__(piVar1), __typeof__(param_1), __typeof__(param_2)))(**(code **)(*piVar1 + 4)))(piVar1,param_1,param_2);
          piVar1 = *(int **)(*(int *)((int)this + 0xc) + local_2c * 4);
          iVar5 = ((undefined4 (__thiscall *)(__typeof__(piVar1), __typeof__(&iStack_10)))(**(code **)(*piVar1 + 0x48)))(piVar1,&iStack_10);
          if (iVar5 != 0) {
            bVar8 = iVar4 != 0;
            iVar6 = (iStack_8 - iStack_10) + 1;
            iVar7 = (iStack_4 - iStack_c) + 1;
            iVar4 = ((iVar6 >> 1) - param_1) + iStack_10;
            iVar5 = ((iVar7 >> 1) - param_2) + iStack_c;
            iVar4 = iVar4 * iVar4 + iVar5 * iVar5;
            bVar2 = false;
            if (local_28 < 0) {
              bVar2 = true;
            }
            else if (bVar3 < bVar8) {
              bVar2 = true;
            }
            else if (bVar3 == bVar8) {
              if (DAT_00573300 + iVar4 < local_30) {
                bVar2 = true;
              }
              else if ((iVar4 - DAT_00573300 <= local_30) &&
                      (bVar2 = true,
                      local_1c * local_20 <= (DAT_00573304 + iVar6) * (DAT_00573308 + iVar7))) {
                bVar2 = false;
              }
            }
            if (bVar2) {
              local_28 = local_2c;
              local_30 = iVar4;
              local_20 = iVar6;
              local_1c = iVar7;
              bVar3 = bVar8;
            }
          }
        }
      }
      else if (*(int *)(*(int *)(*(int *)((int)this + 0xc) + local_2c * 4) + 4) == param_3)
      goto LAB_004f63ea;
      local_2c = local_2c + -1;
    } while (-1 < local_2c);
    iVar4 = local_28;
  }
  if (iVar4 < 0) {
    return iVar4;
  }
  return *(int *)(*(int *)(*(int *)((int)this + 0xc) + iVar4 * 4) + 0x28);
#undef local_30
#undef local_2c
#undef local_28
#undef local_20
#undef local_1c
#undef iStack_10
#undef iStack_c
#undef iStack_8
#undef iStack_4
}
