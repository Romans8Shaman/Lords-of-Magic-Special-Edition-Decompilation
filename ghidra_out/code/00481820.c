
undefined4 __thiscall FUN_00481820(void *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  DWORD DVar3;
  void *this_00;
  uint *puVar4;
  undefined *this_01;
  int iVar5;
  
  if (0x10 < param_1) {
    return 0;
  }
  DAT_005aeef4 = 0;
  *(undefined4 *)((int)this + 0x658) = 0xffffffff;
  *(undefined4 *)((int)this + 0x688) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc64) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4778) = 0;
  *(undefined4 *)((int)this + 0x477c) = 0;
  *(undefined4 *)((int)this + 0x47b8) = 0;
  *(undefined4 *)((int)this + 0x4788) = 0;
  iVar5 = 0;
  puVar4 = (uint *)((int)this + 0x6640);
  do {
    FUN_004c10e0((int)(puVar4 + -0x576));
    if ((iVar5 < param_1) || (iVar5 == 0xf)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar2 = *puVar4 | 1;
    }
    else {
      uVar2 = *puVar4 & 0xfffffffe;
    }
    *puVar4 = uVar2;
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 0x761;
  } while (iVar5 < 0x10);
  iVar5 = 0;
  this_01 = &DAT_005a7d90;
  this_00 = (void *)((int)this + 0x5068);
  do {
    if (iVar5 < param_1) {
      FUN_0052c720(this_01,iVar5);
      FUN_004bbf80(this_00,iVar5,0xffffffff,0xffffffff);
    }
    else {
      FUN_0052c720(this_01,0xffffffff);
    }
    this_01 = this_01 + 0x400;
    iVar5 = iVar5 + 1;
    this_00 = (void *)((int)this_00 + 0x1d84);
  } while ((int)this_01 < 0x5a9d90);
  DAT_005a7d8c = 0;
  *(undefined4 *)((int)this + 0x228a8) = 0;
  DVar3 = GetTickCount();
  *(DWORD *)((int)this + 0x228b0) = DVar3;
  *(undefined4 *)((int)this + 0x5004) = 1;
  *(undefined4 *)((int)this + 0x5008) = 0;
  FUN_0040b5e0((int *)((int)this + 0x4d4c));
  FUN_0040c040((int *)((int)this + 0x4d60));
  FUN_0040cb00((int *)((int)this + 0x4d74));
  FUN_0040e220((int *)((int)this + 0x4d84));
  FUN_0040e220((int *)((int)this + 0x4d94));
  FUN_0040f430((int *)((int)this + 0x4da4));
  if (((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) && (DAT_005d3340 != 0)) {
    DAT_005d3344 = DAT_005d3340;
  }
  DAT_005d3340 = 0;
  FUN_0052b260((int *)((int)this + 0x23060));
  FUN_004ef2e0((int *)((int)this + 0x22ec8));
  FUN_004a4b00((void *)((int)this + 0x482c),1);
  FUN_004c5c00((int *)((int)this + 0x4dd8));
  *(undefined4 *)((int)this + 0x23194) = 1;
  return 1;
}


