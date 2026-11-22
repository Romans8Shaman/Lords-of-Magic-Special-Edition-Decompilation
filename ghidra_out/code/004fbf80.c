
undefined4 __thiscall FUN_004fbf80(void *this,int param_1,int param_2)

{
  int *this_00;
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    if (param_2 == 0) {
      iVar2 = *(int *)((int)this + 0x24);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x28) + 1;
    }
    if (iVar2 <= *(int *)((int)this + 0x18)) {
      while ((this_00 = *(int **)(*(int *)((int)this + 8) + iVar2 * 4), this_00 == (int *)0x0 ||
             (iVar1 = (/*IC:004fbfb2*/**(code **)(*this_00 + 0x3c))(this_00), iVar1 != param_1))) {
        iVar2 = iVar2 + 1;
        if (*(int *)((int)this + 0x18) < iVar2) {
          return 0;
        }
      }
      *(int *)(*(int *)(*(int *)((int)this + 8) + iVar2 * 4) + 0x28) = iVar2;
      return *(undefined4 *)(*(int *)((int)this + 8) + iVar2 * 4);
    }
  }
  return 0;
}


