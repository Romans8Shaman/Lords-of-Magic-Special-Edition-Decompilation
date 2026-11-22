/* Rebuilt from lomse.exe FUN_005116b0 @ 0x005116b0 (768 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005853ec (*(undefined4 *)0x005853ec)
#define DAT_005853f0 (*(byte *)0x005853f0)
#define DAT_005853f4 (*(undefined4 *)0x005853f4)
#define DAT_005853f8 (*(byte *)0x005853f8)
#define DAT_005853fc (*(undefined4 *)0x005853fc)
#define DAT_00585400 (*(byte *)0x00585400)
#define DAT_005aea70 (*(undefined *)0x005aea70)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004a2380 ((undefined4 (__cdecl *)(LPCSTR, int))0x004a2380)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_005116b0 1
void __thiscall rb_005116b0(void *this,void *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uchar _fr[0x358] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_350;
  typedef int _t_local_34c;
  typedef uint _t_local_348;
  typedef uint _t_local_344;
  typedef uint _t_local_340;
  typedef void * _t_local_33c;
  typedef undefined4 _t_local_338;
  typedef uint _t_local_334;
  typedef undefined4 _t_local_330;
  typedef undefined4 _t_local_328;
  typedef uint _t_local_324[2];
  typedef undefined4 _t_local_31c;
  typedef uint _t_local_318[2];
  typedef uint _t_local_310;
  typedef uint _t_local_30c[2];
  typedef uint _t_local_304;
  typedef undefined1 _t_local_300;
  typedef byte _t_local_2ff[767];
#define local_350 (*(_t_local_350 *)(_fr + 0x0))
#define local_34c (*(_t_local_34c *)(_fr + 0x4))
#define local_348 (*(_t_local_348 *)(_fr + 0x8))
#define local_344 (*(_t_local_344 *)(_fr + 0xc))
#define local_340 (*(_t_local_340 *)(_fr + 0x10))
#define local_33c (*(_t_local_33c *)(_fr + 0x14))
#define local_338 (*(_t_local_338 *)(_fr + 0x18))
#define local_334 (*(_t_local_334 *)(_fr + 0x1c))
#define local_330 (*(_t_local_330 *)(_fr + 0x20))
#define local_328 (*(_t_local_328 *)(_fr + 0x28))
#define local_324 (*(_t_local_324 *)(_fr + 0x2c))
#define local_31c (*(_t_local_31c *)(_fr + 0x34))
#define local_318 (*(_t_local_318 *)(_fr + 0x38))
#define local_310 (*(_t_local_310 *)(_fr + 0x40))
#define local_30c (*(_t_local_30c *)(_fr + 0x44))
#define local_304 (*(_t_local_304 *)(_fr + 0x4c))
#define local_300 (*(_t_local_300 *)(_fr + 0x50))
#define local_2ff (*(_t_local_2ff *)(_fr + 0x51))
  
  local_33c = this;
  FUN_004a2380(&DAT_005aea70,(int)&local_300);
  local_350 = 0;
  local_330 = 1;
  local_34c = 0x152;
  iVar3 = 0;
  pbVar4 = local_2ff;
  while( true ) {
    local_344 = (uint)*pbVar4 << 2;
    local_340 = (uint)pbVar4[-1] << 2;
    local_348 = (uint)pbVar4[1] << 2;
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar2 * 8) = local_340;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar2 * 8) = local_344;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar2 * 8) = local_348;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = local_330;
      *(int *)(iVar1 + 4 + iVar2 * 8) = local_350;
    }
    FUN_004d05e0(param_1,param_2,param_3);
    FUN_0040adb0(param_1,local_324);
    iVar1 = FUN_004026a0(local_324,&local_348,&local_304,&local_328);
    if (iVar1 == 0) break;
    FUN_0040adb0(param_1,local_318);
    iVar1 = FUN_004026a0(local_318,&local_344,&local_310,&local_338);
    if (iVar1 == 0) break;
    FUN_0040adb0(param_1,local_30c);
    iVar1 = FUN_004026a0(local_30c,&local_340,&local_334,&local_31c);
    if (iVar1 == 0) break;
    local_340 = local_340 & ((int)local_340 < 1) - 1;
    if (0xff < (int)local_340) {
      local_340 = 0xff;
    }
    local_344 = ((int)local_344 < 1) - 1 & local_344;
    if (0xff < (int)local_344) {
      local_344 = 0xff;
    }
    local_348 = ((int)local_348 < 1) - 1 & local_348;
    if (0xff < (int)local_348) {
      local_348 = 0xff;
    }
    pbVar4 = pbVar4 + 3;
    iVar1 = iVar3 + local_34c;
    iVar3 = iVar3 + 1;
    *(short *)((int)local_33c + iVar1 * 2) =
         (short)(((int)local_340 >> (DAT_005853f0 & 0x1f)) << ((byte)DAT_005853ec & 0x1f)) +
         (short)(((int)local_348 >> (DAT_00585400 & 0x1f)) << ((byte)DAT_005853fc & 0x1f)) +
         (short)(((int)local_344 >> (DAT_005853f8 & 0x1f)) << ((byte)DAT_005853f4 & 0x1f));
    if (0xff < iVar3) {
      local_34c = local_34c + 0x100;
      local_350 = local_350 + 1;
      if (0x10151 < local_34c) {
        return;
      }
      iVar3 = 0;
      pbVar4 = local_2ff;
    }
  }
  *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
#undef local_350
#undef local_34c
#undef local_348
#undef local_344
#undef local_340
#undef local_33c
#undef local_338
#undef local_334
#undef local_330
#undef local_328
#undef local_324
#undef local_31c
#undef local_318
#undef local_310
#undef local_30c
#undef local_304
#undef local_300
#undef local_2ff
}
