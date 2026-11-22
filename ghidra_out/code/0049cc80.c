
int * __thiscall FUN_0049cc80(void *this,int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  iVar2 = *(int *)((int)this + 0x1c);
  if (((iVar2 == 0) || (*(int **)((int)this + 0x3c) == (int *)0x0)) ||
     (**(int **)((int)this + 0x3c) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  if ((*(byte *)((int)this + 0x28) & 1) == 0) {
    if (*(char *)(iVar2 + 1) == '\0') {
      sVar4 = *(short *)(iVar2 + 8);
    }
    else {
      sVar4 = *(short *)(*(int *)(iVar2 + 8) + 2);
    }
    iVar3 = (int)sVar4 - (uint)(*(ushort *)(iVar2 + 2) >> 1);
    if (*(char *)(iVar2 + 1) != '\0') {
      sVar4 = *(short *)(*(int *)(iVar2 + 8) + 4);
      goto LAB_0049cd16;
    }
  }
  else {
    if (*(char *)(iVar2 + 1) == '\0') {
      sVar4 = *(short *)(iVar2 + 8);
    }
    else {
      sVar4 = *(short *)(*(int *)(iVar2 + 8) + 2);
    }
    iVar3 = -((uint)(*(ushort *)(iVar2 + 2) >> 1) + (int)sVar4);
    if ((*(ushort *)(iVar2 + 2) & 1) == 0) {
      iVar3 = iVar3 + -1;
    }
    if (*(char *)(iVar2 + 1) != '\0') {
      sVar4 = *(short *)(*(int *)(iVar2 + 8) + 4);
      goto LAB_0049cd16;
    }
  }
  sVar4 = *(short *)(iVar2 + 10);
LAB_0049cd16:
  uVar1 = *(ushort *)(iVar2 + 4);
  *param_1 = iVar3;
  param_1[1] = (int)sVar4 - (uint)(uVar1 >> 1);
  return param_1;
}


