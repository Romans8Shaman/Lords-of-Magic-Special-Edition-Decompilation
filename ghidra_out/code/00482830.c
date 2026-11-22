
undefined4 __thiscall FUN_00482830(void *this,int *param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  int local_108;
  undefined1 local_104;
  int local_f3;
  int local_ef;
  undefined4 local_eb;
  
  pCVar1 = (LPCSTR)FUN_004b9570(0x47,-1);
  FUN_0048cc40((int)&local_108);
  FUN_00482af0(this,pCVar1);
  iVar2 = FUN_004b7410(&DAT_005cd358,'G',*param_1,-1);
  if (iVar2 != 0) {
    local_f3 = *param_1;
    local_eb = *(undefined4 *)((int)this + 0x228a8);
    local_ef = local_f3 + -1;
    local_104 = 0x21;
    uVar3 = FUN_00489b70(&DAT_00584ae8,&local_108);
    return uVar3;
  }
  if (DAT_005d1e84 != 0) {
    FUN_005047d0(s_DoXfer_failed_0055b274);
  }
  return 0;
}


