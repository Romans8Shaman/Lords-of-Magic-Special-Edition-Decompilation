
void __thiscall FUN_0051fe70(void *this,int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint local_8;
  int *local_4;
  
  if ((*param_1 < 0) || (0x15 < *param_1)) {
    FUN_005047d0(s_invalid_TurnAIEvent_type_00573f38);
  }
  piVar5 = &DAT_005d2ed0;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = *param_1;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  }
  iVar4 = FUN_0051d200(this,&local_8,0xb);
  pvVar2 = DAT_005a7b78;
  if (iVar4 != 0) {
    uVar1 = *(undefined4 *)((int)this + DAT_005d2ed0 * 4 + 0x10);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = uVar1;
    }
    FUN_004d09a0(DAT_005a7b78,local_8,local_4,-1);
  }
  return;
}


