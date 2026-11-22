
void __cdecl op_getnewinitiates(void *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  pvVar1 = param_1;
  iVar2 = FUN_00451a70(param_1,(uint *)&param_1);
  if (iVar2 != 0) {
    uVar3 = FUN_00451bc0((int)param_1);
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar4;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar3;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}


