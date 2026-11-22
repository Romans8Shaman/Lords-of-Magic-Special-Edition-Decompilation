
int FUN_00406050(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  local_4 = -1;
  this = (void *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if ((this == (void *)0x0) || (iVar2 = FUN_00407d50((int)this), iVar1 = DAT_005ae98c, iVar2 != 0))
  {
    return -1;
  }
  if (DAT_005ae998 <= DAT_005ae98c) {
    iVar2 = DAT_005ae98c;
    iVar5 = DAT_005ae998;
    do {
      iVar3 = FUN_004f6000(&DAT_005ae974,iVar5);
      if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
          (*(int *)(iVar3 + 0x48) != *(int *)((int)this + 0x48))) &&
         ((iVar4 = FUN_00407d50(iVar3), iVar4 == 0 && (iVar4 = FUN_00506110(this,iVar3), iVar4 != 0)
          ))) {
        if (local_4 == -1) {
          iVar3 = FUN_004a8a50(&DAT_005ae958,*(int *)(iVar3 + 0x1c),*(int *)((int)this + 0x1c));
        }
        else {
          iVar3 = FUN_004a8a50(&DAT_005ae958,*(int *)(iVar3 + 0x1c),*(int *)((int)this + 0x1c));
          if (iVar2 <= iVar3) goto LAB_00406116;
        }
        iVar2 = iVar3;
        local_4 = iVar5;
      }
LAB_00406116:
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar1);
  }
  return local_4;
}


