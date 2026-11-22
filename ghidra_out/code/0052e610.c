
void __thiscall FUN_0052e610(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = param_1;
  if ((*(int *)(param_1 + 0x48) != *(int *)this) && (iVar2 = FUN_0052e580(this), iVar2 != -1)) {
    uVar3 = FUN_00482ac0(&DAT_005aa12c,iVar2,0);
    if ((uVar3 != 0) && (*(int *)(uVar3 + 0x48) == *(int *)this)) {
      FUN_004051f0(uVar3,param_1);
    }
    piVar5 = (int *)((int)this + 0x18);
    param_1 = 0x1e;
    do {
      if ((((*piVar5 != iVar2) && (uVar3 = FUN_00482ac0(&DAT_005aa12c,*piVar5,0), uVar3 != 0)) &&
          (*(int *)(uVar3 + 0x48) == *(int *)this)) && (iVar4 = FUN_00420620(iVar1), iVar4 == 0)) {
        FUN_004076f0(*(int *)(uVar3 + 0x28),*(int *)(iVar1 + 0x28),*(int *)(iVar1 + 0x1c));
      }
      piVar5 = piVar5 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


