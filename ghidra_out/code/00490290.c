
undefined4 __thiscall FUN_00490290(void *this,int param_1,int param_2)

{
  int *piVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  
  if (param_1 < 0) {
    param_1 = (0x280 - *(int *)((int)this + 0x44)) / 2;
  }
  if (param_2 < 0) {
    param_2 = (0x1e0 - *(int *)((int)this + 0x48)) / 2;
  }
  *(int *)((int)this + 0x3c) = param_1;
  *(int *)((int)this + 0x40) = param_2;
  if (*(void **)((int)this + 0x78) != (void *)0x0) {
    piVar1 = (int *)FUN_0048d810(*(void **)((int)this + 0x78),*(int *)((int)this + 0x7c));
    if (piVar1 != (int *)0x0) {
      iVar3 = piVar1[1];
      FUN_0048ea90(this,*(int *)(*(int *)((int)this + 0x78) + 0x3c) + *piVar1);
      FUN_0048eb00(this,*(int *)(*(int *)((int)this + 0x78) + 0x40) + iVar3);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x50)) {
    iVar2 = 0;
    do {
      this_00 = (void *)FUN_005005f0(&DAT_00584ae8,
                                     *(uint *)(*(int *)((int)this + 0x4c) + 0xc + iVar2));
      if (this_00 != (void *)0x0) {
        FUN_0048ea90(this_00,*(int *)(*(int *)((int)this + 0x4c) + iVar2) +
                             *(int *)((int)this + 0x3c));
        FUN_0048eb00(this_00,*(int *)(*(int *)((int)this + 0x4c) + 4 + iVar2) +
                             *(int *)((int)this + 0x40));
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar3 < *(int *)((int)this + 0x50));
  }
  return 1;
}


