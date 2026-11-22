
void __fastcall FUN_004b3990(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_8;
  char local_4 [4];
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    FUN_0053a140(*(int **)(param_1 + 4),0xc,1);
    piVar1 = *(int **)(param_1 + 4);
    if ((*(byte *)(piVar1 + 3) & 0x10) == 0) {
      while( true ) {
        FUN_005397f0(local_4,4,1,piVar1);
        FUN_005397f0((char *)&local_8,4,1,*(int **)(param_1 + 4));
        iVar2 = _strncmp(local_4,&DAT_0055aef8,3);
        if ((iVar2 != 0) && (iVar2 = _strncmp(local_4,&DAT_0055aef0,4), iVar2 == 0)) break;
        FUN_0053a140(*(int **)(param_1 + 4),local_8,1);
        piVar1 = *(int **)(param_1 + 4);
        if ((*(byte *)(piVar1 + 3) & 0x10) != 0) {
          return;
        }
      }
      *(int *)(param_1 + 0x10) = local_8;
      return;
    }
  }
  return;
}


