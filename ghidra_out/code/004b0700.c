
bool __thiscall FUN_004b0700(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_10 [4];
  
  bVar6 = *(void **)this != (void *)0x0;
  if (bVar6) {
    piVar3 = (int *)FUN_0049cc10(*(void **)this,local_10,param_2,param_3);
    *param_1 = *piVar3;
    param_1[1] = piVar3[1];
    param_1[2] = piVar3[2];
    param_1[3] = piVar3[3];
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
    piVar3 = (int *)FUN_0049cc10(*(void **)((int)this + 4),local_10,param_2,param_3);
    iVar5 = piVar3[1];
    iVar1 = piVar3[2];
    iVar2 = piVar3[3];
    if (bVar6) {
      iVar4 = *piVar3;
      if (*param_1 < *piVar3) {
        iVar4 = *param_1;
      }
      *param_1 = iVar4;
      if (param_1[1] < iVar5) {
        iVar5 = param_1[1];
      }
      param_1[1] = iVar5;
      iVar5 = param_1[2];
      if (param_1[2] < iVar1) {
        iVar5 = iVar1;
      }
      param_1[2] = iVar5;
      iVar5 = param_1[3];
      if (param_1[3] < iVar2) {
        iVar5 = iVar2;
      }
      param_1[3] = iVar5;
    }
    else {
      *param_1 = *piVar3;
      param_1[1] = piVar3[1];
      param_1[2] = piVar3[2];
      param_1[3] = piVar3[3];
    }
    bVar6 = true;
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
    piVar3 = (int *)FUN_0049cc10(*(void **)((int)this + 8),local_10,param_2,param_3);
    iVar5 = piVar3[1];
    iVar1 = piVar3[2];
    iVar2 = piVar3[3];
    if (bVar6) {
      iVar4 = *piVar3;
      if (*param_1 < *piVar3) {
        iVar4 = *param_1;
      }
      *param_1 = iVar4;
      iVar4 = param_1[1];
      if (iVar5 <= param_1[1]) {
        iVar4 = iVar5;
      }
      param_1[1] = iVar4;
      iVar5 = param_1[2];
      if (param_1[2] < iVar1) {
        iVar5 = iVar1;
      }
      param_1[2] = iVar5;
      iVar5 = param_1[3];
      if (param_1[3] < iVar2) {
        iVar5 = iVar2;
      }
      param_1[3] = iVar5;
      return true;
    }
    bVar6 = true;
    *param_1 = *piVar3;
    param_1[1] = piVar3[1];
    param_1[2] = piVar3[2];
    param_1[3] = piVar3[3];
  }
  return bVar6;
}


