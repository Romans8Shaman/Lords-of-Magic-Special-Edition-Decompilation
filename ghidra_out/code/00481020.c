
void __thiscall FUN_00481020(void *this,int *param_1)

{
  int *this_00;
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *this_01;
  
  bVar2 = false;
  if (*(int *)((int)this + 100) != 0) {
    this_00 = *(int **)(*(int *)((int)this + 100) + param_1[7] * 8);
    while (this_00 != (int *)0x0) {
      if (bVar2) goto LAB_00481183;
      bVar1 = false;
      this_01 = (int *)0x0;
      switch(this_00[1]) {
      case 0:
        this_01 = this_00;
        if (this_00 == param_1) {
          this_01 = (int *)0x0;
        }
        break;
      case 1:
        iVar5 = (/*IC:00481083*/**(code **)(*this_00 + 0x3c))(this_00);
        iVar3 = (/*IC:00481091*/**(code **)(*param_1 + 0x3c))(param_1);
        if (((iVar5 == iVar3) && (-1 < this_00[0x15])) &&
           (iVar5 = FUN_0050c7f0((int)this_00), iVar5 != 0)) {
          bVar1 = true;
          this_01 = (int *)this_00[0x16];
        }
        else {
          bVar2 = true;
        }
        break;
      case 2:
        bVar1 = true;
        this_01 = (int *)this_00[0x12];
        break;
      case 3:
        bVar1 = true;
        this_01 = (int *)this_00[0x11];
      }
      if (!bVar2) {
        if (this_01 == (int *)0x0) {
          if (bVar1) {
LAB_00481215:
            FUN_004225a0(param_1,this_00,1);
            return;
          }
        }
        else {
          if (((this_01[0x12] == param_1[0x12]) &&
              (iVar5 = FUN_00415610(param_1,(int)this_01), iVar5 != 0)) &&
             ((param_1[0x14e] < 0 && (this_01[0x14e] < 0)))) {
            if (this_00[1] == 0) {
              FUN_00415fd0(this_01,param_1);
              return;
            }
            goto LAB_00481215;
          }
          if (((this_00[1] == 0) && (-1 < this_01[0x14e])) &&
             ((param_1[0x14e] < 0 && (param_1[10] < this_01[10])))) {
            return;
          }
          bVar2 = true;
        }
        this_00 = (int *)this_00[0xf];
      }
    }
  }
  if (!bVar2) {
    uVar4 = FUN_004a4c50(&DAT_005ae958,param_1[7]);
    if (((param_1[0x15] & uVar4) == 0) && (param_1[0x15] != 0)) {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
  }
LAB_00481183:
  iVar5 = param_1[0x11];
  if (-1 < param_1[0x14e]) {
    iVar5 = FUN_00427880(&DAT_005aeefc,param_1 + 0x14e,1);
  }
  iVar5 = FUN_004a4c70(&DAT_005ae958,param_1[7],iVar5,param_1[0x15]);
  if (iVar5 == param_1[7]) {
    FUN_004176d0(param_1,0);
    iVar5 = FUN_004a6f60(&DAT_005ae958,param_1[7],param_1[0x15]);
  }
  if (iVar5 != param_1[7]) {
    FUN_004a6dd0(&DAT_005ae958,param_1,param_1[7],iVar5);
    (/*IC:004811ef*/**(code **)(*param_1 + 0x1c))(param_1);
  }
  return;
}


