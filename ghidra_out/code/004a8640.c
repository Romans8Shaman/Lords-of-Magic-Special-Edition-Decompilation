
undefined4 __thiscall FUN_004a8640(void *this,int param_1)

{
  LPCSTR pCVar1;
  int *piVar2;
  
  pCVar1 = (LPCSTR)FUN_004b9570(0x44,(short)param_1);
  piVar2 = (int *)FUN_00539610(pCVar1,&DAT_00556168);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  FUN_004f9c00((void *)((int)this + 0x1c),piVar2);
  FUN_005394d0(piVar2);
  FUN_004b7410(&DAT_005cd358,'D',0,(short)param_1);
  return 1;
}


