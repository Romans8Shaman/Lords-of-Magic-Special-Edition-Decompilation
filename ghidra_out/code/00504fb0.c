
void __thiscall FUN_00504fb0(void *this,int param_1,int param_2)

{
  char *pcVar1;
  FILE *_File;
  int *piVar2;
  char *pcVar3;
  FILE *_File_00;
  int iVar4;
  int iVar5;
  char local_3e8 [1000];
  
  pcVar1 = FUN_00505110(this,param_1,0xffffffff);
  iVar4 = 0;
  _File = (FILE *)FUN_0053bad0();
  if (_File != (FILE *)0x0) {
    piVar2 = (int *)FUN_00539610(pcVar1,&DAT_005572ec);
    if (piVar2 != (int *)0x0) {
      do {
        pcVar3 = FUN_0053b350(local_3e8,1000,piVar2);
        if (pcVar3 != (char *)0x0) {
          FID_conflict__fwprintf(_File,(wchar_t *)&DAT_0055ce54,local_3e8);
          iVar4 = iVar4 + 1;
        }
      } while ((*(byte *)(piVar2 + 3) & 0x30) == 0);
      FUN_005394d0(piVar2);
    }
    if (param_2 < iVar4) {
      FUN_0053a790(pcVar1);
      _File_00 = (FILE *)FUN_00539610(pcVar1,&DAT_00556168);
      if (_File_00 != (FILE *)0x0) {
        iVar5 = 0;
        FUN_0053a140((int *)_File,0,0);
        do {
          if (iVar4 <= iVar5) break;
          pcVar1 = FUN_0053b350(local_3e8,1000,(int *)_File);
          if ((pcVar1 != (char *)0x0) && (iVar4 - param_2 <= iVar5)) {
            FID_conflict__fwprintf(_File_00,(wchar_t *)&DAT_0055ce54,local_3e8);
          }
          iVar5 = iVar5 + 1;
        } while ((_File->_flag & 0x30) == 0);
        FUN_005394d0((int *)_File_00);
      }
    }
    FUN_005394d0((int *)_File);
  }
  return;
}


