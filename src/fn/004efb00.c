/* Rebuilt from lomse.exe op_getspellinfo @ 0x004efb00 (460 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584c1c (*(undefined4 *)0x00584c1c)
#define DAT_00584c94 (*(int *)0x00584c94)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004ef610 ((undefined4 * (__thiscall *)(void *, undefined4 *))0x004ef610)
#define FUN_004ef740 ((undefined4 (__fastcall *)(undefined4 *))0x004ef740)
#define FUN_004ef8c0 ((undefined4 (__thiscall *)(void *, void *, int))0x004ef8c0)
#define s_no_such_spell_005731d8 (*(char (*)[])0x005731d8)

#define LOM_SELF_004efb00 1
void __cdecl rb_004efb00(void *param_1)

{
  int iVar1;
  undefined4 *this;
  int iVar2;
  uchar _fr[0xa8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_9c;
  typedef undefined4 _t_local_98;
  typedef undefined4 _t_local_94;
  typedef undefined4 _t_local_90;
  typedef uint _t_local_8c;
  typedef uint _t_local_88;
  typedef undefined4 _t_local_84[16];
  typedef undefined4 * _t_local_44;
#define local_9c (*(_t_local_9c *)(_fr + 0x4))
#define local_98 (*(_t_local_98 *)(_fr + 0x8))
#define local_94 (*(_t_local_94 *)(_fr + 0xc))
#define local_90 (*(_t_local_90 *)(_fr + 0x10))
#define local_8c (*(_t_local_8c *)(_fr + 0x14))
#define local_88 (*(_t_local_88 *)(_fr + 0x18))
#define local_84 (*(_t_local_84 *)(_fr + 0x1c))
#define local_44 (*(_t_local_44 *)(_fr + 0x5c))

  FUN_004ef610(local_84,&DAT_00584c1c);
  local_44 = &DAT_005ae974;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_9c = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_98 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_9c = 0;
  }
  iVar1 = FUN_004026a0(&local_9c,&local_8c,(uint *)&local_90,&local_94);
  if (iVar1 == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar1 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar1;
      local_9c = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
      local_98 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(param_1,6);
      local_9c = 0;
    }
    iVar1 = FUN_004026a0(&local_9c,&local_88,(uint *)&local_94,&local_90);
    if (iVar1 == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    }
    else {
      if (local_88 == 0xfffffffe) {
        this = local_84;
      }
      else if (local_88 == 0xffffffff) {
        this = (undefined4 *)FUN_00482ac0(&DAT_005aa12c,DAT_00584c94,4);
      }
      else {
        this = (undefined4 *)FUN_00482ac0(&DAT_005aa12c,local_88,4);
      }
      if (this != (undefined4 *)0x0) {
        FUN_004ef8c0(this,param_1,local_8c);
        goto LAB_004efca1;
      }
      FUN_004d41c0(param_1,s_no_such_spell_005731d8);
      if (*(int *)((int)param_1 + 0x54) != 0) {
        iVar2 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar2;
        iVar1 = *(int *)((int)param_1 + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
        goto LAB_004efca1;
      }
      *(undefined4 *)((int)param_1 + 0x90) = 3;
    }
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
LAB_004efca1:
  FUN_004ef740(local_84);
  return;
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_44
}
