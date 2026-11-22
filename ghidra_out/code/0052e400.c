
void __thiscall FUN_0052e400(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x48) != *(int *)this) {
    piVar4 = (int *)((int)this + 0x18);
    param_1 = 0x1e;
    do {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar4,0);
      if (((uVar2 != 0) && (*(int *)(uVar2 + 0x48) == *(int *)this)) &&
         (iVar3 = FUN_00420620(iVar1), iVar3 == 0)) {
        FUN_00405130(uVar2,iVar1);
      }
      this_00 = (void *)FUN_0052be20((int)this);
      if (this_00 != (void *)0x0) {
        FUN_0041ed80(this_00,0x19);
      }
      piVar4 = piVar4 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


