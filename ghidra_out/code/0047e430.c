
undefined4 __thiscall FUN_0047e430(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((DAT_005557e0 != 2) && ((*(byte *)((int)this + 0x30) & 0x32) == 0)) {
    return 0;
  }
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x44),0);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00420490(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(uint *)((int)this + 0x30) & 0x40) != 0) {
    iVar2 = 3;
  }
  *(uint *)((int)this + 0x14) = param_1;
  *(uint *)((int)this + 0x18) = param_2;
  if ((*(uint *)((int)this + 0x30) & 0x80) == 0) {
    if ((iVar2 == 2) && (*(void **)((int)this + 0xb8) != (void *)0x0)) {
      FUN_0049cd80(*(void **)((int)this + 0xb8),param_1,*(int *)((int)this + 0xbc) + param_2,-1,0,2)
      ;
    }
    if ((*(byte *)((int)this + 0x30) & 2) == 0) {
      FUN_0042d9f0((void *)((int)this + 0x94),*(void **)((int)this + 0x2c),param_1,param_2,iVar2);
    }
    FUN_004b0560((void *)((int)this + 0x88),param_1,param_2,*(int *)((int)this + 0x38),iVar2);
    if ((*(byte *)((int)this + 0x30) & 2) == 0) {
      FUN_004f68b0(this,param_1,param_2,iVar2,*(void **)((int)this + 0xc0));
    }
    FUN_004b05b0((void *)((int)this + 0x88),param_1,param_2,*(int *)((int)this + 0x38),iVar2);
    if ((*(byte *)((int)this + 0x30) & 2) == 0) {
      FUN_0042d910((void *)((int)this + 0x94),*(void **)((int)this + 0x2c),param_1,param_2,iVar2);
    }
  }
  else if (*(void **)((int)this + 0xb8) != (void *)0x0) {
    FUN_0049cd80(*(void **)((int)this + 0xb8),param_1,*(int *)((int)this + 0xbc) + param_2,-1,0,2);
    return 1;
  }
  return 1;
}


