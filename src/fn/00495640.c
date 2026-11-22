/* Rebuilt from lomse.exe FUN_00495640 @ 0x00495640 (670 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055c5d8 (*(int *)0x0055c5d8)
#define DAT_0055c5e0 (*(int *)0x0055c5e0)
#define DAT_0055c5e8 (*(int *)0x0055c5e8)
#define DAT_0055c5f0 (*(int *)0x0055c5f0)
#define DAT_0055c5f8 (*(int *)0x0055c5f8)
#define DAT_0055c600 (*(int *)0x0055c600)
#define DAT_0055c608 (*(int *)0x0055c608)
#define DAT_0055c610 (*(int *)0x0055c610)

#define LOM_SELF_00495640 1
void __thiscall
rb_00495640(void *this,int *param_1,int param_2,int param_3,undefined2 param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  local_4 = -param_7;
  iVar6 = -1;
  if (param_2 < param_7) {
    local_4 = param_7 - param_2;
  }
  if (param_3 < 1) {
    iVar6 = 1 - param_3;
  }
  iVar2 = (*(int *)((int)this + 4) + param_7 * -2) - param_2;
  local_c = param_1[3];
  if (iVar2 < param_1[3]) {
    local_c = iVar2;
  }
  iVar2 = (*(int *)((int)this + 8) - param_3) + -2;
  local_8 = param_1[4];
  if (iVar2 < param_1[4]) {
    local_8 = iVar2;
  }
  iVar3 = *(int *)((int)this + 0xc) >> 1;
  iVar2 = (param_3 + iVar6) * iVar3 + local_4 + param_2;
  do {
    if (local_8 < iVar6) {
      return;
    }
    for (iVar7 = local_4; iVar7 <= local_c; iVar7 = iVar7 + 1) {
      if ((((iVar7 < 0) || (iVar6 < 0)) || (param_1[3] <= iVar7)) || (param_1[4] <= iVar6)) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)*(byte *)((param_1[2] + iVar6) * ((int *)*param_1)[3] + param_1[1] + iVar7 +
                               *(int *)*param_1);
      }
      if ((-2 < (int)uVar5) && ((int)uVar5 < 2)) {
        iVar1 = iVar6 + DAT_0055c5f8;
        iVar4 = DAT_0055c5d8 + iVar7;
        if (((iVar4 < 0) || ((iVar1 < 0 || (param_1[3] <= iVar4)))) || (param_1[4] <= iVar1)) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)*(byte *)((param_1[2] + iVar1) * ((int *)*param_1)[3] + param_1[1] + iVar4 +
                                 *(int *)*param_1);
        }
        if (((int)uVar5 < 2) || (0xff < (int)uVar5)) {
          iVar1 = iVar6 + DAT_0055c600;
          iVar4 = DAT_0055c5e0 + iVar7;
          if ((iVar4 < 0) || (((iVar1 < 0 || (param_1[3] <= iVar4)) || (param_1[4] <= iVar1)))) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (uint)*(byte *)((param_1[2] + iVar1) * ((int *)*param_1)[3] + param_1[1] + iVar4
                                   + *(int *)*param_1);
          }
          if (((int)uVar5 < 2) || (0xff < (int)uVar5)) {
            iVar1 = iVar6 + DAT_0055c608;
            iVar4 = DAT_0055c5e8 + iVar7;
            if (((iVar4 < 0) || ((iVar1 < 0 || (param_1[3] <= iVar4)))) || (param_1[4] <= iVar1)) {
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = (uint)*(byte *)((param_1[2] + iVar1) * ((int *)*param_1)[3] + param_1[1] +
                                      iVar4 + *(int *)*param_1);
            }
            if (((int)uVar5 < 2) || (0xff < (int)uVar5)) {
              iVar1 = iVar6 + DAT_0055c610;
              iVar4 = DAT_0055c5f0 + iVar7;
              if ((iVar4 < 0) || (((iVar1 < 0 || (param_1[3] <= iVar4)) || (param_1[4] <= iVar1))))
              {
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = (uint)*(byte *)((param_1[2] + iVar1) * ((int *)*param_1)[3] + param_1[1] +
                                        iVar4 + *(int *)*param_1);
              }
              if (((int)uVar5 < 2) || (0xff < (int)uVar5)) goto LAB_004958ab;
            }
          }
        }
        *(undefined2 *)(*(int *)this + iVar2 * 2) = param_4;
      }
LAB_004958ab:
      iVar2 = iVar2 + 1;
    }
    iVar6 = iVar6 + 1;
    iVar2 = iVar2 + (local_4 - local_c) + -1 + iVar3;
  } while( true );
#undef local_c
#undef local_8
#undef local_4
}
