
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0042d6b0(void *this,int in_stack_4)

{
  int iVar1;
  
  iVar1 = FUN_0042e130(&DAT_005cd334,*(int *)((int)this + 8));
  iVar1 = *(int *)(iVar1 + 0x24);
  if (-1 < iVar1) {
    *(int *)((int)this + 0xc) = in_stack_4 + 2000;
    _DAT_005867b0 = 0;
    _DAT_005867a8 = DAT_00586774;
    _DAT_005867a0 = *(undefined4 *)((int)this + 0xc);
    _DAT_005867b4 = 1;
    DAT_005867a4 = iVar1;
    FUN_00478c00(&DAT_00585408,iVar1);
  }
  return;
}


