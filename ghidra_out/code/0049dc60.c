
undefined4 __thiscall FUN_0049dc60(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  *(int *)((int)this + 0x10) = param_1;
  *(int *)((int)this + 0x14) = param_2;
  if ((*(int **)((int)this + 0x3c) == (int *)0x0) || (**(int **)((int)this + 0x3c) == 0)) {
    return 0;
  }
  puVar4 = (undefined4 *)((int)this + 0x28);
  uVar1 = FUN_0049dcf0(this,param_1,param_2);
  iVar2 = FUN_0049acf0(*(void **)((int)this + 0x3c),*(uint *)((int)this + 4),uVar1,puVar4);
  *(int *)((int)this + 0x20) = iVar2;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  uVar3 = FUN_0049d9a0(this);
  return uVar3;
}


