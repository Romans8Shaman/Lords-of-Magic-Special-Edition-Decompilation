
bool __thiscall FUN_004b3620(void *this,LPCSTR param_1,int param_2)

{
  int *this_00;
  int iVar1;
  
  if (*(int *)((int)this + 0x13b4) == 0) {
    return false;
  }
  this_00 = (int *)((int)this + param_2 * 300 + 0xfc0);
  FUN_004b32c0(this_00);
  *(undefined4 *)((int)this + param_2 * 300 + 0xfdc) = 1;
  iVar1 = FUN_004b3580(this_00,param_1,param_2);
  return iVar1 != 0;
}


