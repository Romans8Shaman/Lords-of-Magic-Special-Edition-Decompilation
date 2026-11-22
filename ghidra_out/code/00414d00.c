
undefined4 __thiscall FUN_00414d00(void *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  void *local_4;
  
  local_4 = this;
  iVar3 = FUN_004154a0((int)this);
  if (iVar3 < 1) {
    return 1;
  }
  bVar1 = *(byte *)(param_1 + 0x24);
  if ((bVar1 & 8) != 0) {
    return 1;
  }
  iVar3 = *(int *)((int)this + 0x1c);
  puVar4 = FUN_004c6fc0();
  FUN_004a9a60(&DAT_005ae958,&local_4,
               *(int *)(*(int *)(puVar4 + 0x18) + ((bVar1 & 7) + iVar3 * 8) * 4));
  FUN_004e7300((int)this);
  if (((uint)local_4 & 0x80000) != 0) {
    if (((uint)local_4 & 0x40000) != 0) goto LAB_00414e19;
    iVar3 = FUN_00414b80(this,*(uint *)(param_1 + 8));
    if (iVar3 == 0) {
      iVar3 = FUN_00414c40(this,*(uint *)(param_1 + 8));
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = FUN_00414be0(this,*(uint *)(param_1 + 8));
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = FUN_00414ca0(this,*(uint *)(param_1 + 8));
      if (iVar3 != 0) {
        return 1;
      }
    }
    uVar2 = *(uint *)(param_1 + 8);
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0x4c)) {
      piVar6 = (int *)((int)this + 0xc4);
      do {
        if (((uVar2 & 1 << ((byte)iVar3 & 0x1f)) != 0) && (iVar5 = FUN_00415470(piVar6), iVar5 == 0)
           ) {
          iVar5 = FUN_004e72b0(iVar3);
          if (iVar5 == -1) {
            return 0;
          }
          if ((uVar2 & 1 << ((byte)iVar5 & 0x1f)) == 0) {
            return 0;
          }
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 0x13;
      } while (iVar3 < *(int *)((int)this + 0x4c));
    }
  }
  if (((uint)local_4 & 0x40000) == 0) {
    return 1;
  }
LAB_00414e19:
  if ((((uint)local_4 & 0x80000) == 0) &&
     (iVar3 = FUN_00414b80(this,*(uint *)(param_1 + 8)), iVar3 != 0)) {
    return 0;
  }
  return 1;
}


