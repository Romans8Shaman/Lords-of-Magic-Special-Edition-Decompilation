
void __fastcall FUN_004c39b0(undefined4 *param_1)

{
  void *this;
  int iVar1;
  
  if (param_1[2] != 0) {
    iVar1 = 0;
    if (0 < (int)param_1[1]) {
      do {
        this = (void *)FUN_004c3b00(param_1,iVar1);
        if (this != (void *)0x0) {
          FUN_0052c720(this,0);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)param_1[1]);
    }
    iVar1 = param_1[2];
    if (iVar1 != 0) {
      FUN_00539eb0(iVar1,4,*(int *)(iVar1 + -4),op_sunlight);
      if (iVar1 + -4 != 0) {
        Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
    }
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


