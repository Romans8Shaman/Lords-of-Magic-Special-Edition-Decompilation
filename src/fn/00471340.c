/* Rebuilt from lomse.exe FUN_00471340 @ 0x00471340 (325 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_0058364c (*(int *)0x0058364c)
#define FUN_004950c0 ((undefined4 * (__thiscall *)(void *, int *))0x004950c0)
#define FUN_004952c0 ((undefined4 (__thiscall *)(void *, uint, int, int))0x004952c0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00495a90 ((undefined4 (__fastcall *)(int *))0x00495a90)
#define FUN_00495db0 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00495db0)

#define LOM_SELF_00471340 1
void __thiscall rb_00471340(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_40;
  typedef undefined4 _t_local_3c;
  typedef undefined4 _t_local_38;
  typedef uint _t_local_34;
  typedef int _t_local_30;
  typedef int _t_local_2c[5];
  typedef uint _t_local_18;
#define local_40 (*(_t_local_40 *)(_fr + 0x0))
#define local_3c (*(_t_local_3c *)(_fr + 0x4))
#define local_38 (*(_t_local_38 *)(_fr + 0x8))
#define local_34 (*(_t_local_34 *)(_fr + 0xc))
#define local_30 (*(_t_local_30 *)(_fr + 0x10))
#define local_2c (*(_t_local_2c *)(_fr + 0x14))
#define local_18 (*(_t_local_18 *)(_fr + 0x28))

  *(undefined4 *)((int)this + 0x20) = 0;
  if (*(int **)((int)this + 0x24) != (int *)0x0) {
    FUN_004950c0(local_2c,*(int **)((int)this + 0x24));
    iVar1 = (param_3 - param_1) + 1;
    iVar2 = (param_4 - param_2) + 1;
    *(int *)((int)this + 0x28) = param_1;
    *(int *)((int)this + 0x2c) = param_2;
    *(int *)((int)this + 0x30) = iVar1;
    *(int *)((int)this + 0x34) = iVar2;
    if (param_1 < 0) {
      *(undefined4 *)((int)this + 0x28) = 0;
      *(int *)((int)this + 0x30) = param_1 + iVar1;
    }
    if (param_2 < 0) {
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(int *)((int)this + 0x34) = param_2 + iVar2;
    }
    local_30 = *(int *)((int)this + 0x34);
    local_34 = *(uint *)((int)this + 0x30);
    local_38 = *(undefined4 *)((int)this + 0x2c);
    local_3c = *(undefined4 *)((int)this + 0x28);
    DAT_0058364c = DAT_0058364c + 0x14;
    local_40 = local_2c;
    FUN_00495a90((int *)&local_40);
    *(uint *)((int)this + 0x30) = local_34;
    *(int *)((int)this + 0x34) = local_30;
    if ((0 < (int)local_34) && (0 < local_30)) {
      if ((*(int *)((int)this + 4) < (int)local_34) || (*(int *)((int)this + 8) < local_30)) {
        FUN_004952c0(this,local_34,local_30,local_18 >> 2 & 1);
      }
      if (*(int *)this != 0) {
        FUN_00495db0(this,(int *)&local_40,0,0);
        *(undefined4 *)((int)this + 0x20) = 1;
      }
    }
    DAT_0058364c = DAT_0058364c + -0x14;
    DAT_00583648 = DAT_00583648 + -0x20;
    FUN_00495590(local_2c);
  }
  return;
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_18
}
