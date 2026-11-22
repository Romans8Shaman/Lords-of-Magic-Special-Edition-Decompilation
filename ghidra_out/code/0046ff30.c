
undefined4 __thiscall FUN_0046ff30(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  DAT_00583258 = -1;
  DAT_0058325c = 0;
  Ordinal_103(FUN_0046fd80);
  if (-1 < DAT_00583258) {
    iVar1 = FUN_0046fe60(this,DAT_00583258);
    if (iVar1 != 0) {
      uVar2 = (/*IC:0046ff6e*/**(code **)(*(int *)this + 8))(param_1);
    }
  }
  return uVar2;
}


