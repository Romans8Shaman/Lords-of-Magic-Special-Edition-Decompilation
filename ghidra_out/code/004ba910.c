
void __thiscall FUN_004ba910(void *this,int param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0x1c) = DVar1;
  FUN_004fbc50(&DAT_005ae974,param_1);
  *(undefined4 *)((int)this + 0x20) = 1;
  return;
}


