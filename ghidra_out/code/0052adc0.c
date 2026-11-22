
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_getunittypeeffectivedata_level(void *vm)

{
  void *pvVar1;
  int iVar2;
  int *this;
  int iVar3;
  int iVar4;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  float fStack_68;
  void *pvStack_64;
  uint auStack_60 [2];
  int aiStack_58 [4];
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  pvVar1 = vm;
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054c513;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0040adb0(vm,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,&uStack_70,(uint *)&pvStack_64,&fStack_68);
  if (iVar2 == 0) {
LAB_0052ae99:
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    ExceptionList = pvStack_c;
    return;
  }
  FUN_0040adb0(pvVar1,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,&uStack_74,(uint *)&fStack_68,(float *)&pvStack_64);
  if (iVar2 == 0) goto LAB_0052ae99;
  FUN_0040adb0(pvVar1,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,(uint *)&vm,(uint *)&fStack_68,(float *)&pvStack_64);
  if (iVar2 == 0) goto LAB_0052ae99;
  FUN_0040adb0(pvVar1,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,&uStack_6c,(uint *)&fStack_68,(float *)&pvStack_64);
  if (iVar2 == 0) goto LAB_0052ae99;
  FUN_00526e40(aiStack_58);
  iStack_4 = 0;
  iVar2 = FUN_00529200(aiStack_58,uStack_74,(uint)vm);
  if (iVar2 == 0) {
    FUN_004d41c0(pvVar1,s_getunittypeeffectivedata_can_cre_005742f4);
  }
  else {
    iStack_48 = uStack_70 << 8;
    pvStack_64 = (void *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    iStack_4._0_1_ = 1;
    if (pvStack_64 == (void *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = FUN_004116b0(pvStack_64,uStack_6c);
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (this != (int *)0x0) {
      _DAT_00584ae0 = 1;
      iVar2 = FUN_004a7d50(&DAT_005ae958,this,0);
      if (iVar2 == -1) {
        (/*IC:0052afa6*/**(code **)*this)(this,1);
        OutputDebugStringA(s_AddSprite_failed__army__00555ec8);
        if (*(int *)((int)pvVar1 + 0x54) == 0) {
          FUN_00404ab0(pvVar1,3);
        }
        else {
          iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
          *(int *)((int)pvVar1 + 0x54) = iVar3;
          iVar2 = *(int *)((int)pvVar1 + 0x50);
          *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
          *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 1;
        }
      }
      else {
        iVar2 = FUN_004163a0(this,aiStack_58);
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_44 = 0;
        iVar2 = FUN_005228b0(this + iVar2 * 0x13 + 0x31,this[10],iVar2);
        pvVar1 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar1);
          *(undefined4 *)((int)pvVar1 + 0x90) = 0;
          *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
          iVar3 = *(int *)((int)pvVar1 + 0x50);
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2;
        }
        FUN_00483be0(&DAT_005aa12c,this);
      }
      _DAT_00584ae0 = 0;
      goto LAB_0052b05e;
    }
    OutputDebugStringA(s_Insufficient_memory_to_add_army_00555ee4);
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    FUN_00404ab0(pvVar1,3);
  }
  else {
    iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar3;
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 1;
  }
LAB_0052b05e:
  iStack_4 = 0xffffffff;
  thunk_FUN_00526ea0((int)aiStack_58);
  ExceptionList = pvStack_c;
  return;
}


