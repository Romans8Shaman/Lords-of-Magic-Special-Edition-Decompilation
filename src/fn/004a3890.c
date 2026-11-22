/* Rebuilt from lomse.exe op_randombolt @ 0x004a3890 (570 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004a3080 ((void * (__fastcall *)(void *))0x004a3080)
#define FUN_004a3800 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x004a3800)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_004a3890 1
void __cdecl rb_004a3890(void *param_1)

{
  int iVar1;
  uchar _fr[0x90] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_84;
  typedef uint _t_local_80;
  typedef uint _t_local_7c;
  typedef uint _t_local_78;
  typedef undefined4 _t_local_74;
  typedef undefined4 _t_local_70;
  typedef uint _t_local_6c;
  typedef undefined4 _t_local_68;
  typedef undefined1 _t_local_64[48];
  typedef undefined4 _t_local_34;
#define local_84 (*(_t_local_84 *)(_fr + 0x4))
#define local_80 (*(_t_local_80 *)(_fr + 0x8))
#define local_7c (*(_t_local_7c *)(_fr + 0xc))
#define local_78 (*(_t_local_78 *)(_fr + 0x10))
#define local_74 (*(_t_local_74 *)(_fr + 0x14))
#define local_70 (*(_t_local_70 *)(_fr + 0x18))
#define local_6c (*(_t_local_6c *)(_fr + 0x1c))
#define local_68 (*(_t_local_68 *)(_fr + 0x20))
#define local_64 (*(_t_local_64 *)(_fr + 0x24))
#define local_34 (*(_t_local_34 *)(_fr + 0x54))

  FUN_004a3080(local_64);
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_6c = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_68 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_6c = 0;
  }
  iVar1 = FUN_004026a0(&local_6c,&local_84,(uint *)&local_70,&local_74);
  if (iVar1 != 0) {
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar1 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar1;
      local_6c = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
      local_68 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(param_1,6);
      local_6c = 0;
    }
    iVar1 = FUN_004026a0(&local_6c,&local_80,(uint *)&local_74,&local_70);
    if (iVar1 != 0) {
      if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
        iVar1 = *(int *)((int)param_1 + 0x54) + 1;
        *(int *)((int)param_1 + 0x54) = iVar1;
        local_6c = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
        local_68 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
      }
      else {
        *(undefined4 *)((int)param_1 + 0x90) = 6;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
        local_6c = 0;
      }
      iVar1 = FUN_004026a0(&local_6c,&local_7c,(uint *)&local_74,&local_70);
      if (iVar1 != 0) {
        if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
          iVar1 = *(int *)((int)param_1 + 0x54) + 1;
          *(int *)((int)param_1 + 0x54) = iVar1;
          local_6c = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
          local_68 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
        }
        else {
          *(undefined4 *)((int)param_1 + 0x90) = 6;
          FUN_004d4550(param_1);
          *(undefined4 *)((int)param_1 + 0x90) = 0;
          *(undefined4 *)((int)param_1 + 0xa4) = 0;
          local_6c = 0;
        }
        iVar1 = FUN_004026a0(&local_6c,&local_78,(uint *)&local_74,&local_70);
        if (iVar1 != 0) {
          local_34 = 2;
          FUN_004a3800(local_64,local_78,local_7c,local_80,local_84);
          goto LAB_004a3a9f;
        }
      }
    }
  }
  *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
LAB_004a3a9f:
  op_sunlight();
  return;
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_34
}
