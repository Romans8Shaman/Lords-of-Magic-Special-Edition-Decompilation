/* Rebuilt from lomse.exe op_partialcanmerge_q @ 0x00520e20 (598 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)
#define FUN_00415170 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x00415170)
#define FUN_00415610 ((undefined4 (__thiscall *)(void *, int))0x00415610)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00520e20 1
void __cdecl rb_00520e20(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  uchar _fr[0xbe8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_be0;
  typedef float _t_local_bdc;
  typedef void * _t_local_bd8;
  typedef void * _t_local_bd4;
  typedef uint _t_local_bd0;
  typedef float _t_local_bcc;
  typedef uint _t_local_bc8;
  typedef undefined4 _t_local_bc4[375];
  typedef undefined4 _t_local_5e8[375];
#define local_be0 (*(_t_local_be0 *)(_fr + 0x0))
#define local_bdc (*(_t_local_bdc *)(_fr + 0x4))
#define local_bd8 (*(_t_local_bd8 *)(_fr + 0x8))
#define local_bd4 (*(_t_local_bd4 *)(_fr + 0xc))
#define local_bd0 (*(_t_local_bd0 *)(_fr + 0x10))
#define local_bcc (*(_t_local_bcc *)(_fr + 0x14))
#define local_bc8 (*(_t_local_bc8 *)(_fr + 0x18))
#define local_bc4 (*(_t_local_bc4 *)(_fr + 0x1c))
#define local_5e8 (*(_t_local_5e8 *)(_fr + 0x5f8))

  FUN_00411610(local_5e8);
  FUN_00411610(local_bc4);
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_bdc = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    fVar5 = local_bdc;
  }
  else if (uVar3 == 2) {
    fVar5 = __BC(float, (__BC(int, local_bdc) >> 8));
  }
  else {
    if (uVar3 != 4) {
      FUN_00404ab0(param_1,0xe);
      goto LAB_0052101b;
    }
    lVar6 = __ftol((float10)local_bdc);
    fVar5 = __BC(float, lVar6);
  }
  iVar2 = FUN_0041be40(param_1,&local_bd4);
  if (iVar2 != 0) {
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar2 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      local_be0 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
      local_bdc = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 6;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      local_be0 = 0;
    }
    iVar2 = FUN_004026a0(&local_be0,&local_bd0,&local_bc8,&local_bcc);
    if (iVar2 == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar2 = FUN_0041be40(param_1,&local_bd8);
      if (iVar2 != 0) {
        FUN_00415170(local_bd8,local_5e8,local_bd0);
        FUN_00415170(local_bd4,local_bc4,__BC(uint, fVar5));
        iVar2 = FUN_00415610(local_5e8,(int)local_bc4);
        if (*(int *)((int)param_1 + 0x54) == 0) {
          *(undefined4 *)((int)param_1 + 0x90) = 3;
          FUN_004d4550(param_1);
          *(undefined4 *)((int)param_1 + 0x90) = 0;
          *(undefined4 *)((int)param_1 + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar4;
          iVar1 = *(int *)((int)param_1 + 0x50);
          *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
          *(uint *)(iVar1 + 4 + iVar4 * 8) = -(uint)(iVar2 != 0);
        }
        FUN_004117f0(local_5e8,0);
        FUN_004117f0(local_bc4,0);
      }
    }
  }
LAB_0052101b:
  FUN_00411910(local_bc4);
  FUN_00411910(local_5e8);
  return;
#undef local_be0
#undef local_bdc
#undef local_bd8
#undef local_bd4
#undef local_bd0
#undef local_bcc
#undef local_bc8
#undef local_bc4
#undef local_5e8
}
