
undefined4 __thiscall FUN_004a86a0(void *this,short param_1)

{
  LPCSTR pCVar1;
  int *piVar2;
  
  pCVar1 = (LPCSTR)FUN_004b9570(0x44,param_1);
  piVar2 = (int *)FUN_00539610(pCVar1,&DAT_005572ec);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  DAT_005aa12c = DAT_0055b1b0;
  FUN_004f73e0((void *)((int)this + 0x1c),piVar2,1);
  FUN_005394d0(piVar2);
  return 1;
}


