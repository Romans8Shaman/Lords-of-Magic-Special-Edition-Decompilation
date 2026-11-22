
int __cdecl FUN_00540640(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_005d5544 = 1;
                    /* WARNING: Could not recover jumptable at 0x0054065d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_005d5544 = 1;
                    /* WARNING: Could not recover jumptable at 0x00540672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_005d5320;
  }
  DAT_005d5544 = (uint)bVar2;
  return param_1;
}


