
void __thiscall FUN_0048eb00(void *this,undefined4 param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)((int)this + 0x40) = param_1;
  if (0 < *(int *)((int)this + 0x50)) {
    iVar1 = 0;
    do {
      this_00 = (void *)FUN_005005f0(&DAT_00584ae8,
                                     *(uint *)(*(int *)((int)this + 0x4c) + 0xc + iVar1));
      if (this_00 != (void *)0x0) {
        FUN_0048ea90(this_00,*(int *)(*(int *)((int)this + 0x4c) + iVar1) +
                             *(int *)((int)this + 0x3c));
        FUN_0048eb00(this_00,*(int *)(*(int *)((int)this + 0x4c) + 4 + iVar1) +
                             *(int *)((int)this + 0x40));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < *(int *)((int)this + 0x50));
  }
  return;
}


