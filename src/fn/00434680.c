/* Rebuilt from lomse.exe FUN_00434680 @ 0x00434680 (570 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578a60 (*(uint *)0x00578a60)
#define DAT_00578a64 (*(int * *)0x00578a64)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00432ae0 ((uint (__cdecl *)(int, uint, uint, uint))0x00432ae0)
#define FUN_00432c70 ((undefined4 (__thiscall *)(void *, int *, int *, int *, int *))0x00432c70)
#define FUN_00434100 ((undefined4 (__thiscall *)(void *))0x00434100)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00434680 1
undefined4 __thiscall rb_00434680(void *this, uint volatile param_1, uint volatile param_2)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_1c;
  typedef uint _t_local_18;
  typedef uint _t_local_14;
  typedef int _t_local_10;
  typedef uint _t_local_c;
  typedef uint _t_local_8;
  typedef undefined4 _t_local_4;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
#define local_4 (*(_t_local_4 *)(_fr + 0x1c))
  
  uVar6 = param_2;
  if (*(char *)((int)this + 4) == '\0') {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (param_2 == uVar3) {
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  param_1 = uVar3;
  local_1c = this;
  uVar4 = FUN_00434100(this);
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    *(undefined4 *)(iVar7 + iVar5 * 8) = 1;
    *(uint *)(iVar7 + 4 + iVar5 * 8) = uVar6;
  }
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    *(undefined4 *)(iVar7 + iVar5 * 8) = 1;
    *(uint *)(iVar7 + 4 + iVar5 * 8) = param_1;
  }
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    *(undefined4 *)(iVar7 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar7 + 4 + iVar5 * 8) = uVar4;
  }
  FUN_00432c70(local_1c,&local_10,(int *)&local_14,(int *)&local_18,(int *)&param_2);
  uVar6 = FUN_00432ae0(local_10,local_14,local_18,param_2);
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    iVar7 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar7 + iVar5 * 8) = 1;
    *(uint *)(iVar7 + 4 + iVar5 * 8) = uVar6;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_00578a60,DAT_00578a64);
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
    local_8 = *(uint *)(*piVar1 + -8 + iVar7 * 8);
    local_4 = *(undefined4 *)(*piVar1 + -4 + iVar7 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    local_8 = 0;
  }
  iVar7 = FUN_004026a0(&local_8,&local_c,(uint *)&local_1c,(undefined4 *)&param_1);
  if (iVar7 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    return 1;
  }
  return local_c;
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
