/* Rebuilt from lomse.exe FUN_0049de40 @ 0x0049de40 (540 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_0058364c (*(int *)0x0058364c)
#define DAT_005836cc (*(byte *)0x005836cc)
#define DAT_005836e0 (*(undefined4 *)0x005836e0)
#define DAT_005836e4 (*(undefined4 *)0x005836e4)
#define DAT_005836f8 (*(undefined4 *)0x005836f8)
#define DAT_005836fc (*(int *)0x005836fc)
#define DAT_00583700 (*(int *)0x00583700)
#define FUN_00495120 ((undefined4 * (__thiscall *)(void *, int *, int *, int))0x00495120)
#define FUN_004952c0 ((undefined4 (__thiscall *)(void *, uint, int, int))0x004952c0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00495db0 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00495db0)
#define FUN_0049d360 ((int * (__fastcall *)(int))0x0049d360)
#define FUN_00539e50 ((int (__cdecl *)(int))0x00539e50)
#define _DAT_005836e8 (*(undefined4 *)0x005836e8)
#define _DAT_005836ec (*(undefined4 *)0x005836ec)
#define _DAT_005836f0 (*(undefined4 *)0x005836f0)
#define _DAT_00583708 (*(undefined4 *)0x00583708)

#define LOM_SELF_0049de40 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall rb_0049de40(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_54;
  typedef undefined4 _t_local_50;
  typedef undefined4 _t_local_4c;
  typedef uint _t_local_48;
  typedef uint _t_local_44;
  typedef undefined4 * _t_local_40[3];
  typedef uint _t_local_34;
  typedef uint _t_local_30;
  typedef int _t_local_2c[8];
#define local_54 (*(_t_local_54 *)(_fr + 0x4))
#define local_50 (*(_t_local_50 *)(_fr + 0x8))
#define local_4c (*(_t_local_4c *)(_fr + 0xc))
#define local_48 (*(_t_local_48 *)(_fr + 0x10))
#define local_44 (*(_t_local_44 *)(_fr + 0x14))
#define local_40 (*(_t_local_40 *)(_fr + 0x18))
#define local_34 (*(_t_local_34 *)(_fr + 0x24))
#define local_30 (*(_t_local_30 *)(_fr + 0x28))
#define local_2c (*(_t_local_2c *)(_fr + 0x2c))

  if ((DAT_005836cc & 2) == 0) {
    DAT_005836cc = DAT_005836cc | 2;
    DAT_0058364c = DAT_0058364c + 0x14;
    DAT_005836e0 = 0;
    _DAT_005836f0 = 0;
    _DAT_005836ec = 0;
    _DAT_005836e8 = 0;
    DAT_005836e4 = 0;
    FUN_00539e50(0x49e060);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  if ((DAT_005836fc < (int)(uint)*(ushort *)(iVar2 + 2)) ||
     (DAT_00583700 < (int)(uint)*(ushort *)(iVar2 + 4))) {
    FUN_004952c0(&DAT_005836f8,(uint)*(ushort *)(iVar2 + 2),(uint)*(ushort *)(iVar2 + 4),0);
    if (DAT_005836f8 == 0) {
      return (undefined4 *)0x0;
    }
  }
  _DAT_00583708 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x11c);
  piVar1 = FUN_0049d360(param_1);
  if (piVar1 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_00495120(local_2c,piVar1,*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x1c));
  if (local_2c[0] == 0) {
    DAT_00583648 = DAT_00583648 + -0x20;
    FUN_00495590(local_2c);
    return (undefined4 *)0x0;
  }
  local_44 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 4);
  local_48 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 2);
  local_50 = 0;
  DAT_0058364c = DAT_0058364c + 0x14;
  local_4c = 0;
  local_54 = local_2c;
  FUN_00495db0(&DAT_005836f8,(int *)&local_54,0,0);
  local_40[1] = (undefined4 *)0x0;
  local_40[2] = (undefined4 *)0x0;
  local_34 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 2);
  local_40[0] = &DAT_005836f8;
  local_30 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 4);
  ppuVar3 = local_40;
  puVar4 = &DAT_005836e0;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  DAT_00583648 = DAT_00583648 + -0x20;
  DAT_0058364c = DAT_0058364c + -0x14;
  FUN_00495590(local_2c);
  return &DAT_005836e0;
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_34
#undef local_30
#undef local_2c
}
