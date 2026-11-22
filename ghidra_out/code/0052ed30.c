
void __thiscall FUN_0052ed30(void *this,undefined2 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_0052e1e0(this);
  if (0 < iVar1) {
    piVar3 = (int *)((int)this + 0x18);
    iVar1 = 0x1e;
    do {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar3,0);
      if ((uVar2 != 0) && (*(int *)(uVar2 + 0x48) == *(int *)this)) {
        FUN_00404f60(uVar2,param_1);
      }
      piVar3 = piVar3 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


