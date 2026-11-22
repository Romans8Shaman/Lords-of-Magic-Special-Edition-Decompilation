
undefined4 __fastcall FUN_0048a340(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char local_108 [264];
  
  FUN_0048cc40((int)local_108);
  iVar2 = FUN_0048a400(param_1);
  if (iVar2 != 1) {
    return 0;
  }
  piVar3 = (int *)FUN_00539610(PTR_s_MESSAGE_DAT_0055b890,&DAT_005572ec);
  if (piVar3 != (int *)0x0) {
    FUN_005397f0(local_108,0x105,1,piVar3);
    bVar1 = *(byte *)(piVar3 + 3);
    while ((bVar1 & 0x10) == 0) {
      FUN_0048a450((void *)param_1,(undefined4 *)local_108);
      FUN_005397f0(local_108,0x105,1,piVar3);
      bVar1 = *(byte *)(piVar3 + 3);
    }
    FUN_005394d0(piVar3);
    FUN_0053a760(PTR_s_MESSAGE_DAT_0055b890);
  }
  return 1;
}


