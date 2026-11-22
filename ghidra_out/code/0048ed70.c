
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0048ed70(void *this,undefined4 param_1)

{
  int *piVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  int local_10 [4];
  
  DAT_005aa128 = 1;
  DAT_00583610 = 0;
  DAT_00583614 = 0;
  piVar1 = (int *)FUN_0048ec90(this,local_10);
  FUN_00476010(&DAT_005a7aa4,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  DAT_005a7a38 = 0;
  _DAT_005a7a40 = 0;
  _DAT_005a7a44 = 0;
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x50)) {
    iVar3 = 0;
    do {
      this_00 = (void *)FUN_005005f0(&DAT_00584ae8,
                                     *(uint *)(*(int *)((int)this + 0x4c) + 0xc + iVar3));
      if (this_00 != (void *)0x0) {
        FUN_0048ed70(this_00,param_1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar2 < *(int *)((int)this + 0x50));
  }
  if (DAT_005a7b78 != (void *)0x0) {
    FUN_004d09a0(DAT_005a7b78,*(uint *)((int)this + 0x14),*(int **)((int)this + 0x18),0);
  }
  return 1;
}


