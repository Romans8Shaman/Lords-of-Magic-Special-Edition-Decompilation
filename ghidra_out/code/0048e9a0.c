
undefined4 __thiscall FUN_0048e9a0(void *this,undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  *(undefined4 *)this = param_1;
  DAT_00583610 = 0;
  if (DAT_005a7b78 != (void *)0x0) {
    FUN_004d09a0(DAT_005a7b78,*(uint *)((int)this + 0xc),*(int **)((int)this + 0x10),0);
  }
  if (0 < *(int *)((int)this + 0x50)) {
    do {
      iVar3 = iVar2 * 0x2c;
      pvVar1 = (void *)FUN_00493360(&DAT_005a7b50,*(int *)(*(int *)((int)this + 0x4c) + 0xc + iVar3)
                                   );
      if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x10) != 0)) {
        if ((iVar2 == 0) && (DAT_00583610 == 0)) {
          DAT_00583610 = *(int *)((int)this + 0x4c);
          iVar4 = 1;
        }
        else {
          iVar4 = 0;
        }
        FUN_00497ac0(pvVar1,iVar4);
      }
      pvVar1 = (void *)FUN_005005f0(&DAT_00584ae8,
                                    *(uint *)(*(int *)((int)this + 0x4c) + 0xc + iVar3));
      if (pvVar1 != (void *)0x0) {
        FUN_0048ea90(pvVar1,*(int *)(*(int *)((int)this + 0x4c) + iVar3) +
                            *(int *)((int)this + 0x3c));
        FUN_0048eb00(pvVar1,*(int *)(*(int *)((int)this + 0x4c) + 4 + iVar3) +
                            *(int *)((int)this + 0x40));
        FUN_0048e8a0(pvVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x50));
  }
  DAT_005aa128 = 1;
  return 1;
}


