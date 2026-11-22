
undefined4 __thiscall FUN_004a5270(void *this,LPCSTR param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = FUN_004a52e0(this,piVar1,1);
  if (iVar2 == 0) {
    FUN_005394d0(piVar1);
    return 0;
  }
  FUN_005394d0(piVar1);
  FUN_004a9ca0(this,1);
  FUN_004c5ef0(&DAT_005aef04,*(int *)((int)this + 0x6c),*(int *)((int)this + 0x70));
  return 1;
}


