
void __thiscall FUN_00500710(void *this,uint param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int local_10 [4];
  
  iVar1 = FUN_00505750(this,param_1);
  if (iVar1 != 0) {
    pvVar2 = (void *)FUN_005005f0(this,param_1);
    pvVar2 = (void *)FUN_0048d810(pvVar2,param_2);
    if (pvVar2 != (void *)0x0) {
      piVar3 = (int *)FUN_0048eb70(pvVar2,local_10);
      FUN_00476010((void *)((int)this + 0x22fbc),*piVar3,piVar3[1],piVar3[2],piVar3[3]);
    }
  }
  return;
}


