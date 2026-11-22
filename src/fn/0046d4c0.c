/* Rebuilt from lomse.exe op_container @ 0x0046d4c0 (1372 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_0043da90 ((undefined8 (__thiscall *)(void *, int *))0x0043da90)
#define FUN_0046ba20 ((undefined4 (__stdcall *)(void))0x0046ba20)
#define FUN_00492270 ((int (__fastcall *)(int *, undefined4, undefined4))0x00492270)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define LAB_00474de0 (*(undefined *)0x00474de0) /* code label used as address */
#define __alloca_probe ((undefined4 (__cdecl *)(undefined1))0x00539630)
#define s_container__invalid___of_spots_0055793c (*(char (*)[])0x0055793c)

#define LOM_SELF_0046d4c0 1
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __cdecl rb_0046d4c0(void *vm)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  uchar _fr[0x13b0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_13a8;
  typedef undefined4 _t_uStack_13a4;
  typedef undefined4 _t_fStack_13a0;
  typedef undefined4 _t_fStack_139c;
  typedef undefined4 _t_fStack_1398;
  typedef undefined4 _t_afStack_1394[2];
  typedef undefined4 _t_fStack_138c;
  typedef uint _t_uStack_1388;
  typedef uint _t_uStack_1384;
  typedef uint _t_uStack_1380;
  typedef undefined4 _t_fStack_137c;
  typedef uint _t_uStack_1378;
  typedef uint _t_auStack_1374[2];
  typedef uint _t_uStack_136c;
  typedef uint _t_auStack_1368[2];
  typedef uint _t_uStack_1360;
  typedef uint _t_auStack_135c[2];
  typedef uint _t_uStack_1354;
  typedef uint _t_auStack_1350[2];
  typedef uint _t_uStack_1348;
  typedef uint _t_auStack_1344[2];
  typedef undefined4 _t_fStack_133c;
  typedef uint _t_auStack_1338[2];
  typedef undefined4 _t_fStack_1330;
  typedef uint _t_auStack_132c[2];
  typedef undefined4 _t_fStack_1324;
  typedef uint _t_auStack_1320[2];
  typedef undefined4 _t_fStack_1318;
  typedef uint _t_auStack_1314[2];
  typedef undefined4 _t_fStack_130c;
  typedef uint _t_auStack_1308[2];
  typedef undefined4 _t_fStack_1300;
  typedef uint _t_uStack_12fc;
  typedef undefined4 _t_fStack_12f8;
  typedef int _t_iStack_12f4;
  typedef int _t_iStack_12f0;
  typedef undefined1 _t_auStack_12ec[32];
  typedef uint _t_auStack_12cc[1192];
  typedef uint _t_uStack_2c;
  typedef undefined4 _t_uStack_28;
  typedef undefined4 _t_uStack_24;
  typedef undefined4 _t_uStack_20;
  typedef undefined4 _t_uStack_1c;
  typedef undefined4 _t_uStack_18;
  typedef undefined4 _t_uStack_14;
  typedef uint _t_uStack_10;
#define uStack_13a8 (*(_t_uStack_13a8 *)(_fr + 0x0))
#define uStack_13a4 (*(_t_uStack_13a4 *)(_fr + 0x4))
#define fStack_13a0 (*(_t_fStack_13a0 *)(_fr + 0x8))
#define fStack_139c (*(_t_fStack_139c *)(_fr + 0xc))
#define fStack_1398 (*(_t_fStack_1398 *)(_fr + 0x10))
#define afStack_1394 (*(_t_afStack_1394 *)(_fr + 0x14))
#define fStack_138c (*(_t_fStack_138c *)(_fr + 0x1c))
#define uStack_1388 (*(_t_uStack_1388 *)(_fr + 0x20))
#define uStack_1384 (*(_t_uStack_1384 *)(_fr + 0x24))
#define uStack_1380 (*(_t_uStack_1380 *)(_fr + 0x28))
#define fStack_137c (*(_t_fStack_137c *)(_fr + 0x2c))
#define uStack_1378 (*(_t_uStack_1378 *)(_fr + 0x30))
#define auStack_1374 (*(_t_auStack_1374 *)(_fr + 0x34))
#define uStack_136c (*(_t_uStack_136c *)(_fr + 0x3c))
#define auStack_1368 (*(_t_auStack_1368 *)(_fr + 0x40))
#define uStack_1360 (*(_t_uStack_1360 *)(_fr + 0x48))
#define auStack_135c (*(_t_auStack_135c *)(_fr + 0x4c))
#define uStack_1354 (*(_t_uStack_1354 *)(_fr + 0x54))
#define auStack_1350 (*(_t_auStack_1350 *)(_fr + 0x58))
#define uStack_1348 (*(_t_uStack_1348 *)(_fr + 0x60))
#define auStack_1344 (*(_t_auStack_1344 *)(_fr + 0x64))
#define fStack_133c (*(_t_fStack_133c *)(_fr + 0x6c))
#define auStack_1338 (*(_t_auStack_1338 *)(_fr + 0x70))
#define fStack_1330 (*(_t_fStack_1330 *)(_fr + 0x78))
#define auStack_132c (*(_t_auStack_132c *)(_fr + 0x7c))
#define fStack_1324 (*(_t_fStack_1324 *)(_fr + 0x84))
#define auStack_1320 (*(_t_auStack_1320 *)(_fr + 0x88))
#define fStack_1318 (*(_t_fStack_1318 *)(_fr + 0x90))
#define auStack_1314 (*(_t_auStack_1314 *)(_fr + 0x94))
#define fStack_130c (*(_t_fStack_130c *)(_fr + 0x9c))
#define auStack_1308 (*(_t_auStack_1308 *)(_fr + 0xa0))
#define fStack_1300 (*(_t_fStack_1300 *)(_fr + 0xa8))
#define uStack_12fc (*(_t_uStack_12fc *)(_fr + 0xac))
#define fStack_12f8 (*(_t_fStack_12f8 *)(_fr + 0xb0))
#define iStack_12f4 (*(_t_iStack_12f4 *)(_fr + 0xb4))
#define iStack_12f0 (*(_t_iStack_12f0 *)(_fr + 0xb8))
#define auStack_12ec (*(_t_auStack_12ec *)(_fr + 0xbc))
#define auStack_12cc (*(_t_auStack_12cc *)(_fr + 0xdc))
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0x137c))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x1380))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x1384))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x1388))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x138c))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x1390))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x1394))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x1398))

  /* alloca_probe return-address write dropped (probe replaced by _fr). */
  FUN_00539ff0(auStack_12ec,0x30,100,&LAB_00474de0,FUN_0046ba20);
  FUN_0040adb0(vm,afStack_1394);
  iVar1 = FUN_004026a0((uint *)afStack_1394,&uStack_2c,(uint *)&fStack_1398,&fStack_13a0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
  }
  else if (((int)uStack_2c < 1) || (100 < (int)uStack_2c)) {
    FUN_004d41c0(vm,s_container__invalid___of_spots_0055793c);
  }
  else {
    iVar1 = uStack_2c - 1;
    if (-1 < iVar1) {
      puVar4 = auStack_12cc + iVar1 * 0xc;
      do {
        FUN_0040adb0(vm,auStack_1374);
        iVar2 = FUN_004026a0(auStack_1374,puVar4 + 1,(uint *)&fStack_13a0,&fStack_1398);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          goto LAB_0046d9fe;
        }
        FUN_0040adb0(vm,auStack_1368);
        iVar2 = FUN_004026a0(auStack_1368,puVar4,&uStack_1384,&fStack_12f8);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          goto LAB_0046d9fe;
        }
        FUN_0040adb0(vm,auStack_135c);
        iVar2 = FUN_004026a0(auStack_135c,puVar4 + -1,&uStack_12fc,&fStack_137c);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          goto LAB_0046d9fe;
        }
        FUN_0040adb0(vm,auStack_1350);
        iVar2 = FUN_004026a0(auStack_1350,puVar4 + -2,&uStack_1380,&fStack_133c);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          goto LAB_0046d9fe;
        }
        FUN_0040adb0(vm,auStack_1344);
        iVar2 = FUN_004026a0(auStack_1344,puVar4 + 2,&uStack_1378,&fStack_1300);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          goto LAB_0046d9fe;
        }
        FUN_0040adb0(vm,auStack_1338);
        iVar2 = FUN_004026a0(auStack_1338,puVar4 + -3,&uStack_136c,&fStack_1330);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          goto LAB_0046d9fe;
        }
        FUN_0040adb0(vm,auStack_132c);
        iVar2 = FUN_004026a0(auStack_132c,puVar4 + -4,&uStack_1360,&fStack_130c);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          goto LAB_0046d9fe;
        }
        FUN_0040adb0(vm,auStack_1320);
        iVar2 = FUN_004026a0(auStack_1320,puVar4 + -5,&uStack_1354,&fStack_1324);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          goto LAB_0046d9fe;
        }
        FUN_0040adb0(vm,auStack_1314);
        iVar2 = FUN_004026a0(auStack_1314,puVar4 + -6,&uStack_1348,&fStack_138c);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          goto LAB_0046d9fe;
        }
        FUN_0040adb0(vm,auStack_1308);
        iVar2 = FUN_004026a0(auStack_1308,puVar4 + -7,&uStack_1388,&fStack_1318);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          goto LAB_0046d9fe;
        }
        FUN_0040adb0(vm,&uStack_13a8);
        iVar2 = FUN_004026a0(&uStack_13a8,puVar4 + -8,(uint *)afStack_1394,&fStack_139c);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          goto LAB_0046d9fe;
        }
        puVar4[3] = 0xffffffff;
        iVar1 = iVar1 + -1;
        puVar4 = puVar4 + -0xc;
      } while (-1 < iVar1);
    }
    FUN_0040adb0(vm,&uStack_13a8);
    iVar1 = FUN_004026a0(&uStack_13a8,&uStack_10,(uint *)&fStack_139c,afStack_1394);
    if (iVar1 == 0) {
      FUN_00404ab0(vm,0xe);
    }
    else {
      if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
        iVar1 = *(int *)((int)vm + 0x54) + 1;
        *(int *)((int)vm + 0x54) = iVar1;
        uStack_20 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
        uStack_1c = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(vm,6);
        uStack_20 = 0;
        uStack_1c = uStack_13a4;
      }
      if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
        iVar1 = *(int *)((int)vm + 0x54) + 1;
        *(int *)((int)vm + 0x54) = iVar1;
        uStack_18 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
        uStack_13a4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(vm,6);
        uStack_18 = 0;
      }
      uStack_14 = uStack_13a4;
      puVar3 = (undefined4 *)FUN_0040adb0(vm,&uStack_13a8);
      uStack_28 = *puVar3;
      uStack_24 = puVar3[1];
      uVar5 = FUN_0043da90(vm,&iStack_12f0);
      if ((int)uVar5 != 0) {
        uVar5 = FUN_0043da90(vm,&iStack_12f4);
        if ((int)uVar5 != 0) {
          iVar1 = FUN_00492270(&DAT_005a7b50,(int)((ulonglong)uVar5 >> 0x20),&iStack_12f4);
          FUN_0041d1d0(vm,1,iVar1);
        }
      }
    }
  }
LAB_0046d9fe:
  FUN_00539eb0(auStack_12ec,0x30,100,FUN_0046ba20);
  return;
#undef uStack_13a8
#undef uStack_13a4
#undef fStack_13a0
#undef fStack_139c
#undef fStack_1398
#undef afStack_1394
#undef fStack_138c
#undef uStack_1388
#undef uStack_1384
#undef uStack_1380
#undef fStack_137c
#undef uStack_1378
#undef auStack_1374
#undef uStack_136c
#undef auStack_1368
#undef uStack_1360
#undef auStack_135c
#undef uStack_1354
#undef auStack_1350
#undef uStack_1348
#undef auStack_1344
#undef fStack_133c
#undef auStack_1338
#undef fStack_1330
#undef auStack_132c
#undef fStack_1324
#undef auStack_1320
#undef fStack_1318
#undef auStack_1314
#undef fStack_130c
#undef auStack_1308
#undef fStack_1300
#undef uStack_12fc
#undef fStack_12f8
#undef iStack_12f4
#undef iStack_12f0
#undef auStack_12ec
#undef auStack_12cc
#undef uStack_2c
#undef uStack_28
#undef uStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef uStack_10
}
