
undefined4 __thiscall FUN_004b3320(void *this,LPCSTR param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  char local_3e [2];
  char local_3c [4];
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  char local_28 [4];
  undefined2 local_24;
  undefined2 uStack_22;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 *local_4;
  
  if (DAT_005867bc == (int *)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 4) != 0) {
    return 0;
  }
  piVar2 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
  *(int **)((int)this + 4) = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  FUN_0053a140(piVar2,0xc,1);
  piVar2 = *(int **)((int)this + 4);
  bVar1 = *(byte *)(piVar2 + 3);
  do {
    if ((bVar1 & 0x10) != 0) {
LAB_004b34a2:
      _local_24 = CONCAT22((short)local_34,1);
      uVar5 = (int)((local_2c & 0xffff) * (local_34 & 0xffff)) >> 3;
      local_18 = CONCAT22((short)local_2c,(short)uVar5);
      local_20 = local_30;
      local_1c = local_30 * (uVar5 & 0xffff);
      local_c = *(undefined4 *)((int)this + 0x14);
      local_4 = &local_24;
      local_14 = 0x14;
      local_10 = 0xe0;
      local_8 = 0;
      iVar3 = (/*IC:004b3544*/**(code **)(*DAT_005867bc + 0xc))(DAT_005867bc,&local_14,this,0);
      if (iVar3 == 0) {
        *(undefined4 *)((int)this + 8) = 0;
        return 1;
      }
      if (*(int **)((int)this + 4) != (int *)0x0) {
        FUN_005394d0(*(int **)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
      }
      return 0;
    }
    FUN_005397f0(local_3c,4,1,piVar2);
    FUN_005397f0((char *)&local_38,4,1,*(int **)((int)this + 4));
    iVar3 = _strncmp(local_3c,&DAT_0055aef8,3);
    if (iVar3 == 0) {
      FUN_005397f0((char *)&param_1,2,1,*(int **)((int)this + 4));
      FUN_005397f0((char *)&local_34,2,1,*(int **)((int)this + 4));
      FUN_005397f0((char *)&local_30,4,1,*(int **)((int)this + 4));
      FUN_005397f0(local_28,4,1,*(int **)((int)this + 4));
      FUN_005397f0(local_3e,2,1,*(int **)((int)this + 4));
      FUN_005397f0((char *)&local_2c,2,1,*(int **)((int)this + 4));
      iVar3 = local_38 + -0x10;
    }
    else {
      iVar3 = _strncmp(local_3c,&DAT_0055aef0,4);
      if (iVar3 == 0) {
        uVar5 = FUN_00548ec0(*(int *)((int)this + 4));
        DVar4 = FUN_00548e10(uVar5);
        *(DWORD *)((int)this + 0x10) = DVar4;
        goto LAB_004b34a2;
      }
      iVar3 = local_38;
    }
    FUN_0053a140(*(int **)((int)this + 4),iVar3,1);
    piVar2 = *(int **)((int)this + 4);
    bVar1 = *(byte *)(piVar2 + 3);
  } while( true );
}


