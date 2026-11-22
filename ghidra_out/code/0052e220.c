
void __thiscall FUN_0052e220(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *this_00;
  int *piVar5;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x48) == *(int *)this) {
    if ((~*(uint *)(param_1 + 0x30) & 0x100) != 0) {
      FUN_0052b6f0(this,*(int *)(param_1 + 0x28),0x100);
      return;
    }
  }
  else {
    iVar3 = FUN_0052e1e0(this);
    if (0 < iVar3) {
      bVar1 = true;
      iVar3 = FUN_00420620(param_1);
      if (iVar3 != 0) {
        iVar3 = FUN_00458170();
        if (iVar3 != 0) {
          bVar1 = false;
        }
      }
      if (bVar1) {
        piVar5 = (int *)((int)this + 0x18);
        param_1 = 0x1e;
        do {
          uVar4 = FUN_00482ac0(&DAT_005aa12c,*piVar5,0);
          if ((uVar4 != 0) && (*(int *)(uVar4 + 0x48) == *(int *)this)) {
            iVar3 = FUN_00420620(uVar4);
            if (iVar3 == 0) {
              FUN_00404f90(uVar4,iVar2);
              this_00 = (void *)FUN_0052be20((int)this);
              if (this_00 != (void *)0x0) {
                FUN_0041ed80(this_00,0x19);
              }
            }
          }
          piVar5 = piVar5 + 3;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
    }
  }
  return;
}


