
void __fastcall FUN_004c8760(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *this;
  int iVar5;
  void *this_00;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0050b770((int)&local_30);
  iVar5 = 0;
  local_4 = 0;
  FUN_004c5530(param_1 + 0x4848);
  iVar1 = *(int *)(param_1 + 0x4f88);
  if (0 < iVar1) {
    do {
      pvVar2 = (void *)FUN_004c5ec0((void *)(param_1 + 0x4dd8),iVar5);
      if (pvVar2 != (void *)0x0) {
        iVar3 = FUN_004c8670(pvVar2);
        iVar4 = FUN_004c8660((int)pvVar2);
        if (iVar4 != iVar3) {
          iVar4 = FUN_004c8660((int)pvVar2);
          if ((iVar4 < 0) || (0xf < iVar4)) {
            this = (void *)0x0;
          }
          else {
            this = (void *)(param_1 + 0x5068 + iVar4 * 0x1d84);
          }
          if ((iVar3 < 0) || (0xf < iVar3)) {
            this_00 = (void *)0x0;
          }
          else {
            this_00 = (void *)(param_1 + 0x5068 + iVar3 * 0x1d84);
          }
          if (this != (void *)0x0) {
            local_1c = 0;
            local_18 = 0;
            local_30 = 10;
            local_20 = DAT_005af130;
            local_24 = DAT_005af130;
            local_14 = 1;
            local_2c = iVar3;
            local_28 = iVar5;
            FUN_004bc9c0(this,&local_30);
          }
          if (this_00 != (void *)0x0) {
            local_30 = 9;
            local_2c = FUN_004c8660((int)pvVar2);
            local_1c = 0;
            local_18 = 0;
            local_20 = DAT_005af130;
            local_24 = DAT_005af130;
            local_14 = 1;
            local_28 = iVar5;
            FUN_004bc9c0(this_00,&local_30);
          }
          *(int *)((int)pvVar2 + 0x10) = iVar3;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  local_4 = 0xffffffff;
  op_sunlight();
  ExceptionList = local_c;
  return;
}


