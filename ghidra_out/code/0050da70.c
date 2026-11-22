
undefined4 __thiscall FUN_0050da70(void *this,int *param_1)

{
  short sVar1;
  void *this_00;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054c301;
  pvStack_c = ExceptionList;
  puVar3 = *(undefined4 **)((int)this + 0x58);
  ExceptionList = &pvStack_c;
  if (puVar3 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (/*IC:0050da9b*/**(code **)*puVar3)(puVar3,1);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  piVar2 = param_1;
  FUN_004f6b00(this,param_1);
  FUN_005397f0((char *)((int)this + 0x48),4,1,piVar2);
  if (DAT_005aa12c < 0x62) {
    FUN_005397f0((char *)&param_1,4,1,piVar2);
    FUN_005397f0((char *)&param_1,4,1,piVar2);
    *(undefined1 *)((int)this + 0x4c) = 0xff;
    *(undefined1 *)((int)this + 0x4d) = 1;
  }
  else {
    FUN_005397f0((char *)((int)this + 0x4c),1,1,piVar2);
    FUN_005397f0((char *)((int)this + 0x4d),1,1,piVar2);
  }
  if (0x35 < DAT_005aa12c) {
    FUN_005397f0((char *)((int)this + 0x54),4,1,piVar2);
    FUN_005397f0((char *)&param_1,4,1,piVar2);
    if (param_1 != (int *)0x0) {
      puStack_14 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      uStack_4 = 0;
      if (puStack_14 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_00411610(puStack_14);
      }
      uStack_4 = 0xffffffff;
      *(undefined4 **)((int)this + 0x58) = puVar3;
      FUN_004122a0(puVar3,piVar2);
    }
  }
  if (0x49 < DAT_005aa12c) {
    FUN_005397f0((char *)((int)this + 0x5c),4,1,piVar2);
  }
  if (0x5f < DAT_005aa12c) {
    FUN_005397f0((char *)((int)this + 0x44),1,1,piVar2);
  }
  if (0x65 < DAT_005aa12c) {
    FUN_005397f0((char *)((int)this + 0x4e),2,1,piVar2);
    iVar5 = *(int *)((int)this + 0x50);
    if (iVar5 != 0) {
      FUN_00539eb0(iVar5,0xc,*(int *)(iVar5 + -4),&LAB_00462c80);
      if (iVar5 + -4 != 0) {
        Ordinal_403(iVar5 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
      *(undefined4 *)((int)this + 0x50) = 0;
    }
    sVar1 = *(short *)((int)this + 0x4e);
    if (0 < sVar1) {
      iVar5 = (int)sVar1;
      param_1 = (int *)Ordinal_401(iVar5 * 0xc + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
      uStack_4 = 1;
      if (param_1 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = param_1 + 1;
        *param_1 = iVar5;
        FUN_00539ff0(piVar4,0xc,iVar5,&LAB_00462c60,&LAB_00462c80);
      }
      uStack_4 = 0xffffffff;
      *(int **)((int)this + 0x50) = piVar4;
      if (piVar4 == (int *)0x0) {
        ExceptionList = pvStack_c;
        return 0;
      }
      param_1 = (int *)0x0;
      if (0 < *(short *)((int)this + 0x4e)) {
        iVar5 = 0;
        do {
          FUN_005397f0((char *)(iVar5 + *(int *)((int)this + 0x50)),4,1,piVar2);
          FUN_005397f0((char *)(iVar5 + 4 + *(int *)((int)this + 0x50)),4,1,piVar2);
          FUN_005397f0((char *)&puStack_14,4,1,piVar2);
          if (puStack_14 == (undefined4 *)0x0) {
            *(undefined4 *)(iVar5 + 8 + *(int *)((int)this + 0x50)) = 0;
          }
          else {
            puStack_10 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0)
            ;
            uStack_4 = 2;
            if (puStack_10 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              puVar3 = FUN_00411610(puStack_10);
            }
            uStack_4 = 0xffffffff;
            *(undefined4 **)(iVar5 + 8 + *(int *)((int)this + 0x50)) = puVar3;
            this_00 = *(void **)(iVar5 + 8 + *(int *)((int)this + 0x50));
            if (this_00 == (void *)0x0) {
              ExceptionList = pvStack_c;
              return 0;
            }
            FUN_004122a0(this_00,piVar2);
          }
          iVar5 = iVar5 + 0xc;
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < (int)*(short *)((int)this + 0x4e));
      }
    }
  }
  ExceptionList = pvStack_c;
  return 1;
}


