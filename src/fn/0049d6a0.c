/* Rebuilt from lomse.exe FUN_0049d6a0 @ 0x0049d6a0 (275 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00495120 ((undefined4 * (__thiscall *)(void *, int *, int *, int))0x00495120)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_0049d360 ((int * (__fastcall *)(int))0x0049d360)

#define LOM_SELF_0049d6a0 1
uint __thiscall rb_0049d6a0(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20[3];
  typedef int _t_local_14;
  typedef byte _t_local_c;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_c (*(_t_local_c *)(_fr + 0x14))
  
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar2 = FUN_0049d360((int)this);
    if ((((piVar2 != (int *)0x0) && (-1 < param_1)) && (-1 < param_2)) &&
       ((iVar1 = *(int *)((int)this + 0x1c), param_1 < (int)(uint)*(ushort *)(iVar1 + 2) &&
        (param_2 < (int)(uint)*(ushort *)(iVar1 + 4))))) {
      FUN_00495120(local_20,piVar2,*(int **)((int)this + 0x3c),iVar1);
      uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 4);
      uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 2);
      if ((local_c & 4) == 0) {
        if ((param_1 < (int)uVar4) && (param_2 < (int)uVar3)) {
          uVar4 = (uint)*(byte *)(local_14 * param_2 + local_20[0] + param_1);
        }
        else {
          uVar4 = 0xffffffff;
        }
      }
      else if ((param_1 < (int)uVar4) && (param_2 < (int)uVar3)) {
        uVar4 = (uint)*(ushort *)(local_20[0] + ((local_14 >> 1) * param_2 + param_1) * 2);
      }
      else {
        uVar4 = 0xffffffff;
      }
      DAT_00583648 = DAT_00583648 + -0x20;
      FUN_00495590(local_20);
      return uVar4;
    }
  }
  return 0xffffffff;
#undef local_20
#undef local_14
#undef local_c
}
