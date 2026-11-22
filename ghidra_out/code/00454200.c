
void __thiscall FUN_00454200(void *this,int unused_stack_8,int param_p3)

{
  float10 fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 in_stack_0000000c;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  local_2c = (float)(unused_stack_8 - (*(int *)((int)this + 0x5c) >> 1));
  local_28 = (float)(param_p3 - (*(int *)((int)this + 0x60) >> 1));
  fVar1 = FUN_004a5210(this,unused_stack_8,param_p3);
  local_24 = (float)fVar1;
  FUN_00469ae0(&DAT_005876d0,&local_2c);
  lVar2 = __ftol((float10)local_20);
  lVar3 = __ftol((float10)local_1c);
  local_2c = (float)((unused_stack_8 - (*(int *)((int)this + 0x5c) >> 1)) + 1);
  local_28 = (float)(param_p3 - (*(int *)((int)this + 0x60) >> 1));
  fVar1 = FUN_004a5210(this,unused_stack_8 + 1,param_p3);
  local_24 = (float)fVar1;
  FUN_00469ae0(&DAT_005876d0,&local_2c);
  lVar4 = __ftol((float10)local_20);
  lVar5 = __ftol((float10)local_1c);
  local_2c = (float)((unused_stack_8 - (*(int *)((int)this + 0x5c) >> 1)) + 1);
  local_28 = (float)((param_p3 - (*(int *)((int)this + 0x60) >> 1)) + 1);
  fVar1 = FUN_004a5210(this,unused_stack_8 + 1,param_p3 + 1);
  local_24 = (float)fVar1;
  FUN_00469ae0(&DAT_005876d0,&local_2c);
  lVar6 = __ftol((float10)local_20);
  lVar7 = __ftol((float10)local_1c);
  local_2c = (float)(unused_stack_8 - (*(int *)((int)this + 0x5c) >> 1));
  local_28 = (float)((param_p3 - (*(int *)((int)this + 0x60) >> 1)) + 1);
  fVar1 = FUN_004a5210(this,unused_stack_8,param_p3 + 1);
  local_24 = (float)fVar1;
  FUN_00469ae0(&DAT_005876d0,&local_2c);
  lVar8 = __ftol((float10)local_20);
  lVar9 = __ftol((float10)local_1c);
  FUN_00454030((int)lVar2,(int)lVar3,(int)lVar4,(int)lVar5,in_stack_0000000c);
  FUN_00454030((int)lVar4,(int)lVar5,(int)lVar6,(int)lVar7,in_stack_0000000c);
  FUN_00454030((int)lVar6,(int)lVar7,(int)lVar8,(int)lVar9,in_stack_0000000c);
  FUN_00454030((int)lVar8,(int)lVar9,(int)lVar2,(int)lVar3,in_stack_0000000c);
  return;
}


