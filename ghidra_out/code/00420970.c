
undefined4 __fastcall FUN_00420970(void *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *this;
  int iVar3;
  undefined4 unused_reg_1;
  int iVar4;
  void *pvVar5;
  
  uVar1 = FUN_004192c0((int)param_1);
  iVar4 = 0;
  do {
    uVar2 = FUN_004208d0(param_1,*(int *)((int)param_1 + 0x1c),iVar4);
    if (uVar2 != *(uint *)((int)param_1 + 0x1c)) {
      pvVar5 = param_1;
      this = FUN_004c6fc0();
      uVar2 = FUN_00531fb0(this,uVar2,(int)pvVar5);
      iVar3 = FUN_004c2a10((int)param_1,unused_reg_1,uVar2);
      if (iVar3 <= (int)uVar1) {
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  return 0;
}


