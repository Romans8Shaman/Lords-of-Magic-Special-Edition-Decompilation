/* Rebuilt from lomse.exe FUN_004a6200 @ 0x004a6200 (499 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_004a5210 ((float10 (__thiscall *)(void *, int, int))0x004a5210)
#define FUN_004a55d0 ((undefined4 (__thiscall *)(void *, int, int))0x004a55d0)
#define FUN_004a59d0 ((undefined4 (__thiscall *)(void *, int, int, float))0x004a59d0)
#define FUN_004a6470 ((undefined4 (__fastcall *)(int))0x004a6470)
#define FUN_00508f10 ((undefined4 (__thiscall *)(void *, int))0x00508f10)
#define FUN_00519b30 ((undefined4 (__thiscall *)(void *, int))0x00519b30)
#define _DAT_0054daa0 (*(double *)0x0054daa0)
#define _DAT_0054dac8 (*(double *)0x0054dac8)

#define LOM_SELF_004a6200 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_004a6200(void *this, int param_1, float volatile param_2, float volatile param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_18;
  typedef float _t_local_14;
  typedef float _t_local_c;
  typedef int _t_local_8;
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
  
  if (param_1 < 0) {
    return 0;
  }
  *(float *)((int)this + 0x44) = param_2;
  iVar2 = param_1 % *(int *)((int)this + 0x5c);
  local_c = 1.0;
  local_14 = -1.0;
  local_18 = 0;
  iVar1 = param_1 / *(int *)((int)this + 0x5c);
  do {
    local_8 = 2;
    iVar4 = iVar1;
    do {
      fVar5 = FUN_004a5210(this,local_18 + iVar2,iVar4);
      fVar5 = fVar5 + (float10)param_3;
      param_2 = (float)fVar5;
      if ((__LOM_ISNAN(fVar5) || __LOM_ISNAN((float10)_DAT_0054dac8)) || fVar5 < (float10)_DAT_0054dac8) {
        param_2 = 0.0;
      }
      FUN_004a59d0(this,local_18 + iVar2,iVar4,param_2);
      if ((!__LOM_ISNAN(local_c) && !__LOM_ISNAN(param_2)) && param_2 <= local_c) {
        local_c = param_2;
      }
      if ((__LOM_ISNAN(local_14) || __LOM_ISNAN(param_2)) || local_14 < param_2) {
        local_14 = param_2;
      }
      iVar4 = iVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_18 = local_18 + 1;
  } while (local_18 < 2);
  if (((!__LOM_ISNAN(param_3) && !__LOM_ISNAN((float)_DAT_0054daa0)) && _DAT_0054daa0 <= param_3) ||
     ((!__LOM_ISNAN(local_14) && !__LOM_ISNAN((float)_DAT_0054dac8)) && _DAT_0054dac8 <= local_14)) {
    if (((!__LOM_ISNAN(param_3) && !__LOM_ISNAN((float)_DAT_0054daa0)) && _DAT_0054daa0 < param_3) &&
       ((!__LOM_ISNAN(local_14) && !__LOM_ISNAN((float)_DAT_0054dac8)) && _DAT_0054dac8 <= local_14)) {
      FUN_00508f10((void *)((int)this + 0xd8),
                   (int)*(short *)(*(int *)((int)this + 0x54) + param_1 * 8));
      if (iVar1 + -1 <= iVar1 + 1) {
        param_3 = __BC(float, (((iVar1 + 1) - (iVar1 + -1)) + 1));
        do {
          if (iVar2 + -1 <= iVar2 + 1) {
            iVar4 = ((iVar2 + 1) - (iVar2 + -1)) + 1;
            do {
              FUN_004a55d0(this,iVar2,iVar1);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          param_3 = __BC(float, (__BC(int, param_3) + -1));
        } while (param_3 != 0.0);
      }
    }
  }
  else {
    local_18 = 0;
    do {
      iVar3 = 2;
      iVar4 = iVar1;
      do {
        FUN_004a5210(this,local_18 + iVar2,iVar4);
        FUN_004a59d0(this,local_18 + iVar2,iVar4,0.0);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_18 = local_18 + 1;
    } while (local_18 < 2);
    FUN_004a55d0(this,iVar2,iVar1);
  }
  FUN_00519b30(&DAT_005876d0,0);
  FUN_004a6470((int)this);
  return 1;
#undef local_18
#undef local_14
#undef local_c
#undef local_8
}
