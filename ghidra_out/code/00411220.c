
undefined4 __thiscall FUN_00411220(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if ((*(int *)((int)this + 0x47b8) != 1) || (*param_1 != 0)) {
    iVar5 = param_1[3];
    if (-1 < iVar5 + -1) {
      piVar6 = param_1 + iVar5 + 3;
      do {
        pvVar3 = DAT_005a7b78;
        iVar1 = *piVar6;
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        }
        else {
          iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
          iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
          *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
          *(int *)(iVar2 + 4 + iVar4 * 8) = iVar1;
        }
        piVar6 = piVar6 + -1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_004d09a0(DAT_005a7b78,param_1[1],(int *)param_1[2],-param_1[3]);
  }
  return 1;
}


