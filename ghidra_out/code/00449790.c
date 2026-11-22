
undefined4 FUN_00449790(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *this;
  int iVar4;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    iVar3 = 0;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      this = (int *)(param_1 + 0xc4);
      do {
        iVar2 = *this;
        if (((iVar2 < 0) || (DAT_005cd2f0 <= iVar2)) || (DAT_005cd2f4 == 0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = DAT_005cd2f4 + iVar2 * 1000;
        }
        if ((iVar2 != 0) && (FUN_00527e90(this,0x2e,&param_1), param_1 <= this[3])) {
          iVar3 = iVar3 + 1;
        }
        iVar4 = iVar4 + 1;
        this = this + 0x13;
      } while (iVar4 < *(int *)(iVar1 + 0x4c));
    }
    if (iVar3 == *(int *)(iVar1 + 0x4c)) {
      return 0;
    }
    if (iVar3 == 0) {
      return 2;
    }
    if (0 < iVar3) {
      return 3;
    }
  }
  return 1;
}


