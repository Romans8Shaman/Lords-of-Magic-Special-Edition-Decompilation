
void __fastcall FUN_0050c100(undefined4 *param_1)

{
  undefined4 *this;
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054c268;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0054e910;
  local_4 = 0;
  DAT_005d2d60 = DAT_005d2d60 + -0x60;
  this = (undefined4 *)param_1[0x16];
  if (this != (undefined4 *)0x0) {
    (/*IC:0050c146*/**(code **)*this)(this,1);
    param_1[0x16] = 0;
  }
  iVar1 = param_1[0x14];
  if (iVar1 != 0) {
    FUN_00539eb0(iVar1,0xc,*(int *)(iVar1 + -4),&LAB_00462c80);
    if (iVar1 + -4 != 0) {
      Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
  }
  local_4 = 0xffffffff;
  FUN_004f59f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


