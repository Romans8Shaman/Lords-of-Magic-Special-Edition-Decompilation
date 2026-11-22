
void __thiscall FUN_004e9db0(void *this,void *param_1,int param_2,int param_3)

{
  void *this_00;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  this_00 = param_1;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(int *)((int)this + 0x218) = param_2 + DAT_005a7ac8;
  *(int *)((int)this + 0x21c) = param_3 + DAT_005a7acc;
  piVar1 = (int *)FUN_00492760(&DAT_005a7b50,*(int *)this);
  piVar2 = (int *)FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 4));
  piVar3 = (int *)FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 8));
  if (piVar1 != (int *)0x0) {
    FUN_00496340(param_1,piVar1,param_2,param_3,0);
  }
  param_1 = (void *)0x0;
  piVar1 = this;
  if (0 < *(int *)((int)this + 0x20c)) {
    do {
      piVar8 = piVar1 + 4;
      piVar4 = (int *)FUN_00492760(&DAT_005a7b50,piVar1[5]);
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar2;
        if ((piVar2 == (int *)0x0) && (piVar5 = piVar3, piVar3 == (int *)0x0)) {
          iVar6 = 0;
          iVar7 = 0;
        }
        else {
          iVar7 = piVar5[3] - piVar4[3] >> 1;
          iVar6 = piVar5[4] - piVar4[4] >> 1;
        }
        FUN_00496340(this_00,piVar4,piVar1[3] + iVar7 + param_2,iVar6 + param_3 + *piVar8,0);
      }
      piVar4 = piVar3;
      if (piVar1[6] != 0) {
        piVar4 = piVar2;
      }
      if (piVar4 != (int *)0x0) {
        FUN_00496340(this_00,piVar4,piVar1[3] + param_2,param_3 + *piVar8,0);
      }
      param_1 = (void *)((int)param_1 + 1);
      piVar1 = piVar8;
    } while ((int)param_1 < *(int *)((int)this + 0x20c));
  }
  return;
}


