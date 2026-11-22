
int __thiscall
FUN_00518a50(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = *(int *)((int)this + 0x202ac);
  psVar1 = (short *)(*(int *)(iVar2 + param_2 * 4) + param_1 * 8);
  if ((((psVar1[5] <= param_6) &&
       (iVar4 = *(int *)(iVar2 + 4 + param_2 * 4), param_4 <= *(short *)(iVar4 + 2 + param_1 * 8)))
      && (param_3 <= *(short *)(iVar4 + 8 + param_1 * 8))) && (*psVar1 <= param_5)) {
    return 8;
  }
  iVar4 = 0;
  piVar5 = (int *)((int)this + 0x22c);
  while (((param_6 < (int)psVar1[5] + piVar5[9] ||
          (iVar3 = *(int *)(iVar2 + 4 + param_2 * 4),
          (int)*(short *)(iVar3 + 2 + param_1 * 8) + piVar5[9] < param_4)) ||
         (((int)*(short *)(iVar3 + 8 + param_1 * 8) + *piVar5 < param_3 ||
          (param_5 < *piVar5 + (int)*psVar1))))) {
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
    if (7 < iVar4) {
      return -1;
    }
  }
  return iVar4;
}


