/* Rebuilt from lomse.exe FUN_0049d510 @ 0x0049d510 (396 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_0058364c (*(int *)0x0058364c)
#define FUN_00495120 ((undefined4 * (__thiscall *)(void *, int *, int *, int))0x00495120)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00495640 ((undefined4 (__thiscall *)(void *, int *, int, int, undefined2, undefined4, undefined4, int))0x00495640)
#define FUN_00496340 ((undefined4 (__thiscall *)(void *, int *, int, int, byte))0x00496340)
#define FUN_00496880 ((undefined4 (__thiscall *)(void *, int *, uint, int, byte, byte))0x00496880)
#define FUN_0049d360 ((int * (__fastcall *)(int))0x0049d360)

#define LOM_SELF_0049d510 1
undefined4 __thiscall
rb_0049d510(void *this,void *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_40;
  typedef undefined4 _t_local_3c;
  typedef undefined4 _t_local_38;
  typedef uint _t_local_34;
  typedef uint _t_local_30;
  typedef int _t_local_2c[4];
  typedef int _t_local_1c;
#define local_40 (*(_t_local_40 *)(_fr + 0x0))
#define local_3c (*(_t_local_3c *)(_fr + 0x4))
#define local_38 (*(_t_local_38 *)(_fr + 0x8))
#define local_34 (*(_t_local_34 *)(_fr + 0xc))
#define local_30 (*(_t_local_30 *)(_fr + 0x10))
#define local_2c (*(_t_local_2c *)(_fr + 0x14))
#define local_1c (*(_t_local_1c *)(_fr + 0x24))

  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) & 0xfe;
  if ((((*(int *)((int)this + 0x1c) != 0) && (*(int **)((int)this + 0x3c) != (int *)0x0)) &&
      (**(int **)((int)this + 0x3c) != 0)) &&
     (piVar2 = FUN_0049d360((int)this), piVar2 != (int *)0x0)) {
    FUN_00495120(local_2c,piVar2,*(int **)((int)this + 0x3c),*(int *)((int)this + 0x1c));
    if (local_2c[0] != 0) {
      if (*(int *)((int)this + 0x30) != 0) {
        local_1c = *(int *)((int)this + 0x30);
      }
      iVar1 = *(int *)(*(int *)((int)this + 0x3c) + 0x120);
      local_34 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 2);
      DAT_0058364c = DAT_0058364c + 0x14;
      local_30 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 4);
      local_40 = local_2c;
      local_3c = 0;
      local_38 = 0;
      if (iVar1 < 0) {
        FUN_00496340(param_1,(int *)&local_40,param_2,param_3,0);
      }
      else {
        FUN_00496880(param_1,(int *)&local_40,param_2,param_3,0,(byte)iVar1);
      }
      if (-1 < param_4) {
        FUN_00495640(param_1,(int *)&local_40,param_2,param_3,(short)param_4,0,iVar1,param_5);
      }
      DAT_0058364c = DAT_0058364c + -0x14;
      DAT_00583648 = DAT_00583648 + -0x20;
      FUN_00495590(local_2c);
      return 1;
    }
    DAT_00583648 = DAT_00583648 + -0x20;
    FUN_00495590(local_2c);
  }
  return 0;
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_1c
}
