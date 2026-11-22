
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __cdecl op_container(void *vm)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uStack_13a8;
  undefined4 uStack_13a4;
  float fStack_13a0;
  float fStack_139c;
  float fStack_1398;
  float afStack_1394 [2];
  float fStack_138c;
  uint uStack_1388;
  uint uStack_1384;
  uint uStack_1380;
  float fStack_137c;
  uint uStack_1378;
  uint auStack_1374 [2];
  uint uStack_136c;
  uint auStack_1368 [2];
  uint uStack_1360;
  uint auStack_135c [2];
  uint uStack_1354;
  uint auStack_1350 [2];
  uint uStack_1348;
  uint auStack_1344 [2];
  float fStack_133c;
  uint auStack_1338 [2];
  float fStack_1330;
  uint auStack_132c [2];
  float fStack_1324;
  uint auStack_1320 [2];
  float fStack_1318;
  uint auStack_1314 [2];
  float fStack_130c;
  uint auStack_1308 [2];
  float fStack_1300;
  uint uStack_12fc;
  float fStack_12f8;
  int iStack_12f4;
  int iStack_12f0;
  undefined1 auStack_12ec [32];
  uint auStack_12cc [1192];
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549e2b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x46d4df;
  ExceptionList = &pvStack_c;
  FUN_00539ff0(auStack_12ec,0x30,100,&LAB_00474de0,FUN_0046ba20);
  uStack_4 = 0;
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
  uStack_4 = 0xffffffff;
  FUN_00539eb0(auStack_12ec,0x30,100,FUN_0046ba20);
  ExceptionList = pvStack_c;
  return;
}


