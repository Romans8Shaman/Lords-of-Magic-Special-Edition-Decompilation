/* Rebuilt from lomse.exe op_setformation @ 0x0041fb40 (508 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005787b8 (*(undefined *)0x005787b8)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041faf0 ((int (__thiscall *)(void *, int, int))0x0041faf0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_0054d450 (*(double *)0x0054d450)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_setform___invalid___units_00555c4c (*(char (*)[])0x00555c4c)

#define LOM_SELF_0041fb40 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_0041fb40(void *volatile param_1)

{
  void *this;
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  longlong lVar8;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_18;
  typedef uint _t_local_14;
  typedef uint _t_local_10;
  typedef float _t_local_c;
  typedef float _t_local_4;
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar4;
    uVar1 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  fVar3 = local_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar3 = __BC(float, (__BC(int, local_4) >> 8));
    }
    else {
      if (uVar1 != 4) {
LAB_0041fd17:
        FUN_00404ab0(this,0xe);
        return;
      }
      lVar8 = __ftol((float10)local_4);
      fVar3 = __BC(float, lVar8);
    }
  }
  if ((__BC(int, fVar3) < 1) || (0xf < __BC(int, fVar3))) {
    FUN_004d41c0(this,s_setform___invalid___units_00555c4c);
  }
  else {
    iVar2 = FUN_0041faf0(&DAT_005787b8,__BC(int, fVar3),0);
    iVar4 = __BC(int, fVar3) + -1;
    if (-1 < iVar4) {
      pfVar5 = (float *)(iVar2 + iVar4 * 8);
      do {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar2 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar2;
          local_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
          local_c = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
        }
        else {
          *(undefined4 *)((int)this + 0x90) = 6;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          local_10 = 0;
          local_c = local_4;
        }
        iVar2 = FUN_004026a0(&local_10,&local_14,&local_18,(float *)&param_1);
        if (iVar2 == 0) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          return;
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
          fVar6 = (float10)__BC(int, local_4);
        }
        else if (uVar1 == 2) {
          fVar6 = (float10)__BC(int, local_4) * (float10)_DAT_0054d450;
        }
        else {
          if (uVar1 != 4) goto LAB_0041fd17;
          fVar6 = (float10)local_4;
        }
        fVar7 = (float10)fpatan((float10)__BC(float, param_1),fVar6);
        iVar4 = iVar4 + -1;
        *pfVar5 = (float)fVar7;
        pfVar5[1] = (float)SQRT((float10)__BC(float, param_1) * (float10)__BC(float, param_1) + fVar6 * fVar6);
        pfVar5 = pfVar5 + -2;
      } while (-1 < iVar4);
    }
  }
  return;
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_4
}
