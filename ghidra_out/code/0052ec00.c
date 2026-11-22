
void __thiscall FUN_0052ec00(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_0052e1e0(this);
  if (0 < iVar1) {
    piVar4 = (int *)((int)this + 0x18);
    iVar1 = 0x1e;
    do {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar4,0);
      if (((uVar2 != 0) && (*(int *)(uVar2 + 0x48) == *(int *)this)) &&
         (uVar3 = FUN_0052b1f0((int *)(uVar2 + 0xc4)), uVar3 != 0)) {
        FUN_00409c50(uVar2,param_1);
      }
      piVar4 = piVar4 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


