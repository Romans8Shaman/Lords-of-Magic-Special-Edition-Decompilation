
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004c2a10(int param_1,undefined4 unused_reg_1,int unused_stack_0)

{
  int iVar1;
  float10 fVar2;
  longlong lVar3;
  float local_4;
  
  local_4 = 0.0;
  iVar1 = FUN_004c1c50(param_1);
  if ((iVar1 == 1) && (iVar1 = FUN_004c1cc0(param_1), iVar1 == 1)) {
    local_4 = _DAT_0054dcd4;
  }
  fVar2 = (float10)local_4;
  if ((*(uint *)(param_1 + 0x30) & 0x20000000) != 0) {
    fVar2 = fVar2 - (float10)_DAT_0054dcd8;
  }
  lVar3 = __ftol((float10)unused_stack_0 * (fVar2 - (float10)_DAT_0054dcdc));
  return (int)lVar3;
}


