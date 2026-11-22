
undefined4 __thiscall FUN_0049da80(void *this,uint param_1)

{
  int *this_00;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  this_00 = *(int **)((int)this + 0x3c);
  *(uint *)((int)this + 4) = param_1;
  if ((this_00 == (int *)0x0) || (*this_00 == 0)) {
    return 0;
  }
  iVar1 = FUN_0049adb0(this_00,param_1);
  *(int *)((int)this + 0x24) = iVar1;
  puVar4 = (undefined4 *)((int)this + 0x28);
  uVar2 = FUN_0049dcf0(this,*(int *)((int)this + 0x10),*(int *)((int)this + 0x14));
  iVar1 = FUN_0049acf0(*(void **)((int)this + 0x3c),*(uint *)((int)this + 4),uVar2,puVar4);
  *(int *)((int)this + 0x20) = iVar1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  uVar3 = FUN_0049d9a0(this);
  return uVar3;
}


