
int __thiscall
FUN_005187b0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = param_2;
  iVar2 = *(int *)((int)this + 0x202ac);
  iVar3 = *(int *)(iVar2 + param_2 * 4);
  iVar5 = (int)*(short *)(iVar3 + 2 + param_1 * 8);
  if ((((iVar5 <= param_6) &&
       (psVar1 = (short *)(*(int *)(iVar2 + 4 + param_2 * 4) + param_1 * 8), param_4 <= psVar1[5]))
      && (param_3 <= *(short *)(iVar3 + 8 + param_1 * 8))) && (*psVar1 <= param_5)) {
    return 8;
  }
  param_2 = 0;
  piVar6 = (int *)((int)this + 0x22c);
  while (((param_6 < piVar6[9] + iVar5 ||
          (psVar1 = (short *)(*(int *)(iVar2 + 4 + iVar4 * 4) + param_1 * 8),
          (int)psVar1[5] + piVar6[9] < param_4)) ||
         (((int)*(short *)(iVar3 + 8 + param_1 * 8) + *piVar6 < param_3 ||
          (param_5 < *piVar6 + (int)*psVar1))))) {
    piVar6 = piVar6 + 1;
    param_2 = param_2 + 1;
    if (7 < param_2) {
      return -1;
    }
  }
  return param_2;
}


