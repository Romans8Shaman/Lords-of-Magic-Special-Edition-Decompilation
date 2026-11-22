
int __thiscall FUN_00532c30(void *this,int *param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar3 = 0;
  local_8 = *(int *)((int)this + 0x6c);
  local_1c = param_3 % local_8;
  iVar5 = 0;
  local_10 = 0x7ffffffe;
  local_4 = -1;
  local_c = 0;
  local_18 = param_3 / local_8;
  local_8 = *(int *)((int)this + 0x70) * local_8;
  iVar4 = 1;
  if (local_8 < 1) {
    return -1;
  }
  do {
    iVar1 = FUN_004a51c0(this,local_1c,local_18);
    iVar2 = FUN_00532820(this,iVar1,0.0,param_3,0.0,param_4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(*param_1 + iVar1 * 4), iVar2 < local_10)) {
      local_10 = iVar2;
      local_4 = iVar1;
    }
    iVar1 = iVar4;
    switch(uVar3) {
    case 0:
      local_c = local_c + 1;
      if (param_2 < local_c) {
        return local_4;
      }
      local_1c = local_1c + 1;
      uVar3 = 1;
      iVar1 = iVar4 + 2;
      iVar5 = iVar4;
      break;
    case 1:
      local_18 = local_18 + 1;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        uVar3 = 2;
        iVar5 = iVar4 + -1;
      }
      break;
    case 2:
      local_1c = local_1c + -1;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        uVar3 = 3;
        iVar5 = iVar4 + -1;
      }
      break;
    case 3:
      local_18 = local_18 + -1;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        uVar3 = 4;
        iVar5 = iVar4 + -1;
      }
      break;
    case 4:
      local_1c = local_1c + 1;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        uVar3 = 0;
      }
    }
    local_8 = local_8 + -1;
    iVar4 = iVar1;
  } while (0 < local_8);
  return -1;
}


