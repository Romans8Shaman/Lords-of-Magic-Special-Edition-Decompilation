
undefined4 __thiscall FUN_00409ca0(void *this,void *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  
  pvVar1 = param_1;
  iVar2 = FUN_004205e0((int)param_1);
  if (iVar2 != 0) {
    return 0;
  }
  iVar3 = FUN_00401020(param_1,DAT_00555148);
  iVar2 = *(int *)((int)param_1 + 0x1c);
  *(int *)((int)this + 8) = iVar2;
  pvVar4 = (void *)FUN_00401760(param_1,iVar2,iVar3);
  if ((pvVar4 != (void *)0x0) &&
     (((iVar2 = FUN_00420620((int)pvVar4), iVar2 == 0 || (iVar2 = FUN_00458170(), iVar2 == 0)) &&
      (iVar2 = FUN_005071c0(pvVar4,*(int *)((int)param_1 + 0x48)), iVar2 != 0)))) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)pvVar4 + 0x28);
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)pvVar4 + 0x28);
    return 1;
  }
  iVar3 = DAT_005ae98c;
  iVar2 = -1;
  iVar6 = 9999;
  param_1 = (void *)0x0;
  if (-1 < DAT_005ae98c) {
    do {
      pvVar4 = (void *)FUN_004f6000(&DAT_005ae974,(int)param_1);
      if (((((pvVar4 != (void *)0x0) && (*(int *)((int)pvVar4 + 4) == 0)) &&
           ((*(int *)((int)pvVar4 + 0x48) == *(int *)(param_2 + 0x48) &&
            ((*(char *)((int)pvVar4 + 0x5ac) == *(char *)(param_2 + 0x5ac) &&
             (iVar5 = FUN_00407d50((int)pvVar4), iVar5 == 0)))))) &&
          (iVar5 = FUN_00420620((int)pvVar4), iVar5 == 0)) &&
         (iVar5 = FUN_005071c0(pvVar4,*(int *)((int)pvVar1 + 0x48)), iVar5 != 0)) {
        if (iVar2 == -1) {
          iVar2 = *(int *)((int)pvVar4 + 0x28);
          iVar5 = FUN_004a8a50(&DAT_005ae958,*(int *)((int)pvVar1 + 0x1c),
                               *(int *)((int)pvVar4 + 0x1c));
        }
        else {
          iVar5 = FUN_004a8a50(&DAT_005ae958,*(int *)((int)pvVar1 + 0x1c),
                               *(int *)((int)pvVar4 + 0x1c));
          if (iVar6 <= iVar5) goto LAB_00409dd8;
          iVar2 = *(int *)((int)pvVar4 + 0x28);
        }
        iVar6 = iVar5;
      }
LAB_00409dd8:
      param_1 = (void *)((int)param_1 + 1);
    } while ((int)param_1 <= iVar3);
  }
  if (iVar2 == -1) {
    return 0;
  }
  *(int *)((int)this + 4) = iVar2;
  *(int *)((int)this + 0xc) = iVar2;
  return 1;
}


