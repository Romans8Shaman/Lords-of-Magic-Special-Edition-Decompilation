
uint __fastcall FUN_0041fd40(uint param_1)

{
  uint uVar1;
  void *this;
  int iVar2;
  uint local_4;
  
  iVar2 = 0;
  uVar1 = 999;
  if (0 < *(int *)(param_1 + 0x4c)) {
    this = (void *)(param_1 + 0xc4);
    local_4 = param_1;
    do {
      FUN_00527e90(this,0x2e,(int *)&local_4);
      if ((int)local_4 <= (int)uVar1) {
        uVar1 = local_4;
      }
      iVar2 = iVar2 + 1;
      this = (void *)((int)this + 0x4c);
    } while (iVar2 < *(int *)(param_1 + 0x4c));
  }
  return -(uint)(uVar1 != 999) & uVar1;
}


