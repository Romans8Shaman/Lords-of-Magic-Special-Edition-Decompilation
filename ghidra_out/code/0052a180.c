
void __cdecl op_getunithitpoints(void *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar3 = FUN_0041bf10(param_1,&local_4,(int *)&param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_00521fc0((int *)(local_4 + 0xc4 + (int)param_1 * 0x4c));
    pvVar2 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar4 * 8) = iVar3;
      return;
    }
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
}


