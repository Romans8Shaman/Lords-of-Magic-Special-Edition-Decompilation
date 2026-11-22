
undefined4 __thiscall FUN_0049db80(void *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(int **)((int)this + 0x3c) == (int *)0x0) || (**(int **)((int)this + 0x3c) == 0)) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return 0;
  }
  uVar1 = FUN_0049d8f0((int)this);
  if ((int)uVar1 < 2) {
    *(undefined4 *)((int)this + 0xc) = 0xffffffff;
    uVar2 = FUN_0049d9a0(this);
    return uVar2;
  }
  *(int *)((int)this + 0xc) = param_1 % (int)uVar1 + -1;
  uVar2 = FUN_0049d9a0(this);
  return uVar2;
}


