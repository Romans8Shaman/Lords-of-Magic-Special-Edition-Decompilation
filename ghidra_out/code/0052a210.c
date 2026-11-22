
void __cdecl op_getunitmovementpoints(void *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar3 = FUN_0041bf10(param_1,&local_4,(int *)&param_1);
  pvVar2 = DAT_005a7b78;
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)(local_4 + 0xd0 + (int)param_1 * 0x4c);
    if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
      return;
    }
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
}


