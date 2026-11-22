
undefined4 __thiscall FUN_0040b4d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0xc) == 0) {
    iVar3 = 0;
    iVar1 = *(int *)this;
    if (*(int *)this != 0) {
      do {
        iVar2 = iVar1;
        if (*(int *)(iVar2 + 0x48) == param_1) {
          if (iVar3 == 0) {
            *(undefined4 *)this = *(undefined4 *)(iVar2 + 0x44);
            FUN_0040b5d0(this,iVar2);
            return 1;
          }
          *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar2 + 0x44);
          FUN_0040b5d0(this,iVar2);
          return 1;
        }
        iVar1 = *(int *)(iVar2 + 0x44);
        iVar3 = iVar2;
      } while (*(int *)(iVar2 + 0x44) != 0);
      return 0;
    }
  }
  else if (param_1 == DAT_00555728) {
    DAT_00578138 = 1;
    return 1;
  }
  return 0;
}


