
void __fastcall FUN_00419490(void *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  undefined4 *this;
  bool bVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unused_reg_1_00;
  
  bVar1 = false;
  FUN_004b0960((undefined4 *)((int)param_1 + 0x55c),unused_reg_1,unused_stack_0);
  unused_reg_1_00 = extraout_EDX;
  if (*(void **)((int)param_1 + 0x58c) != (void *)0x0) {
    thunk_FUN_0049d9a0(*(void **)((int)param_1 + 0x58c));
    unused_reg_1_00 = extraout_EDX_00;
  }
  if ((*(int *)((int)param_1 + 0x2c) != 0) && (*(int *)((int)param_1 + 0x544) == 8)) {
    bVar1 = true;
  }
  FUN_004f6830(param_1,unused_reg_1_00,unused_stack_0);
  if ((bVar1) && (DAT_005aeef4 = 1, *(int *)(*(int *)((int)param_1 + 0x2c) + 4) == 9)) {
    this = *(undefined4 **)((int)param_1 + 0x58c);
    *(undefined4 *)((int)param_1 + 0x544) = 9;
    if (this != (undefined4 *)0x0) {
      (/*IC:00419506*/**(code **)*this)(this,1);
      *(undefined4 *)((int)param_1 + 0x58c) = 0;
    }
  }
  return;
}


