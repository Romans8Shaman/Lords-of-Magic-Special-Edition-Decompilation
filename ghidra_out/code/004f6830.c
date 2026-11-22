
bool __fastcall FUN_004f6830(void *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  uint uVar1;
  
  if (*(void **)((int)param_1 + 0x2c) == (void *)0x0) {
    return false;
  }
  thunk_FUN_0049d9a0(*(void **)((int)param_1 + 0x2c));
  if (0 < *(int *)((int)param_1 + 0x20)) {
    *(int *)((int)param_1 + 0x20) = *(int *)((int)param_1 + 0x20) + -1;
  }
  if (*(int *)((int)param_1 + 0x20) == 0) {
    FUN_004f5b30(param_1,*(uint *)((int)param_1 + 0x24));
    *(undefined4 *)((int)param_1 + 0x20) = 0xffffffff;
  }
  else {
    uVar1 = FUN_0049d8f0(*(int *)((int)param_1 + 0x2c));
    if ((int)uVar1 < 2) goto LAB_004f687c;
  }
  *(byte *)((int)param_1 + 0x34) = *(byte *)((int)param_1 + 0x34) | 2;
LAB_004f687c:
  return (*(byte *)((int)param_1 + 0x34) | 2) != 0;
}


