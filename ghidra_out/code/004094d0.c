
undefined4 __thiscall FUN_004094d0(void *this,void *param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *local_4;
  
  pvVar1 = param_1;
  local_4 = this;
  uVar2 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)param_1 + 0x48));
  if ((uVar2 != 0) && (*(int *)this != 0x12)) {
    iVar3 = FUN_00527e90((void *)((int)pvVar1 + 0xc4),1,(int *)&local_4);
    if (iVar3 != 0) {
      iVar3 = FUN_00527e90((void *)(param_2 + 0xc4),2,(int *)&param_1);
      if ((iVar3 != 0) && ((int)local_4 <= (int)param_1)) {
        FUN_00401730(pvVar1);
        *(undefined4 *)this = 0x12;
        return 1;
      }
    }
  }
  return 0;
}


