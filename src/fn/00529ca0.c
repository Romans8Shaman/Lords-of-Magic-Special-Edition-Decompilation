/* Rebuilt from lomse.exe op_getunittypelevelrange @ 0x00529ca0 (403 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00529a90 ((undefined4 (__stdcall *)(undefined4, uint, int *, uint *))0x00529a90)

#define LOM_SELF_00529ca0 1
void __cdecl rb_00529ca0(void *volatile param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_1c;
  typedef uint _t_local_18;
  typedef undefined4 _t_local_14;
  typedef undefined4 _t_local_10;
  typedef undefined4 _t_local_c;
  typedef uint _t_local_8;
  typedef undefined4 _t_local_4;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
#define local_4 (*(_t_local_4 *)(_fr + 0x1c))
  
  pvVar3 = param_1;
  local_18 = 0;
  local_1c = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_8 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_8 = 0;
  }
  iVar1 = FUN_004026a0(&local_8,(uint *)&param_1,(uint *)&local_c,&local_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)pvVar3 + 0x54) < *(int *)((int)pvVar3 + 0x58)) {
      iVar1 = *(int *)((int)pvVar3 + 0x54) + 1;
      *(int *)((int)pvVar3 + 0x54) = iVar1;
      local_8 = *(uint *)(*(int *)((int)pvVar3 + 0x50) + -8 + iVar1 * 8);
      local_4 = *(undefined4 *)(*(int *)((int)pvVar3 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(pvVar3,6);
      local_8 = 0;
    }
    iVar1 = FUN_004026a0(&local_8,(uint *)&local_14,(uint *)&local_10,&local_c);
    if (iVar1 == 0) {
      *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
    }
    else {
      FUN_00529a90(local_14,(uint)param_1,&local_1c,&local_18);
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
        iVar1 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar2 * 8) = local_1c;
      }
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
        iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
        iVar1 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(uint *)(iVar1 + 4 + iVar2 * 8) = local_18;
        return;
      }
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    }
  }
  FUN_004d4550(pvVar3);
  *(undefined4 *)((int)pvVar3 + 0x90) = 0;
  *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  return;
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
