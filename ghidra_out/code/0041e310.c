
undefined4 __thiscall
FUN_0041e310(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x4c) < 1) {
    return 0;
  }
  iVar3 = (int)this + 0xc4;
  do {
    if (iVar2 != param_2) {
      iVar1 = FUN_00525e80(iVar3);
      if (iVar1 != 0) {
        iVar1 = FUN_0042c680(iVar3);
        if (iVar1 < 3) {
          *param_3 = *(undefined4 *)((int)this + 0x28);
          *param_4 = iVar2;
          return 1;
        }
      }
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x4c;
  } while (iVar2 < *(int *)((int)this + 0x4c));
  return 0;
}


