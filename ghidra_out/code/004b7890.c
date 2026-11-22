
int __thiscall FUN_004b7890(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (/*IC:004b789d*/**(code **)(*(int *)this + 0x5c))(this,param_1 + -1);
  iVar2 = (int)this + iVar1 * 0x25 + -0x19;
  if (*(int *)((int)this + iVar1 * 0x25 + -0x15) == 0) {
    iVar2 = 0;
  }
  return iVar2;
}


