
int __thiscall
FUN_004eab70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x18) = param_4;
  DAT_0058471c = this;
  iVar1 = FUN_004ead10((int)this);
  if (iVar1 != -2) {
    if (iVar1 == -1) {
      *(undefined4 *)((int)this + 8) = 1;
    }
    else {
      if (iVar1 != 0) {
        MessageBoxA(*(HWND *)((int)this + 0x14),s_Failure_has_occured_with_Interne_00572b00,
                    s_Failure_00572b28,0x10);
        return iVar1;
      }
      DAT_00584718 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
      iVar2 = FUN_004eac00((int)this);
      if (iVar2 == 0) {
        return -1;
      }
    }
  }
  return iVar1;
}


