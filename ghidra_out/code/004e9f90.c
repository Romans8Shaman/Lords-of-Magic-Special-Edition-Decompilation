
int __thiscall FUN_004e9f90(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_c;
  
  iVar1 = param_2 - *(int *)((int)this + 0x21c);
  iVar3 = param_1 - *(int *)((int)this + 0x218);
  param_1 = FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 4));
  if (param_1 == 0) {
    param_1 = FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 8));
  }
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  local_c = 0;
  if (*(int *)((int)this + 0x20c) < 1) {
    return -1;
  }
  piVar4 = (int *)((int)this + 0xc);
  iVar5 = iVar2;
  while( true ) {
    if (param_1 == 0) {
      iVar2 = FUN_00492760(&DAT_005a7b50,piVar4[2]);
      if (iVar2 == 0) {
        iVar2 = 0;
        iVar5 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
        iVar5 = iVar2;
      }
    }
    if ((((*piVar4 <= iVar3) && (piVar4[1] <= iVar1)) && (iVar3 <= *piVar4 + iVar2)) &&
       (iVar1 <= piVar4[1] + iVar5)) break;
    local_c = local_c + 1;
    piVar4 = piVar4 + 4;
    if (*(int *)((int)this + 0x20c) <= local_c) {
      return -1;
    }
  }
  return local_c;
}


