
undefined4 __thiscall FUN_0041e420(void *this,int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  void *local_4;
  
  iVar3 = param_1;
  if ((param_1 < 0) || (*(int *)((int)this + 0x4c) <= param_1)) {
    return 0;
  }
  if ((*(byte *)((int)this + param_1 * 0x4c + 0xe8) & 1) == 0) {
    iVar5 = *(int *)((int)this + 0x48);
    if ((iVar5 < 0) || (0xf < iVar5)) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = &DAT_005af194 + iVar5 * 0x1d84;
    }
    if (puVar1 != (undefined *)0x0) {
      *(int *)(puVar1 + 0xd0c) = *(int *)(puVar1 + 0xd0c) + 0x100;
      *(uint *)(puVar1 + 0x15d8) = *(uint *)(puVar1 + 0x15d8) | 0x40;
    }
  }
  iVar5 = *(int *)((int)this + param_1 * 0x4c + 0xe0);
  local_4 = this;
  do {
    if (iVar5 == 0) {
      iVar5 = -1;
      iVar2 = FUN_004c1c50((int)this);
      if (iVar2 != 0) {
        iVar5 = *(int *)((int)this + 0x5b4);
      }
      iVar3 = FUN_004164e0(this,iVar3,1);
      if ((iVar3 != 0) && (iVar5 != -1)) {
        puVar4 = FUN_00485080(&DAT_005aa12c,iVar5,0x2f);
        FUN_004c2450((int)puVar4);
        *(undefined4 *)((int)this + 0x5b4) = 0xffffffff;
        FUN_00420630((int)puVar4);
        return 1;
      }
      iVar3 = FUN_00420560((int)this);
      if ((((iVar3 != 0) && ((*(byte *)((int)this + 0x30) & 0x20) != 0)) &&
          (*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) &&
         (iVar3 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)),
         *(int *)((int)this + 0x28) == iVar3)) {
        FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
      }
      return 1;
    }
    iVar2 = FUN_0041e310(this,*(undefined4 *)(iVar5 + 0xc),iVar3,&local_4,&param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_0041e380(this,*(undefined4 *)(iVar5 + 0xc),&local_4,&param_1);
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar5 + 0xc);
        iVar6 = *(int *)((int)this + 0x48);
        goto LAB_0041e501;
      }
    }
    else {
      iVar2 = *(int *)(iVar5 + 0xc);
      iVar6 = *(int *)((int)this + 0x48);
LAB_0041e501:
      FUN_00429150(&DAT_005aa12c,iVar6,iVar3,(int)local_4,param_1,iVar2);
    }
    iVar5 = *(int *)(iVar5 + 0x14);
  } while( true );
}


