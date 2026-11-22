
int FUN_004057d0(int param_1,void *param_2,int param_3)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int local_c;
  
  iVar1 = DAT_005ae98c;
  pvVar6 = (void *)0x0;
  iVar5 = DAT_005ae998;
  do {
    if (iVar1 < iVar5) {
      if (pvVar6 == (void *)0x0) {
        return param_3;
      }
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)pvVar6 + 0x28);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)pvVar6 + 0x1c);
      return (int)pvVar6;
    }
    this = (void *)FUN_004f6000(&DAT_005ae974,iVar5);
    if ((((this != (void *)0x0) && (*(int *)((int)this + 4) == 0)) &&
        (*(int *)((int)this + 0x48) == *(int *)(param_3 + 0x48))) &&
       ((((*(byte *)((int)this + 0x78) & 0x10) == 0 && (iVar2 = FUN_00407d50((int)this), iVar2 == 0)
         ) && (iVar2 = FUN_00506110(param_2,(int)this), iVar2 != 0)))) {
      if (pvVar6 == (void *)0x0) {
        local_c = FUN_00421960(this);
        pvVar6 = this;
      }
      else {
        iVar2 = FUN_00421960(this);
        if (local_c < iVar2) {
LAB_00405895:
          pvVar6 = this;
          local_c = iVar2;
        }
        else if (iVar2 == local_c) {
          iVar3 = FUN_004a8a50(&DAT_005ae958,*(int *)((int)this + 0x1c),
                               *(int *)((int)param_2 + 0x1c));
          iVar4 = FUN_004a8a50(&DAT_005ae958,*(int *)((int)pvVar6 + 0x1c),
                               *(int *)((int)param_2 + 0x1c));
          if (iVar3 < iVar4) goto LAB_00405895;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


