
int __thiscall FUN_005047e0(void *this,LPCSTR param_1,LPCSTR param_2,UINT param_3)

{
  int iVar1;
  
  FUN_00474ad0((int)this + 0x2531c);
  iVar1 = MessageBoxA(*(HWND *)((int)this + 0x26c),param_1,param_2,param_3);
  return iVar1;
}


