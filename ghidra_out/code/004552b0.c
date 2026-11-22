
undefined4 __thiscall FUN_004552b0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_1,1);
  if (uVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(uVar2 + 0x48);
  if (*(int *)this == iVar1) {
    return 1;
  }
  if (*(int *)((int)this + 4) == iVar1) {
    return 1;
  }
  if (*(int *)((int)this + 8) == iVar1) {
    return 1;
  }
  if (*(int *)((int)this + 0xc) == iVar1) {
    return 1;
  }
  return (uint)(*(int *)((int)this + 0x10) == iVar1);
}


