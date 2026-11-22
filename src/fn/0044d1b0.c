/* Rebuilt from lomse.exe op_armyaddunittype @ 0x0044d1b0 (487 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004163a0 ((int (__thiscall *)(void *, int *))0x004163a0)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00526e40 ((undefined4 * (__fastcall *)(undefined4 *))0x00526e40)
#define FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526ea0)
#define FUN_00529200 ((undefined4 (__thiscall *)(void *, int, uint))0x00529200)
#define thunk_FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526e90)

#define LOM_SELF_0044d1b0 1
void __cdecl rb_0044d1b0(void *volatile param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uchar _fr[0x78] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_70;
  typedef void * _t_local_6c;
  typedef uint _t_local_68;
  typedef uint _t_local_64;
  typedef uint _t_local_60;
  typedef undefined4 _t_local_5c;
  typedef int _t_local_58[5];
  typedef undefined4 _t_local_44;
  typedef undefined4 _t_local_40;
  typedef undefined4 _t_local_3c;
#define local_70 (*(_t_local_70 *)(_fr + 0x0))
#define local_6c (*(_t_local_6c *)(_fr + 0x4))
#define local_68 (*(_t_local_68 *)(_fr + 0x8))
#define local_64 (*(_t_local_64 *)(_fr + 0xc))
#define local_60 (*(_t_local_60 *)(_fr + 0x10))
#define local_5c (*(_t_local_5c *)(_fr + 0x14))
#define local_58 (*(_t_local_58 *)(_fr + 0x18))
#define local_44 (*(_t_local_44 *)(_fr + 0x2c))
#define local_40 (*(_t_local_40 *)(_fr + 0x30))
#define local_3c (*(_t_local_3c *)(_fr + 0x34))

  FUN_00526e40(local_58);
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_60 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_5c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_60 = 0;
  }
  iVar1 = FUN_004026a0(&local_60,&local_70,&local_64,(undefined4 *)&param_1);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      local_60 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      local_5c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      local_60 = 0;
    }
    iVar1 = FUN_004026a0(&local_60,&local_68,&local_64,(undefined4 *)&param_1);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      iVar1 = FUN_0041be40(this,&local_6c);
      if (iVar1 == 0) goto LAB_0044d373;
      FUN_00529200(local_58,local_68,0);
      if ((int)local_70 < *(int *)((int)local_6c + 0x4c)) {
        FUN_00526ea0((int)local_6c + local_70 * 0x4c + 0xc4);
        piVar3 = local_58;
        piVar4 = (int *)((int)local_6c + local_70 * 0x4c + 0xc4);
        for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        }
      }
      else {
        local_70 = FUN_004163a0(local_6c,local_58);
      }
      local_40 = 0;
      local_3c = 0;
      local_44 = 0;
      if (*(int *)((int)this + 0x54) != 0) {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(uint *)(iVar1 + 4 + iVar2 * 8) = local_70;
        goto LAB_0044d373;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_0044d373:
  thunk_FUN_00526ea0((int)local_58);
  return;
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
}
