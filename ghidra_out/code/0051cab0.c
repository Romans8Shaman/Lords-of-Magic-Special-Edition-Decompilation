
void __thiscall
FUN_0051cab0(void *this,void *param_1,uint param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  piVar3 = param_5;
  piVar2 = param_4;
  piVar1 = param_3;
  iVar5 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  do {
    uVar4 = FUN_0051c9b0(this,iVar5);
    if ((param_2 & uVar4) != 0) {
      FUN_004c71c0(param_1,iVar5,(int *)&param_3,(int *)&param_4,(int *)&param_5);
      *piVar1 = *piVar1 + (int)param_3;
      *piVar2 = *piVar2 + (int)param_4;
      *piVar3 = *piVar3 + (int)param_5;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  return;
}


