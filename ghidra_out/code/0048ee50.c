
void __thiscall FUN_0048ee50(void *this,int *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40 [4];
  int local_30;
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a8d0;
  local_c = ExceptionList;
  DAT_00583648 = DAT_00583648 + 0x20;
  uVar5 = *(int *)(*(int *)((int)this + 0x28) + 0x3c) + *(int *)this;
  iVar4 = *(int *)(*(int *)((int)this + 0x28) + 0x40) + *(int *)((int)this + 4);
  ExceptionList = &local_c;
  FUN_00494610(local_2c);
  local_4 = 0;
  pvVar1 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)FUN_005005f0(&DAT_00584ae8,*(uint *)((int)this + 0xc));
    if (pvVar1 != (void *)0x0) {
      FUN_0048f020(pvVar1,param_1);
    }
  }
  else {
    iVar2 = FUN_00491910(pvVar1,&local_50,uVar5,iVar4);
    if (iVar2 != 0) {
      if ((param_2 != 0) && ((*(byte *)(*(int *)((int)this + 0x28) + 4) & 8) == 0)) {
        piVar3 = (int *)FUN_0048ee40(*(int *)((int)this + 0x28));
        if (piVar3 != (int *)0x0) {
          DAT_0058364c = DAT_0058364c + 0x14;
          piVar6 = local_40;
          for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = *piVar3;
            piVar3 = piVar3 + 1;
            piVar6 = piVar6 + 1;
          }
          local_40[1] = local_40[1] + *(int *)this;
          local_40[2] = local_40[2] + *(int *)((int)this + 4);
          local_4._0_1_ = 1;
          local_40[3] = FUN_004918d0(pvVar1);
          local_30 = FUN_004918f0(pvVar1);
          FUN_00495db0(param_1,local_40,uVar5,iVar4);
          DAT_0058364c = DAT_0058364c + -0x14;
          local_4 = (uint)local_4._1_3_ << 8;
        }
      }
      FUN_004935c0(pvVar1,param_1,uVar5,iVar4,-1,1);
      FUN_00500650(&DAT_00584ae8,local_50,local_4c,local_48,local_44);
    }
  }
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4 = 0xffffffff;
  FUN_00495590(local_2c);
  ExceptionList = local_c;
  return;
}


