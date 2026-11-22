
int __thiscall FUN_0052c010(void *this,int *param_1)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  DVar1 = GetTickCount();
  iVar2 = 1;
  if (((((DVar1 - *(int *)((int)this + 0x3fc) < 0x1389) && (*(int *)((int)this + 0x310) == *param_1)
        ) && (*(int *)((int)this + 0x318) == param_1[2])) &&
      ((*(int *)((int)this + 0x324) == param_1[5] && (*(int *)((int)this + 0x330) == param_1[8]))))
     && ((*(int *)((int)this + 0x314) == param_1[1] && (*(int *)((int)this + 0x32c) == param_1[7])))
     ) {
    if ((*(uint *)((int)this + 0x328) == param_1[6]) ||
       ((*(uint *)((int)this + 0x328) | 8) == param_1[6])) goto LAB_0052c09c;
  }
  iVar2 = 0;
LAB_0052c09c:
  if (iVar2 == 0) {
    piVar4 = (int *)((int)this + 0x310);
    for (iVar3 = 0x3b; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *param_1;
      param_1 = param_1 + 1;
      piVar4 = piVar4 + 1;
    }
    *(DWORD *)((int)this + 0x3fc) = DVar1;
  }
  return iVar2;
}


