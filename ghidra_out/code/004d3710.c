
void __thiscall FUN_004d3710(void *this,undefined4 param_1,undefined *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x558);
  if (iVar1 < 100) {
    *(undefined4 *)((int)this + iVar1 * 8 + 0xa8) = param_1;
    *(undefined **)((int)this + iVar1 * 8 + 0xac) = param_2;
    *(undefined4 *)((int)this + *(int *)((int)this + 0x558) * 4 + 0x3c8) = 0;
    *(int *)((int)this + 0x558) = *(int *)((int)this + 0x558) + 1;
  }
  (/*IC:004d3754*/*(code *)param_2)(this);
  *(int *)((int)this + 0x558) = iVar1;
  return;
}


