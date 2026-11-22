
void __fastcall FUN_004f1890(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    iVar1 = 0;
    do {
      FUN_004f0f60(param_1[2] + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xac;
    } while (iVar2 < *param_1);
  }
  return;
}


