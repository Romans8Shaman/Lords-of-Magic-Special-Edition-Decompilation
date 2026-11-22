
void __thiscall FUN_00500780(void *this,uint param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  int local_10 [4];
  
  iVar1 = FUN_00505750(this,param_1);
  if (iVar1 != 0) {
    this_00 = (void *)FUN_005005f0(this,param_1);
    piVar2 = (int *)FUN_0048ec90(this_00,local_10);
    FUN_00476010((void *)((int)this + 0x22fbc),*piVar2,piVar2[1],piVar2[2],piVar2[3]);
  }
  return;
}


