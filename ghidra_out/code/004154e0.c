
int __thiscall FUN_004154e0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  int local_c;
  int local_4;
  
  iVar3 = -1;
  local_10 = -1;
  local_c = -1;
  iVar2 = -1;
  local_4 = -1;
  if (param_1 == 9) {
    local_10 = 0;
  }
  else if (param_1 == 10) {
    local_10 = 1;
  }
  else if (param_1 == 0xc) {
    local_10 = 2;
  }
  iVar4 = 0;
  iVar1 = -1;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar5 = (int *)((int)this + 0xd4);
    do {
      iVar1 = FUN_00525fc0(piVar5 + -4);
      if (-1 < iVar1) {
        if (-1 < local_10) {
          if (iVar1 == local_10) {
            if (iVar3 < *piVar5 >> 8) {
              iVar3 = *piVar5 >> 8;
              local_c = iVar4;
            }
          }
        }
        if (iVar2 < *piVar5 >> 8) {
          iVar2 = *piVar5 >> 8;
          local_4 = iVar4;
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x13;
    } while (iVar4 < *(int *)((int)this + 0x4c));
    iVar1 = local_4;
  }
  if ((param_2 != 0) && (-1 < local_10)) {
    if (local_c < 1) {
      if (iVar1 < 1) {
        return local_c;
      }
    }
    else {
      iVar1 = local_c;
    }
    FUN_00422fa0(this,0,iVar1);
  }
  return local_c;
}


