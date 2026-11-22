
void __fastcall FUN_004b4ba0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 1;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x4b2c);
    if ((iVar2 == 0) || (iVar1 = *(int *)(iVar2 + 0x100), iVar1 < 1)) {
      iVar1 = 1;
    }
    if (iVar1 < iVar4) break;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = FUN_004b7dd0(iVar2);
    }
    if (iVar4 != iVar2) {
      if (*(void **)(param_1 + 0x4b2c) == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004b7890(*(void **)(param_1 + 0x4b2c),iVar4);
      }
      if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
        uVar3 = uVar3 | 1 << ((byte)iVar4 & 0x1f);
      }
    }
    iVar4 = iVar4 + 1;
  }
  *(uint *)(param_1 + 0x4bcc) = uVar3;
  return;
}


