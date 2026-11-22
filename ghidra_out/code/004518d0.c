
int __thiscall FUN_004518d0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  local_4 = -1;
  iVar4 = -1;
  if (*(int *)((int)this + 8) != 0) {
    iVar4 = param_2 + -1;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar4 = *(int *)((int)this + 0x18);
      iVar3 = iVar4;
    }
    for (; -1 < iVar4; iVar4 = iVar4 + -1) {
      piVar1 = *(int **)(*(int *)((int)this + 8) + iVar4 * 4);
      if (((piVar1 != (int *)0x0) && (piVar1[1] == 3)) &&
         (iVar2 = (/*IC:00451913*/**(code **)(*piVar1 + 0x3c))(piVar1), iVar2 == param_1)) {
        local_4 = iVar4;
        break;
      }
    }
    if ((local_4 == -1) && (iVar4 = *(int *)((int)this + 0x18), iVar3 <= iVar4)) {
      while ((piVar1 = *(int **)(*(int *)((int)this + 8) + iVar4 * 4), piVar1 == (int *)0x0 ||
             ((piVar1[1] != 3 || (iVar2 = (/*IC:00451943*/**(code **)(*piVar1 + 0x3c))(piVar1), iVar2 != param_1)))
             )) {
        iVar4 = iVar4 + -1;
        if (iVar4 < iVar3) {
          return -1;
        }
      }
      local_4 = iVar4;
    }
    iVar4 = local_4;
  }
  return iVar4;
}


