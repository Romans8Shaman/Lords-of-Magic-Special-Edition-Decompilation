
void __fastcall thunk_FUN_00531030(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  if (param_1[1] != 0) {
    Ordinal_18(*param_1);
    *param_1 = 0;
    FUN_0053bce0((undefined *)param_1[2]);
    iVar1 = param_1[0x8c];
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[0x89] = 1;
    pvVar3 = DAT_005a7b78;
    if (-1 < iVar1) {
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
        iVar2 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(int *)(iVar2 + 4 + iVar4 * 8) = iVar1;
      }
      FUN_004d05e0(DAT_005a7b78,param_1[0x8a],(int *)param_1[0x8b]);
    }
    if (param_1[0x89] == 0) {
      FUN_00504b80(0x584ae8);
      FUN_00504c30(0x584ae8);
      (/*IC:005310f5*/**(code **)(*DAT_0058516c + 0x1c))(DAT_0058516c,0,0,DAT_00585170,0,0);
      if (DAT_0058517c != (int *)0x0) {
        (/*IC:00531104*/**(code **)(*DAT_0058517c + 8))(DAT_0058517c);
        DAT_0058517c = (int *)0x0;
      }
    }
  }
  return;
}


