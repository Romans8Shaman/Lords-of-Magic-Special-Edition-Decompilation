
undefined4 __thiscall FUN_004ad390(void *this,uint unused_stack_8,uint param_p3)

{
  void *this_00;
  
  this_00 = *(void **)((int)this + 0x2c);
  if (this_00 == (void *)0x0) {
    return 0;
  }
  if ((*(byte *)((int)this + 0x30) & 2) == 0) {
    return 0;
  }
  if (*(void **)((int)this + 0xe8) == (void *)0x0) {
    FUN_0049cd80(this_00,unused_stack_8,param_p3,-1,2,2);
  }
  else {
    FUN_0049e070(this_00,*(void **)((int)this + 0xe8),unused_stack_8,param_p3,-1,1,0);
  }
  if (*(void **)((int)this + 0xe4) != (void *)0x0) {
    FUN_0049cd80(*(void **)((int)this + 0xe4),unused_stack_8,*(int *)((int)this + 0xdc) + param_p3,
                 -1,2,2);
  }
  *(uint *)((int)this + 0x18) = param_p3;
  *(uint *)((int)this + 0x14) = unused_stack_8;
  *(uint *)((int)this + 0xe0) = *(int *)((int)this + 0xdc) + param_p3;
  return 1;
}


