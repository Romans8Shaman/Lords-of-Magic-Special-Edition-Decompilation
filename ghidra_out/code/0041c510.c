
undefined4 __thiscall FUN_0041c510(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = (int *)FUN_00482ac0(this,*param_1,0);
  pvVar4 = DAT_005a7b78;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  iVar1 = param_1[2];
  iVar2 = param_1[3];
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
    iVar3 = *(int *)((int)pvVar4 + 0x50);
    *(int *)(iVar3 + iVar6 * 8) = iVar1;
    *(int *)(iVar3 + 4 + iVar6 * 8) = iVar2;
  }
  FUN_0041d5f0(piVar5,param_1[1],DAT_005a7b78);
  return 1;
}


