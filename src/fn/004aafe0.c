/* Rebuilt from lomse.exe FUN_004aafe0 @ 0x004aafe0 (518 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058364c (*(int *)0x0058364c)
#define DAT_00583650 (*(int *)0x00583650)
#define FUN_004ab1f0 ((undefined4 (__thiscall *)(void *, int, int))0x004ab1f0)
#define FUN_004ab220 ((undefined4 (__thiscall *)(void *, int, int))0x004ab220)

#define LOM_SELF_004aafe0 1
undefined4 __thiscall rb_004aafe0(void *this,int *param_1,undefined2 *param_2,float *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_34;
  typedef int _t_local_30;
  typedef int _t_local_2c;
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef int _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_10;
#define local_34 (*(_t_local_34 *)(_fr + 0x4))
#define local_30 (*(_t_local_30 *)(_fr + 0x8))
#define local_2c (*(_t_local_2c *)(_fr + 0xc))
#define local_28 (*(_t_local_28 *)(_fr + 0x10))
#define local_24 (*(_t_local_24 *)(_fr + 0x14))
#define local_20 (*(_t_local_20 *)(_fr + 0x18))
#define local_1c (*(_t_local_1c *)(_fr + 0x1c))
#define local_18 (*(_t_local_18 *)(_fr + 0x20))
#define local_14 (*(_t_local_14 *)(_fr + 0x24))
#define local_10 (*(_t_local_10 *)(_fr + 0x28))

  if (param_1 == (int *)0x0) {
    return 0;
  }
  DAT_00583650 = DAT_00583650 + 0x10;
  local_30 = (*param_1 << 4) / param_1[2];
  local_2c = (param_1[1] << 4) / param_1[3];
  DAT_0058364c = DAT_0058364c + 0x28;
  local_34 = (int)this + 0x234;
  local_20 = (int)this + 0x254;
  local_28 = 0x10;
  local_24 = 0x10;
  local_14 = 0x10;
  local_10 = 0x10;
  iVar6 = 0;
  local_1c = local_30;
  local_18 = local_2c;
LAB_004ab0be:
  iVar5 = 0;
  puVar3 = param_2 + 0x10;
  pfVar4 = param_3;
  do {
    if ((*(byte *)(local_34 + 0x14) & 4) == 0) {
      if ((((iVar5 < 0) || (iVar6 < 0)) || (local_28 <= iVar5)) || (local_24 <= iVar6))
      goto LAB_004ab120;
      uVar2 = FUN_004ab1f0(&local_34,iVar5,iVar6);
      uVar1 = (undefined2)uVar2;
    }
    else if (((iVar5 < 0) || (iVar6 < 0)) || ((local_28 <= iVar5 || (local_24 <= iVar6)))) {
LAB_004ab120:
      uVar1 = 0xffff;
    }
    else {
      uVar2 = FUN_004ab220(&local_34,iVar5,iVar6);
      uVar1 = (undefined2)uVar2;
    }
    *param_2 = uVar1;
    if ((*(byte *)(local_20 + 0x14) & 4) == 0) {
      if (((iVar5 < 0) || (iVar6 < 0)) || ((local_14 <= iVar5 || (local_10 <= iVar6))))
      goto LAB_004ab172;
      param_1 = (int *)FUN_004ab1f0(&local_20,iVar5,iVar6);
    }
    else if ((((iVar5 < 0) || (iVar6 < 0)) || (local_14 <= iVar5)) || (local_10 <= iVar6)) {
LAB_004ab172:
      param_1 = (int *)0xffffffff;
    }
    else {
      param_1 = (int *)FUN_004ab220(&local_20,iVar5,iVar6);
    }
    if ((int)param_1 < 0) {
      param_1 = (int *)0x0;
    }
    iVar5 = iVar5 + 1;
    param_2 = param_2 + 1;
    *pfVar4 = (float)(int)param_1 * *(float *)((int)this + 0x274);
    if (0xf < iVar5) break;
    pfVar4 = pfVar4 + 1;
  } while( true );
  iVar6 = iVar6 + 1;
  if (0xf < iVar6) {
    DAT_0058364c = DAT_0058364c + -0x28;
    DAT_00583650 = DAT_00583650 + -0x10;
    return 1;
  }
  param_3 = param_3 + 0x10;
  param_2 = puVar3;
  goto LAB_004ab0be;
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
