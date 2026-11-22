
void __thiscall FUN_00455540(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  uint local_8;
  void *local_4;
  
  local_c = -1;
  local_4 = this;
  iVar3 = FUN_004f6000(&DAT_005ae974,param_2);
  iVar5 = -1;
  if (iVar3 != 0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(DAT_005ae970 + (iVar5 + *(int *)(iVar3 + 0x1c) * 8) * 4);
      FUN_004a9a60(&DAT_005ae958,&local_8,iVar1);
      if (((local_8 & 0x200000) != 0) && (iVar4 = FUN_004a8300(&DAT_005ae958,iVar1,0), iVar4 == -1))
      {
        local_c = iVar1;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    iVar5 = local_c;
  }
  pvVar2 = local_4;
  if (iVar5 != -1) {
    *param_1 = iVar5 % DAT_005ae9c4;
    param_1[1] = iVar5 / DAT_005ae9c4;
    return;
  }
  iVar5 = param_1[1];
  iVar3 = *(int *)((int)local_4 + 0x5c) + iVar5;
  param_1[1] = iVar3;
  iVar3 = FUN_004a6e60(&DAT_005ae958,*param_1,iVar3);
  if (iVar3 != param_2) {
    iVar3 = *(int *)((int)pvVar2 + 0x60) + iVar5;
    param_1[1] = iVar3;
    iVar3 = FUN_004a6e60(&DAT_005ae958,*param_1,iVar3);
    if (iVar3 != param_2) {
      param_1[1] = iVar5;
    }
  }
  return;
}


