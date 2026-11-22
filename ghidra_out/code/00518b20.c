
int __thiscall
FUN_00518b20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar2 = 0;
  local_4 = 0;
  if (0 < *(int *)((int)this + 0x202c4)) {
    do {
      iVar3 = 0;
      if (0 < *(int *)((int)this + 0x202c0)) {
        do {
          iVar1 = (/*IC:00518b65*/**(code **)((int)this + 0x220))(iVar3,iVar2,param_1,param_2,param_3,param_4);
          if (iVar1 != -1) {
            local_4 = local_4 + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)((int)this + 0x202c0));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x202c4));
  }
  return local_4;
}


