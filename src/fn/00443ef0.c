/* Rebuilt from lomse.exe FUN_00443ef0 @ 0x00443ef0 (449 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd310 (*(undefined *)0x005cd310)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0043c360 ((undefined4 (__thiscall *)(void *, undefined4, int, int, int))0x0043c360)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_buildinginfo_not_found_00556778 (*(char (*)[])0x00556778)

#define LOM_SELF_00443ef0 1
undefined4 __cdecl rb_00443ef0(void *volatile param_1, int *volatile param_2)

{
  void *this;
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_10;
  typedef uint _t_local_c;
  typedef uint _t_local_8;
  typedef float _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  fVar4 = local_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar4 = __BC(float, (__BC(int, local_4) >> 8));
    }
    else {
      if (uVar1 != 4) goto LAB_0044409f;
      lVar5 = __ftol((float10)local_4);
      fVar4 = __BC(float, lVar5);
    }
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    local_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    local_8 = 0;
  }
  iVar2 = FUN_004026a0(&local_8,(uint *)&param_1,&local_c,&local_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return 0;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    fVar3 = local_4;
  }
  else if (uVar1 == 2) {
    fVar3 = __BC(float, (__BC(int, local_4) >> 8));
  }
  else {
    if (uVar1 != 4) {
LAB_0044409f:
      FUN_00404ab0(this,0xe);
      return 0;
    }
    lVar5 = __ftol((float10)local_4);
    fVar3 = __BC(float, lVar5);
  }
  iVar2 = FUN_0043c360(&DAT_005cd310,param_1,(int)param_1,__BC(int, fVar3),__BC(int, fVar4));
  *param_2 = iVar2;
  if (iVar2 == 0) {
    FUN_004d41c0(this,s_buildinginfo_not_found_00556778);
    return 0;
  }
  return 1;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
