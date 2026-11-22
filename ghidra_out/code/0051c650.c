
void __fastcall FUN_0051c650(void *param_1)

{
  int iVar1;
  uint local_8;
  int *local_4;
  
  iVar1 = FUN_0051ba70(0x5aa12c);
  if (iVar1 != 0) {
    iVar1 = FUN_0051d200(param_1,&local_8,0x11);
    if (iVar1 != 0) {
      FUN_004d09a0(DAT_005a7b78,local_8,local_4,0);
    }
    FUN_0048a080(&DAT_005aa12c,*(int *)((int)param_1 + 0x68));
    FUN_0051c6b0((int)param_1);
  }
  return;
}


