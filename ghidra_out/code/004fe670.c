
LPCSTR __thiscall FUN_004fe670(void *this,LPCSTR param_1)

{
  int *piVar1;
  LPCSTR pCVar2;
  
  piVar1 = (int *)FUN_00539610(param_1,&DAT_005572ec);
  if (piVar1 != (int *)0x0) {
    FUN_005394d0(piVar1);
    return param_1;
  }
  pCVar2 = (LPCSTR)FUN_004fe5b0(this,param_1);
  if (pCVar2 != (LPCSTR)0x0) {
    piVar1 = (int *)FUN_00539610(pCVar2,&DAT_005572ec);
    if (piVar1 != (int *)0x0) {
      FUN_005394d0(piVar1);
      return pCVar2;
    }
  }
  return (LPCSTR)0x0;
}


