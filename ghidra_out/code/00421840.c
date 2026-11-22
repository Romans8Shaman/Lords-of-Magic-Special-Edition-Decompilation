
undefined4 __fastcall FUN_00421840(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004209e0(param_1,*(int *)((int)param_1 + 0x1c));
  iVar2 = FUN_004209c0((int)param_1);
  iVar2 = iVar2 * (iVar1 + 1);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  return (int)(100 / (longlong)iVar2);
}


