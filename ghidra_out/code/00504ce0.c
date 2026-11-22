
undefined4 __thiscall FUN_00504ce0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 in_EDX;
  int unused_stack_8;
  int iVar2;
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c190;
  local_c = ExceptionList;
  iVar2 = 0;
  if (*(int *)((int)this + 0x22ff4) == 0) {
    return 1;
  }
  if (*(int *)((int)this + 0x680) == 0) {
    return 1;
  }
  if (*(int *)((int)this + 0x68c) == 0) {
    return 1;
  }
  ExceptionList = &local_c;
  switch(*(undefined4 *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this)) {
  case 0:
    ExceptionList = &local_c;
    FUN_004950c0(local_2c,*(int **)((int)this + 0x688));
    local_4 = 1;
    FUN_00497270(local_2c,0,0,0x27f,0x1df,0);
    break;
  default:
    goto switchD_00504d40_caseD_1;
  case 2:
  case 3:
  case 5:
  case 6:
    if ((*(int *)((int)this + 0x2dfc) != 0) && (param_2 == 0)) {
      ExceptionList = &local_c;
      FUN_0046a050((int)this,in_EDX,0);
      ExceptionList = local_c;
      return 0;
    }
    if (*(int *)((int)this + 0x29edc) != 0) {
      ExceptionList = &local_c;
      iVar1 = FUN_0046a050((int)this,in_EDX,param_2);
      if (iVar1 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      FUN_004a6a10((void *)((int)this + 0x29e70),(int *)0x1);
      goto switchD_00504d40_caseD_1;
    }
    ExceptionList = &local_c;
    FUN_004950c0(local_2c,*(int **)((int)this + 0x688));
    local_4 = 0;
    FUN_00497270(local_2c,0,0,0x27f,0x1df,0);
    break;
  case 8:
    ExceptionList = &local_c;
    FUN_00504b20((int)this);
    goto switchD_00504d40_caseD_1;
  }
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4 = 0xffffffff;
  FUN_00495590(local_2c);
switchD_00504d40_caseD_1:
  FUN_005007e0(this,1);
  if (param_1 != 0) {
    FUN_004753d0((int)this);
  }
  if ((DAT_00586798 != 0) && (*(int *)((int)this + 0x2bec) == -1)) {
    iVar1 = *(int *)((int)this + 0x29ecc);
    if (0 < *(int *)((int)this + 0x29ed0)) {
      do {
        unused_stack_8 = 0;
        if (0 < iVar1) {
          do {
            FUN_00454200(&DAT_005ae958,unused_stack_8,iVar2);
            iVar1 = *(int *)((int)this + 0x29ecc);
            unused_stack_8 = unused_stack_8 + 1;
          } while (unused_stack_8 < iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 0x29ed0));
    }
    (/*IC:00504ebc*/**(code **)(**(int **)((int)this + 0x684) + 0x1c))
              (*(int **)((int)this + 0x684),0,0,*(undefined4 *)((int)this + 0x688),0,0);
  }
  ExceptionList = local_c;
  return 1;
}


