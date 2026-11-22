
undefined4 __fastcall FUN_0048e8a0(void *param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int local_10 [4];
  
  FUN_004d09a0(DAT_005a7b78,*(uint *)((int)param_1 + 0xc),*(int **)((int)param_1 + 0x10),0);
  iVar3 = 0;
  if (0 < *(int *)((int)param_1 + 0x50)) {
    iVar4 = 0;
    do {
      pvVar1 = (void *)FUN_00493360(&DAT_005a7b50,
                                    *(int *)(*(int *)((int)param_1 + 0x4c) + 0xc + iVar4));
      if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x10) != 0)) {
        bVar5 = DAT_00583610 == 0;
        if (bVar5) {
          DAT_00583610 = *(int *)((int)param_1 + 0x4c) + iVar4;
        }
        FUN_00497ac0(pvVar1,(uint)bVar5);
      }
      pvVar1 = (void *)FUN_005005f0(&DAT_00584ae8,
                                    *(uint *)(*(int *)((int)param_1 + 0x4c) + 0xc + iVar4));
      if (pvVar1 != (void *)0x0) {
        FUN_0048ea90(pvVar1,*(int *)(*(int *)((int)param_1 + 0x4c) + iVar4) +
                            *(int *)((int)param_1 + 0x3c));
        FUN_0048eb00(pvVar1,*(int *)(*(int *)((int)param_1 + 0x4c) + 4 + iVar4) +
                            *(int *)((int)param_1 + 0x40));
        FUN_0048e8a0(pvVar1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x2c;
    } while (iVar3 < *(int *)((int)param_1 + 0x50));
  }
  piVar2 = (int *)FUN_0048ec90(param_1,local_10);
  FUN_00476010(&DAT_005a7aa4,*piVar2,piVar2[1],piVar2[2],piVar2[3]);
  return 1;
}


