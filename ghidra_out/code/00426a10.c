
undefined4 __thiscall FUN_00426a10(void *this)

{
  uint uVar1;
  int iVar2;
  undefined *this_00;
  uint uVar3;
  undefined4 unused_reg_1;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int local_c;
  uint local_8;
  int local_4;
  
  local_c = *(int *)((int)this + 0x538);
  if (local_c < 0) {
    return 0xffffffff;
  }
  local_8 = FUN_004192c0((int)this);
  local_4 = FUN_00507200((int)this);
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = FUN_00427880(&DAT_005aeefc,&local_c,0);
  uVar1 = *(uint *)(DAT_005ae970 + (iVar2 + *(int *)((int)this + 0x1c) * 8) * 4);
  while (iVar2 != 8) {
    uVar3 = uVar1;
    pvVar6 = this;
    this_00 = FUN_004c6fc0();
    uVar3 = FUN_00531fb0(this_00,uVar3,(int)pvVar6);
    iVar2 = FUN_004c2a10((int)this,unused_reg_1,uVar3);
    iVar4 = iVar4 + iVar2;
    if (local_c < 0) break;
    iVar2 = FUN_00427880(&DAT_005aeefc,&local_c,0);
    uVar1 = *(uint *)(DAT_005ae970 + (iVar2 + uVar1 * 8) * 4);
  }
  for (iVar4 = iVar4 - local_8; 0 < iVar4; iVar4 = iVar4 - local_4) {
    iVar5 = iVar5 + 1;
  }
  return iVar5;
}


