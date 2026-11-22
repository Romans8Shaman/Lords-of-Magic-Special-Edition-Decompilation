
undefined4 __fastcall FUN_0046ff80(void *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  undefined4 *arg6;
  int iVar1;
  
  DAT_00583258 = -1;
  DAT_0058325c = 0;
  Ordinal_103(FUN_0046fd80);
  if (-1 < DAT_00583258) {
    iVar1 = FUN_0046fe60(param_1,DAT_00583258);
    if (iVar1 != 0) {
      arg6 = (undefined4 *)((int)param_1 + 0x2c4);
      *(undefined4 *)((int)param_1 + 0x3c8) = *(undefined4 *)((int)param_1 + 0x3b4);
      *arg6 = 0;
      iVar1 = Ordinal_118(*(undefined4 *)((int)param_1 + 0x3b4),unused_stack_0,0,
                          (int)param_1 + 0x104,s_JoiningPlayer_00557c2c,arg6);
      if (iVar1 != 0) {
        FUN_00470090(param_1,0);
        return 1;
      }
      *arg6 = 0xffff;
    }
  }
  return 0;
}


