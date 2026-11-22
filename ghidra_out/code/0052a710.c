
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_getunittypeeffectivedata(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int *this_00;
  int iVar3;
  int iVar4;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
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
  
  this = vm;
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054c4d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0040adb0(vm,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,(uint *)&vm,&uStack_68,(float *)&pvStack_64);
  if (iVar2 == 0) {
LAB_0052a81a:
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    ExceptionList = pvStack_c;
    return;
  }
  FUN_0040adb0(this,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,&uStack_70,&uStack_68,(float *)&pvStack_64);
  if (iVar2 == 0) goto LAB_0052a81a;
  FUN_0040adb0(this,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,&uStack_74,&uStack_68,(float *)&pvStack_64);
  if (iVar2 == 0) goto LAB_0052a81a;
  FUN_0040adb0(this,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,&uStack_78,&uStack_68,(float *)&pvStack_64);
  if (iVar2 == 0) goto LAB_0052a81a;
  FUN_0040adb0(this,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,&uStack_6c,&uStack_68,(float *)&pvStack_64);
  if (iVar2 == 0) goto LAB_0052a81a;
  FUN_00526e40(aiStack_58);
  iStack_4 = 0;
  iVar2 = FUN_00529200(aiStack_58,uStack_74,uStack_78);
  if (iVar2 == 0) {
    FUN_004d41c0(this,s_getunittypeeffectivedata_can_cre_005742f4);
  }
  else {
    iStack_48 = uStack_70 << 8;
    pvStack_64 = (void *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    iStack_4._0_1_ = 1;
    if (pvStack_64 == (void *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = FUN_004116b0(pvStack_64,uStack_6c);
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (this_00 != (int *)0x0) {
      _DAT_00584ae0 = 1;
      iVar2 = FUN_004a7d50(&DAT_005ae958,this_00,0);
      if (iVar2 == -1) {
        (/*IC:0052a915*/**(code **)*this_00)(this_00,1);
        OutputDebugStringA(s_AddSprite_failed__army__00555ec8);
        FUN_0041d1d0(this,1,0xffffff9d);
      }
      else {
        iVar3 = FUN_004163a0(this_00,aiStack_58);
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_44 = 0;
        iVar2 = this_00[10];
        if (*(int *)((int)this + 0x54) == 0) {
          FUN_00404ab0(this,3);
        }
        else {
          iVar1 = *(int *)((int)this + 0x50);
          iVar4 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar4;
          *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
        }
        FUN_0041d1d0(this,1,iVar3);
        FUN_004d09a0(DAT_005a7b78,DAT_005a7cf4,DAT_005a7cf8,-2);
        if (vm == (void *)0x2f) {
          FUN_00522000(this_00 + iVar3 * 0x13 + 0x31,(int *)&pvStack_64,(int *)&uStack_68);
          if (*(int *)((int)this + 0x54) == 0) {
LAB_0052aa7e:
            FUN_00404ab0(this,3);
          }
          else {
            iVar3 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar3;
            iVar2 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
            *(uint *)(iVar2 + 4 + iVar3 * 8) = uStack_68;
          }
        }
        else {
          iVar2 = FUN_00527e90(this_00 + iVar3 * 0x13 + 0x31,(int)vm,(int *)&uStack_68);
          if (iVar2 == 0) {
            iVar2 = FUN_00527fa0(this_00 + iVar3 * 0x13 + 0x31,(int)vm,(int *)&pvStack_64);
            if (iVar2 == 0) {
              FUN_004d41c0(this,s_Invalid_data_id_00556604);
              if (*(int *)((int)this + 0x54) == 0) goto LAB_0052aa7e;
              iVar3 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar3;
              iVar2 = *(int *)((int)this + 0x50);
              *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
              *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
            }
            else {
              FUN_0041d1d0(this,2,pvStack_64);
            }
          }
          else {
            FUN_0041d1d0(this,1,uStack_68);
          }
        }
        FUN_00483be0(&DAT_005aa12c,this_00);
      }
      _DAT_00584ae0 = 0;
      goto LAB_0052aa98;
    }
    OutputDebugStringA(s_Insufficient_memory_to_add_army_00555ee4);
  }
  FUN_0041d1d0(this,1,0xffffff9d);
LAB_0052aa98:
  iStack_4 = 0xffffffff;
  thunk_FUN_00526ea0((int)aiStack_58);
  ExceptionList = pvStack_c;
  return;
}


