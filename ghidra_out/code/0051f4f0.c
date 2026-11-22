
void __thiscall FUN_0051f4f0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  int *local_4;
  
  switch(param_1) {
  case 1:
    iVar4 = 0;
    break;
  case 2:
    iVar4 = 3;
    break;
  case 3:
    iVar4 = 4;
    break;
  case 4:
    iVar4 = 1;
    break;
  case 5:
    iVar4 = 2;
    break;
  case 6:
    iVar4 = 5;
    break;
  default:
    goto switchD_0051f506_default;
  }
  iVar3 = FUN_0051d200(this,&local_8,0xb);
  pvVar2 = DAT_005a7b78;
  if (iVar3 != 0) {
    DAT_005d2ed4 = 0xffffffff;
    uVar1 = *(undefined4 *)((int)this + iVar4 * 4 + 0x10);
    DAT_005d2ed0 = iVar4;
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
switchD_0051f506_default:
  return;
}


