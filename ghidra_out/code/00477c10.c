
void __thiscall FUN_00477c10(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 * 0x10 + *(int *)((int)this + 0x10));
  *(int *)((int)this + 8) =
       *(int *)((int)this + 8) - ((piVar1[3] - piVar1[1]) + 1) * ((piVar1[2] - *piVar1) + 1);
  iVar3 = *(int *)this + -1;
  *(int *)this = iVar3;
  if (param_1 < iVar3) {
    piVar2 = (int *)(iVar3 * 0x10 + *(int *)((int)this + 0x10));
    *piVar1 = *piVar2;
    piVar1[1] = piVar2[1];
    piVar1[2] = piVar2[2];
    piVar1[3] = piVar2[3];
  }
  return;
}


