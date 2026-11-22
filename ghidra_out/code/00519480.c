
undefined4 __thiscall FUN_00519480(void *this,int param_1)

{
  int unused_stack_16;
  int iVar1;
  int unused_stack_24;
  int iVar2;
  int unused_stack_28;
  
  if (*(int *)((int)this + 0x202ac) == 0) {
    return 0;
  }
  if (param_1 == 0) {
    unused_stack_16 = *(int *)((int)this + 0x1f0) * 2 + 0x17f;
    iVar1 = *(int *)((int)this + 0x1ec) * 2 + 0x27f;
    unused_stack_28 = iVar1 - *(int *)((int)this + 0x1fc);
    unused_stack_24 = -*(int *)((int)this + 0x200);
    *(undefined4 *)((int)this + 0x1d8) = 0;
    iVar2 = FUN_00518b20(this,-*(int *)((int)this + 0x1fc),unused_stack_24,unused_stack_28,
                         unused_stack_16 - *(int *)((int)this + 0x200));
    *(int *)((int)this + 0x204) = iVar2;
    iVar2 = FUN_00518540(this,iVar2);
    *(int *)((int)this + 0x208) = iVar2;
    *(undefined4 *)((int)this + 0x1e4) = 0;
    *(undefined4 *)((int)this + 0x1e8) = 0;
    FUN_00518c50(this,0,0,iVar1,unused_stack_16,0,unused_stack_24,unused_stack_28,unused_stack_16,0)
    ;
    (/*IC:0051957f*/**(code **)(*(int *)this + 8))(0);
    *(undefined4 *)((int)this + 0x202c8) = 0;
    return 1;
  }
  FUN_005192d0(this,DAT_005a79e4);
  return 1;
}


