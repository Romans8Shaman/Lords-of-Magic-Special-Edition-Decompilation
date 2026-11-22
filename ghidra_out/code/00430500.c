
void __thiscall FUN_00430500(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004304e0(this);
  iVar2 = FUN_004304f0(this);
  iVar2 = iVar2 + -1 + param_2;
  if ((param_3 != 0) && (0x17e < iVar2)) {
    iVar2 = 0x17f;
  }
  FUN_00500650(&DAT_00584ae8,param_1,param_2,iVar1 + -1 + param_1,iVar2);
  return;
}


