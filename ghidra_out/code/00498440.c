
void __thiscall FUN_00498440(void *this,undefined1 param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(undefined1 *)((int)this + 5) = param_1;
  *(int *)((int)this + 0xc) = param_2;
  *(int *)((int)this + 8) = param_3;
  iVar1 = FUN_004a8b50(&DAT_005ae958,param_2,param_3);
  *(char *)((int)this + 4) = (char)iVar1;
  return;
}


