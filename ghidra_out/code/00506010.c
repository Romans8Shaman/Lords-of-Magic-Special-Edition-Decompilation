
int __thiscall FUN_00506010(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 1;
  if (param_1 == 0) {
    iVar4 = 0;
    iVar2 = 0;
    if (0 < *(int *)((int)this + 0x4c)) {
      piVar3 = (int *)((int)this + 0xc4);
      do {
        iVar1 = FUN_00525fc0(piVar3);
        if (iVar1 == 2) {
          iVar1 = FUN_005228b0(piVar3,*(undefined4 *)((int)this + 0x28),iVar2);
          iVar4 = iVar4 + iVar1;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x13;
      } while (iVar2 < *(int *)((int)this + 0x4c));
      return iVar4;
    }
  }
  else if (param_1 == 1) {
    iVar2 = 0;
    iVar4 = 1;
    if (0 < *(int *)((int)this + 0x4c)) {
      piVar3 = (int *)((int)this + 0xc4);
      iVar4 = 1;
      do {
        iVar1 = FUN_00525fc0(piVar3);
        if (iVar1 == 2) {
          iVar1 = FUN_005228b0(piVar3,*(undefined4 *)((int)this + 0x28),iVar2);
          if (iVar4 < iVar1) {
            iVar4 = iVar1;
          }
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x13;
      } while (iVar2 < *(int *)((int)this + 0x4c));
      return iVar4;
    }
  }
  else if (param_1 == 2) {
    iVar2 = 0;
    iVar4 = 0xc;
    if (0 < *(int *)((int)this + 0x4c)) {
      piVar3 = (int *)((int)this + 0xc4);
      do {
        iVar1 = FUN_00525fc0(piVar3);
        if (iVar1 == 2) {
          iVar1 = FUN_005228b0(piVar3,*(undefined4 *)((int)this + 0x28),iVar2);
          if (iVar1 < iVar4) {
            iVar4 = iVar1;
          }
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x13;
      } while (iVar2 < *(int *)((int)this + 0x4c));
    }
  }
  return iVar4;
}


