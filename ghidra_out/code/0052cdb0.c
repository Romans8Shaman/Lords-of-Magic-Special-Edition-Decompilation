
undefined4 __thiscall FUN_0052cdb0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (&DAT_005a8078)[DAT_005a7d8c * 0x100];
  FUN_0052c730((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),0);
  *(int *)((int)this + 0x232a4) = param_1;
  if (iVar1 != 1) {
    FUN_00481610((void *)((int)this + 0x25644),*(int *)(param_1 * 0x400 + 0x23590 + (int)this));
  }
  FUN_0052c730((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),1);
  iVar2 = FUN_0052d140(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
  if (iVar2 < 0) {
    iVar2 = FUN_0052d0e0(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
    if (iVar2 < 0) {
      FUN_0052c930((int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this));
    }
  }
  else {
    uVar3 = FUN_00482ac0(&DAT_005aa12c,iVar2,0);
    if (((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 6) && (uVar3 != 0)) {
      FUN_0041fda0(uVar3);
      FUN_0051ab30(&DAT_005876d0,*(int *)(uVar3 + 0x1c) % DAT_005ae9c4,
                   *(int *)(uVar3 + 0x1c) / DAT_005ae9c4,0x140,0xc0);
    }
  }
  if (iVar1 != 1) {
    FUN_005000f0(this,*(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this));
  }
  return 1;
}


