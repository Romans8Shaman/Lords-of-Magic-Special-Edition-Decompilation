
void __fastcall FUN_00472b10(int param_1)

{
  int *piVar1;
  void *this;
  int iVar2;
  int local_10 [4];
  
  *(undefined4 *)(param_1 + 0x188) = 0;
  this = (void *)(param_1 + 0x19c);
  iVar2 = 4;
  do {
    piVar1 = (int *)FUN_00471540(this,local_10);
    FUN_00476010((void *)(param_1 + 0xc),*piVar1,piVar1[1],piVar1[2],piVar1[3]);
    this = (void *)((int)this + 0x38);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (DAT_00584ca0 == 6) {
    FUN_00503040(&DAT_00584ae8,0);
  }
  return;
}


