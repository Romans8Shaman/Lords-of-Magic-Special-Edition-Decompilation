/* Rebuilt from lomse.exe FUN_004d0070 @ 0x004d0070 (1389 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_0054dd10 (*(double *)0x0054dd10)
#define _DAT_0054dd18 (*(double *)0x0054dd18)
#define _DAT_0054dd28 (*(double *)0x0054dd28)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004d0070 1
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004d0070(void *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_3c;
  typedef int * _t_local_38;
  typedef int * _t_local_30;
  typedef int * _t_local_2c;
  typedef int * _t_local_28;
  typedef int * _t_local_24;
  typedef int * _t_local_20;
  typedef int * _t_local_1c;
  typedef uint _t_local_10;
  typedef int * _t_local_c;
  typedef uint _t_local_8;
  typedef int * _t_local_4;
#define local_3c (*(_t_local_3c *)(_fr + 0x4))
#define local_38 (*(_t_local_38 *)(_fr + 0x8))
#define local_30 (*(_t_local_30 *)(_fr + 0x10))
#define local_2c (*(_t_local_2c *)(_fr + 0x14))
#define local_28 (*(_t_local_28 *)(_fr + 0x18))
#define local_24 (*(_t_local_24 *)(_fr + 0x1c))
#define local_20 (*(_t_local_20 *)(_fr + 0x20))
#define local_1c (*(_t_local_1c *)(_fr + 0x24))
#define local_10 (*(_t_local_10 *)(_fr + 0x30))
#define local_c (*(_t_local_c *)(_fr + 0x34))
#define local_8 (*(_t_local_8 *)(_fr + 0x38))
#define local_4 (*(_t_local_4 *)(_fr + 0x3c))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    local_10 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_c = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_10 = 0;
    local_c = local_4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    local_8 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_8 = 0;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar6 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_28 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    uVar6 = 0;
    local_28 = local_4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar5 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    piVar3 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    uVar5 = 0;
    piVar3 = local_4;
  }
  iVar2 = *(int *)((int)param_1 + 0x90);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  if (iVar2 != 0) {
    return;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 == 1) {
    piVar1 = __BC(int *, (float)(int)piVar3);
    local_20 = (int *)((int)piVar3 << 8);
    local_24 = piVar3;
  }
  else if (uVar5 == 2) {
    piVar1 = __BC(int *, ((float)(int)piVar3 * (float)_DAT_0054dd18));
    local_24 = (int *)((int)piVar3 >> 8);
    local_20 = piVar3;
  }
  else {
    if (uVar5 != 4) goto LAB_004d05b6;
    local_24 = (int *)(longlong)__BC(float, piVar3);
    local_20 = (int *)(longlong)(__BC(float, piVar3) * (float)_DAT_0054dd10);
    piVar1 = piVar3;
  }
  uVar6 = uVar6 & 0xff;
  if (uVar6 == 1) {
    local_2c = (int *)((int)local_28 << 8);
    local_30 = local_28;
    local_28 = (int *)__BC(uint, (float)((float)(int)local_28));
  }
  else if (uVar6 == 2) {
    local_30 = (int *)((int)local_28 >> 8);
    local_2c = local_28;
    local_28 = (int *)__BC(uint, (float)(((float)(int)local_28 * (float)_DAT_0054dd18)));
  }
  else {
    if (uVar6 != 4) goto LAB_004d05b6;
    local_2c = (int *)(longlong)(__BC(float, local_28) * (float)_DAT_0054dd10);
    local_30 = (int *)(longlong)__BC(float, local_28);
  }
  local_8 = local_8 & 0xff;
  if (local_8 == 1) {
    local_38 = __BC(int *, (float)(int)local_4);
    local_1c = (int *)((int)local_4 << 8);
    local_3c = local_4;
  }
  else if (local_8 == 2) {
    local_3c = (int *)((int)local_4 >> 8);
    local_38 = __BC(int *, ((float)(int)local_4 * (float)_DAT_0054dd18));
    local_1c = local_4;
  }
  else {
    if (local_8 != 4) {
LAB_004d05b6:
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      return;
    }
    local_1c = (int *)(longlong)(__BC(float, local_4) * (float)_DAT_0054dd10);
    local_3c = (int *)(longlong)__BC(float, local_4);
    local_38 = local_4;
  }
  if (((uVar5 == 4) || (uVar6 == 4)) || (local_8 == 4)) {
    local_2c = piVar1;
    if ((__LOM_ISNAN(__BC(float, local_28)) || __LOM_ISNAN((float)_DAT_0054dd28)) ||
        __BC(float, local_28) <= (float)_DAT_0054dd28) {
      if ((!__LOM_ISNAN(__BC(float, piVar1)) && !__LOM_ISNAN(__BC(float, local_38))) && __BC(float, local_38) <= __BC(float, piVar1)) {
        do {
          if (*(int *)((int)param_1 + 0x54) == 0) {
            FUN_00404ab0(param_1,3);
          }
          else {
            iVar2 = *(int *)((int)param_1 + 0x50);
            iVar4 = *(int *)((int)param_1 + 0x54) + -1;
            *(int *)((int)param_1 + 0x54) = iVar4;
            *(undefined4 *)(iVar2 + iVar4 * 8) = 4;
            *(int **)(iVar2 + 4 + iVar4 * 8) = local_2c;
          }
          FUN_004d05e0(param_1,local_10,local_c);
          iVar2 = *(int *)((int)param_1 + 0x6c);
          *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
        } while ((iVar2 == 0) &&
                (local_2c = __BC(int *, (__BC(float, local_2c) + __BC(float, local_28))),
                (!__LOM_ISNAN(__BC(float, local_2c)) && !__LOM_ISNAN(__BC(float, local_38))) &&
                __BC(float, local_38) <= __BC(float, local_2c)));
      }
    }
    else if ((__LOM_ISNAN(__BC(float, piVar1)) || __LOM_ISNAN(__BC(float, local_38))) ||
             (__BC(float, local_38) > __BC(float, piVar1) || __BC(float, piVar1) == __BC(float, local_38))) {
      while( true ) {
        if (*(int *)((int)param_1 + 0x54) == 0) {
          FUN_00404ab0(param_1,3);
        }
        else {
          iVar2 = *(int *)((int)param_1 + 0x50);
          iVar4 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar4;
          *(undefined4 *)(iVar2 + iVar4 * 8) = 4;
          *(int **)(iVar2 + 4 + iVar4 * 8) = local_2c;
        }
        FUN_004d05e0(param_1,local_10,local_c);
        iVar2 = *(int *)((int)param_1 + 0x6c);
        *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
        if (iVar2 != 0) break;
        local_2c = __BC(int *, (__BC(float, local_2c) + __BC(float, local_28)));
        if ((!__LOM_ISNAN(__BC(float, local_2c)) && !__LOM_ISNAN(__BC(float, local_38))) && __BC(float, local_38) < __BC(float, local_2c)) {
          return;
        }
      }
    }
  }
  else if (((uVar5 == 2) || (uVar6 == 2)) || (local_8 == 2)) {
    if ((int)local_2c < 1) {
      if ((int)local_1c <= (int)local_20) {
        while( true ) {
          if (*(int *)((int)param_1 + 0x54) == 0) {
            FUN_00404ab0(param_1,3);
          }
          else {
            iVar2 = *(int *)((int)param_1 + 0x50);
            iVar4 = *(int *)((int)param_1 + 0x54) + -1;
            *(int *)((int)param_1 + 0x54) = iVar4;
            *(undefined4 *)(iVar2 + iVar4 * 8) = 2;
            *(int **)(iVar2 + 4 + iVar4 * 8) = local_20;
          }
          FUN_004d05e0(param_1,local_10,local_c);
          iVar2 = *(int *)((int)param_1 + 0x6c);
          *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
          if (iVar2 != 0) break;
          local_20 = (int *)((int)local_20 + (int)local_2c);
          if ((int)local_20 < (int)local_1c) {
            return;
          }
        }
      }
    }
    else if ((int)local_20 <= (int)local_1c) {
      while( true ) {
        if (*(int *)((int)param_1 + 0x54) == 0) {
          FUN_00404ab0(param_1,3);
        }
        else {
          iVar2 = *(int *)((int)param_1 + 0x50);
          iVar4 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar4;
          *(undefined4 *)(iVar2 + iVar4 * 8) = 2;
          *(int **)(iVar2 + 4 + iVar4 * 8) = local_20;
        }
        FUN_004d05e0(param_1,local_10,local_c);
        iVar2 = *(int *)((int)param_1 + 0x6c);
        *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
        if (iVar2 != 0) break;
        local_20 = (int *)((int)local_20 + (int)local_2c);
        if ((int)local_1c < (int)local_20) {
          return;
        }
      }
    }
  }
  else if ((int)local_30 < 1) {
    if ((int)local_3c <= (int)local_24) {
      while( true ) {
        if (*(int *)((int)param_1 + 0x54) == 0) {
          FUN_00404ab0(param_1,3);
        }
        else {
          iVar2 = *(int *)((int)param_1 + 0x50);
          iVar4 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar4;
          *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
          *(int **)(iVar2 + 4 + iVar4 * 8) = local_24;
        }
        FUN_004d05e0(param_1,local_10,local_c);
        iVar2 = *(int *)((int)param_1 + 0x6c);
        *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
        if (iVar2 != 0) break;
        local_24 = (int *)((int)local_24 + (int)local_30);
        if ((int)local_24 < (int)local_3c) {
          return;
        }
      }
    }
  }
  else if ((int)local_24 <= (int)local_3c) {
    while( true ) {
      if (*(int *)((int)param_1 + 0x54) == 0) {
        FUN_00404ab0(param_1,3);
      }
      else {
        iVar2 = *(int *)((int)param_1 + 0x50);
        iVar4 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar4;
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(int **)(iVar2 + 4 + iVar4 * 8) = local_24;
      }
      FUN_004d05e0(param_1,local_10,local_c);
      iVar2 = *(int *)((int)param_1 + 0x6c);
      *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
      if (iVar2 != 0) break;
      local_24 = (int *)((int)local_24 + (int)local_30);
      if ((int)local_3c < (int)local_24) {
        return;
      }
    }
  }
  return;
#undef local_3c
#undef local_38
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
