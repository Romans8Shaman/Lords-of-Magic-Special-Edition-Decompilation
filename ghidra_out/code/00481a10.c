
void __thiscall FUN_00481a10(void *this,undefined4 param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)((int)this + 0x228ac) = param_1;
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0x228b0) = DVar1;
  return;
}


