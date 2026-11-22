
void __fastcall FUN_0043bdc0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = param_1[0x16];
  if ((iVar2 < 0x11) || (0x14 < iVar2)) {
    pvVar1 = (void *)FUN_0043c360(&DAT_005cd310,(int)(short)param_1[0x15],
                                  (int)*(short *)((int)param_1 + 0x56),iVar2,param_1[0x17]);
    if (pvVar1 == (void *)0x0) {
      FUN_004f5a90(param_1,-1);
      return;
    }
    iVar2 = FUN_0043be80(pvVar1);
    FUN_004f5a90(param_1,iVar2);
    FUN_004f5b30(param_1,(uint)*(byte *)(param_1 + 0x14));
    (/*IC:0043be18*/**(code **)(*param_1 + 0x1c))(param_1);
  }
  return;
}


