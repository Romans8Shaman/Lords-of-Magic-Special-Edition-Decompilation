
int __thiscall FUN_00531ed0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_8;
  int local_4;
  
  if (0x7ffffffd < *(int *)(*(int *)this + param_1 * 4)) {
    return -1;
  }
  iVar5 = -1;
  local_8 = 0;
  local_4 = param_1 << 5;
  local_10 = 0x7ffffffe;
  do {
    iVar1 = *(int *)(DAT_005ae970 + local_4);
    if (iVar1 != param_1) {
      iVar2 = *(int *)(*(int *)this + iVar1 * 4);
      if (iVar2 == 0) {
        return iVar1;
      }
      if (iVar2 < local_10) {
        iVar5 = iVar1;
        local_10 = iVar2;
      }
      else if (iVar2 == local_10) {
        iVar3 = FUN_00531e90(this,DAT_00574404,iVar5);
        iVar4 = FUN_00531e90(this,DAT_00574404,iVar1);
        if (iVar4 < iVar3) {
          iVar5 = iVar1;
          local_10 = iVar2;
        }
      }
    }
    local_8 = local_8 + 1;
    local_4 = local_4 + 4;
  } while (local_8 < 8);
  return iVar5;
}


