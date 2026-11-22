
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_getunittypeeffectivedata_levelrange(void *vm)

{
  void *pvVar1;
  int iVar2;
  int *this;
  int iVar3;
  float fVar4;
  uint uStack_80;
  int iStack_7c;
  uint uStack_78;
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
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054c4f3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0040adb0(vm,auStack_60);
  iVar2 = FUN_004026a0(auStack_60,&uStack_70,(uint *)&pvStack_64,&fStack_68);
  if (iVar2 != 0) {
    FUN_0040adb0(vm,auStack_60);
    iVar2 = FUN_004026a0(auStack_60,&uStack_74,(uint *)&fStack_68,(float *)&pvStack_64);
    if (iVar2 != 0) {
      FUN_0040adb0(vm,auStack_60);
      iVar2 = FUN_004026a0(auStack_60,&uStack_78,(uint *)&fStack_68,(float *)&pvStack_64);
      if (iVar2 != 0) {
        FUN_0040adb0(vm,auStack_60);
        iVar2 = FUN_004026a0(auStack_60,&uStack_6c,(uint *)&fStack_68,(float *)&pvStack_64);
        if (iVar2 != 0) {
          FUN_00526e40(aiStack_58);
          iStack_4 = 0;
          iVar2 = FUN_00529200(aiStack_58,uStack_74,uStack_78);
          if (iVar2 == 0) {
            FUN_004d41c0(vm,s_getunittypeeffectivedata_can_cre_005742f4);
            FUN_0041d1d0(vm,1,0);
            FUN_0041d1d0(vm,1,0);
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
            if (this == (int *)0x0) {
              OutputDebugStringA(s_Insufficient_memory_to_add_army_00555ee4);
              FUN_0041d1d0(vm,1,0);
              FUN_0041d1d0(vm,1,0);
            }
            else {
              _DAT_00584ae0 = 1;
              iVar2 = FUN_004a7d50(&DAT_005ae958,this,0);
              if (iVar2 == -1) {
                (/*IC:0052acaa*/**(code **)*this)(this,1);
                OutputDebugStringA(s_AddSprite_failed__army__00555ec8);
                FUN_0041d1d0(vm,1,0);
                if (*(int *)((int)vm + 0x54) == 0) {
                  FUN_00404ab0(vm,3);
                }
                else {
                  iVar2 = *(int *)((int)vm + 0x50);
                  iVar3 = *(int *)((int)vm + 0x54) + -1;
                  *(int *)((int)vm + 0x54) = iVar3;
                  *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
                  *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
                }
              }
              else {
                fVar4 = (float)FUN_004163a0(this,aiStack_58);
                uStack_40 = 0;
                uStack_3c = 0;
                uStack_44 = 0;
                uStack_80 = 0;
                iStack_7c = 0;
                FUN_00529e40(this + (int)fVar4 * 0x13 + 0x31,this[10],fVar4,&uStack_80,&iStack_7c);
                pvVar1 = DAT_005a7b78;
                if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                  FUN_00404ab0(DAT_005a7b78,3);
                }
                else {
                  iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                  *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
                  iVar2 = *(int *)((int)pvVar1 + 0x50);
                  *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
                  *(uint *)(iVar2 + 4 + iVar3 * 8) = uStack_80;
                }
                FUN_0041d1d0(DAT_005a7b78,1,iStack_7c);
                FUN_00483be0(&DAT_005aa12c,this);
              }
              _DAT_00584ae0 = 0;
            }
          }
          iStack_4 = 0xffffffff;
          thunk_FUN_00526ea0((int)aiStack_58);
          ExceptionList = pvStack_c;
          return;
        }
      }
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  ExceptionList = pvStack_c;
  return;
}


