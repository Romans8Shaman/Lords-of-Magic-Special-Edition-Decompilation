
undefined4 __thiscall FUN_00482800(void *this,char *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0x228b0) = DVar1 + 1000;
  uVar2 = FUN_004b9610(&DAT_005cd358,param_1);
  return uVar2;
}


