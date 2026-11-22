
void __cdecl op_conetarget(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pvVar1 = param_1;
  iVar2 = FUN_0041be40(param_1,&param_1);
  if (iVar2 == 0) {
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
  }
  else {
    iVar2 = FUN_0040a0e0(&DAT_005ae958,(int)param_1);
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar4;
      iVar3 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2;
      return;
    }
  }
  *(undefined4 *)((int)pvVar1 + 0x90) = 3;
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
}


