
void __thiscall FUN_0048f020(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)((int)this + 0x3c);
  iVar2 = *(int *)((int)this + 0x40);
  *(int *)((int)this + 0x3c) = iVar1 - DAT_005a7ac8;
  *(int *)((int)this + 0x40) = iVar2 - DAT_005a7acc;
  piVar3 = (int *)FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 8));
  if (piVar3 == (int *)0x0) goto LAB_0048f1b8;
  if ((*(uint *)((int)this + 4) & 8) == 0) {
    iVar6 = *(int *)((int)this + 0x40);
    if ((*(uint *)((int)this + 4) & 2) == 0) {
      FUN_00495db0(param_1,piVar3,*(int *)((int)this + 0x3c),iVar6);
      if (DAT_005aa128 != 0) {
        piVar3 = (int *)FUN_0048ec90(this,&local_10);
        FUN_00476010(&DAT_005a7a38,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
      }
      goto LAB_0048f1b8;
    }
    uVar5 = *(uint *)((int)this + 0x3c);
    if (*piVar3 == 0) goto LAB_0048f1b8;
    iVar4 = (-(uint)((*(uint *)(*piVar3 + 0x14) & 0x10) != 0) & 2) - 1;
    if (-1 < iVar4) {
      FUN_00496880(param_1,piVar3,uVar5,iVar6,0,(byte)iVar4);
      goto LAB_0048f1b8;
    }
  }
  else {
    FUN_0048ec90(this,&local_10);
    FUN_00476010(&DAT_005a7aa4,local_10,local_c,local_8,local_4);
    FUN_00476010(&DAT_005a7a14,local_10,local_c,local_8,local_4);
    FUN_00500650(&DAT_00584ae8,local_10,local_c,local_8,local_4);
    iVar6 = *(int *)((int)this + 0x40);
    uVar5 = *(uint *)((int)this + 0x3c);
    if (*piVar3 == 0) goto LAB_0048f1b8;
    iVar4 = (-(uint)((*(uint *)(*piVar3 + 0x14) & 0x10) != 0) & 2) - 1;
    if (-1 < iVar4) {
      FUN_00496880(param_1,piVar3,uVar5,iVar6,0,(byte)iVar4);
      goto LAB_0048f1b8;
    }
  }
  FUN_00496340(param_1,piVar3,uVar5,iVar6,0);
LAB_0048f1b8:
  iVar6 = 0;
  if (0 < *(int *)((int)this + 0x50)) {
    iVar4 = 0;
    do {
      FUN_0048ee50((void *)(iVar4 + *(int *)((int)this + 0x4c)),param_1,0);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x2c;
    } while (iVar6 < *(int *)((int)this + 0x50));
  }
  *(int *)((int)this + 0x40) = iVar2;
  *(int *)((int)this + 0x3c) = iVar1;
  piVar3 = (int *)FUN_0048ec90(this,&local_10);
  FUN_00476010(&DAT_005a7aa4,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
  return;
}


