
undefined4 __fastcall FUN_004604f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar6 = -1;
  iVar2 = FUN_004fbe60((void *)(param_1 + 0x4848),0,1);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    if (((*(byte *)(iVar2 + 0x30) & 0x60) != 0) && (iVar1 = *(int *)(iVar2 + 0x54), -1 < iVar1)) {
      iVar4 = iVar4 + 1;
      if ((iVar4 < 2) || (iVar6 == iVar1)) {
        iVar6 = -1;
        iVar3 = 0;
        psVar5 = (short *)(param_1 + 0x23080);
        do {
          if (*psVar5 == iVar1) {
            iVar6 = -1;
            break;
          }
          if ((iVar6 < 0) && (*psVar5 < 0)) {
            iVar6 = iVar3;
          }
          iVar3 = iVar3 + 1;
          psVar5 = psVar5 + 1;
        } while (iVar3 < 10);
        if (-1 < iVar6) {
          *(undefined2 *)(param_1 + 0x23080 + iVar6 * 2) = *(undefined2 *)(iVar2 + 0x54);
          *(undefined2 *)(param_1 + 0x2306c + iVar6 * 2) = 0;
        }
      }
      iVar6 = *(int *)(iVar2 + 0x54);
    }
    iVar2 = FUN_004fbe60((void *)(param_1 + 0x4848),iVar2,1);
  } while( true );
}


