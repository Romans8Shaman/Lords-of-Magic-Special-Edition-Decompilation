
undefined4 __thiscall FUN_0044ee90(void *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec [7];
  undefined4 local_d0;
  undefined4 local_c4;
  undefined4 local_a8;
  undefined4 local_a0 [5];
  undefined4 local_8c;
  int local_58;
  int local_54;
  undefined4 local_50 [17];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549bcb;
  local_c = ExceptionList;
  local_f8 = 0;
  if (((int)param_1 < 0) || (0x14 < (int)param_1)) {
    ExceptionList = &local_c;
    OutputDebugStringA(s_City__SetBuildingLevel___invalid_0055733c);
    ExceptionList = local_c;
    return 0;
  }
  if (8 < (int)param_1) {
    uVar2 = *(undefined4 *)((int)this + 0x28);
    ExceptionList = &local_c;
    FUN_0043b990(local_ec,*(undefined4 *)((int)this + 0x68),(short)*(undefined4 *)((int)this + 0x74)
                 ,(short)*(undefined4 *)((int)this + 0x80),(int)param_1,param_2,uVar2,uVar2,uVar2);
    local_c4 = *(undefined4 *)((int)this + 0x28);
    local_4 = 0;
    local_a8 = 0;
    if (param_1 == (void *)0xe) {
      iVar1 = FUN_0043de80(local_ec,9);
      if (iVar1 < 0) {
        OutputDebugStringA(s_Can_t_add_LIBRARY_without_WIZARD_00557364);
        local_4 = 0xffffffff;
        FUN_0043ba50(local_ec);
        ExceptionList = local_c;
        return 0;
      }
      this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,iVar1,2);
      param_1 = (void *)0xe;
    }
    else {
      iVar1 = FUN_0043de80(local_ec,(int)param_1);
      if (iVar1 < 0) {
        local_d0 = *(undefined4 *)((int)this + 0x1c);
        local_8c = local_d0;
        FUN_0043e680(local_ec,&local_f4,param_1);
        local_54 = local_f0;
        local_58 = local_f4;
        puVar4 = local_a0;
        puVar6 = local_50;
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_0043c4e0(&DAT_005aa12c,&local_58);
        iVar1 = FUN_004a51c0(&DAT_005ae958,local_58,local_54);
        iVar1 = FUN_004a8300(&DAT_005ae958,iVar1,2);
        this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,iVar1,2);
      }
      else {
        this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,iVar1,2);
      }
    }
    uVar2 = FUN_0043eff0(this_00,param_1,param_2,param_3,-1,0);
    local_4 = 0xffffffff;
    FUN_0043ba50(local_ec);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = &local_c;
  if (-1 < param_3) {
    if ((param_3 < 0) || (0xf < param_3)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = &DAT_005af194 + param_3 * 0x1d84;
    }
    ExceptionList = &local_c;
    iVar1 = FUN_0044ede0(this,&local_f8,(int)param_1,param_2,param_3);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    *(int *)((int)this + 0xe0) = *(int *)((int)this + 0xe0) - (*(int *)(local_f8 + 0xc) >> 8);
    *(int *)(puVar5 + 0xcfc) = *(int *)(puVar5 + 0xcfc) - *(int *)(local_f8 + 0x10);
    *(uint *)(puVar5 + 0x15d8) = *(uint *)(puVar5 + 0x15d8) | 0x40;
    *(int *)(puVar5 + 0xd04) = *(int *)(puVar5 + 0xd04) - *(int *)(local_f8 + 0x14);
    *(uint *)(puVar5 + 0x15d8) = *(uint *)(puVar5 + 0x15d8) | 0x40;
    *(int *)(puVar5 + 0xd08) = *(int *)(puVar5 + 0xd08) - *(int *)(local_f8 + 0x18);
    *(uint *)(puVar5 + 0x15d8) = *(uint *)(puVar5 + 0x15d8) | 0x40;
  }
  *(int *)((int)this + (int)param_1 * 0x44 + 0xd4) = param_2;
  if (param_1 == (void *)0x0) {
    piVar3 = (int *)((int)this + 0xd4);
    iVar1 = 9;
    do {
      *piVar3 = param_2;
      piVar3 = piVar3 + 0x11;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    (/*IC:0044f143*/**(code **)(*(int *)this + 0x2c))(this);
  }
  FUN_004869d0(&DAT_005aa12c,param_3);
  ExceptionList = local_c;
  return 1;
}


