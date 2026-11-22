
undefined4 FUN_0046fd80(undefined4 param_1,char *param_2,undefined4 unused_stack_8)

{
  int iVar1;
  
  iVar1 = FUN_0046fd10(param_2,s_LPT1_00557c14);
  if (iVar1 == 0) {
    iVar1 = FUN_0046fd10(param_2,s_LPT2_00557c0c);
    if (iVar1 == 0) {
      iVar1 = FUN_0046fd10(param_2,s_LPT3_00557c04);
      if (iVar1 == 0) {
        iVar1 = FUN_0046fd10(param_2,s_LPT4_00557bfc);
        if (iVar1 == 0) {
          iVar1 = FUN_0046fd10(param_2,s_COM1_00557bf4);
          if (iVar1 == 0) {
            iVar1 = FUN_0046fd10(param_2,s_COM2_00557bec);
            if (iVar1 == 0) {
              iVar1 = FUN_0046fd10(param_2,s_COM3_00557be4);
              if (iVar1 == 0) {
                iVar1 = FUN_0046fd10(param_2,s_COM4_00557bdc);
                if (iVar1 == 0) {
                  iVar1 = FUN_0046fe60(DAT_005d1e84,DAT_0058325c);
                  if (iVar1 != 0) {
                    DAT_00583258 = DAT_0058325c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  DAT_0058325c = DAT_0058325c + 1;
  return 1;
}


