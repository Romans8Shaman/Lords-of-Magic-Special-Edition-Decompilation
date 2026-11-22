
void __thiscall FUN_0052e320(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x48) != *(int *)this) {
    piVar4 = (int *)((int)this + 0x18);
    iVar3 = 0x1e;
    do {
      uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar4,0);
      if (((uVar1 != 0) && (*(int *)(uVar1 + 0x48) == *(int *)this)) &&
         (iVar2 = FUN_00420620(param_1), iVar2 == 0)) {
        FUN_00405020(uVar1,param_1);
      }
      piVar4 = piVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


