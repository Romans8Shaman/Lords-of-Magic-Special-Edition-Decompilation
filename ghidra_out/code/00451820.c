
int __thiscall FUN_00451820(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  local_4 = -1;
  iVar3 = -1;
  if (*(int *)((int)this + 8) != 0) {
    iVar3 = param_2 + 1;
    if (*(int *)((int)this + 0x18) < iVar3) {
      iVar3 = 0;
    }
    iVar4 = iVar3;
    if (iVar3 <= *(int *)((int)this + 0x18)) {
      do {
        piVar1 = *(int **)(*(int *)((int)this + 8) + iVar4 * 4);
        if (((piVar1 != (int *)0x0) && (piVar1[1] == 3)) &&
           (iVar2 = (/*IC:00451865*/**(code **)(*piVar1 + 0x3c))(piVar1), iVar2 == param_1)) {
          local_4 = iVar4;
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)((int)this + 0x18));
    }
    if ((local_4 == -1) && (iVar4 = 0, -1 < iVar3)) {
      while ((piVar1 = *(int **)(*(int *)((int)this + 8) + iVar4 * 4), piVar1 == (int *)0x0 ||
             ((piVar1[1] != 3 || (iVar2 = (/*IC:00451899*/**(code **)(*piVar1 + 0x3c))(piVar1), iVar2 != param_1)))
             )) {
        iVar4 = iVar4 + 1;
        if (iVar3 < iVar4) {
          return -1;
        }
      }
      local_4 = iVar4;
    }
    iVar3 = local_4;
  }
  return iVar3;
}


