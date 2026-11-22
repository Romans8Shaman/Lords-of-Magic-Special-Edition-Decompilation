
undefined4 __thiscall FUN_004fe6e0(void *this,LPCSTR param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  
  iVar1 = FUN_00539610(param_1,&DAT_005572ec);
  if (iVar1 == 0) {
    pCVar2 = (LPCSTR)FUN_004fe5b0(this,param_1);
    if (pCVar2 == (LPCSTR)0x0) {
      return 0;
    }
    iVar1 = FUN_00539610(pCVar2,&DAT_005572ec);
  }
  return iVar1;
}


