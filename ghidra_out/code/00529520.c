
int __thiscall FUN_00529520(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00529180(this);
  if (uVar1 != 0) {
    if (-1 < *(int *)(uVar1 + 0x24)) {
      iVar2 = FUN_004beef0((void *)(param_1 + 0x34),*(int *)(uVar1 + 0x24));
      if (iVar2 != 0) {
        iVar2 = FUN_00529360(this,1,1,*(int *)(uVar1 + 0x24));
        if (iVar2 != 0) {
          return *(int *)(uVar1 + 0x24);
        }
        iVar2 = FUN_00529360(this,1,2,*(int *)(uVar1 + 0x24));
        if (iVar2 != 0) {
          return *(int *)(uVar1 + 0x24);
        }
      }
    }
    iVar2 = 0;
    if (0 < DAT_005aee6c) {
      do {
        iVar3 = FUN_004beef0((void *)(param_1 + 0x34),iVar2);
        if (iVar3 != 0) {
          iVar3 = FUN_00529360(this,1,1,iVar2);
          if (iVar3 != 0) goto LAB_005295e1;
        }
        iVar3 = FUN_004beef0((void *)(param_1 + 0x34),iVar2);
        if (iVar3 != 0) {
          iVar3 = FUN_00529360(this,1,2,iVar2);
          if (iVar3 != 0) {
LAB_005295e1:
            *(int *)(uVar1 + 0x24) = iVar2;
            return iVar2;
          }
        }
        iVar2 = iVar2 + 1;
        if (DAT_005aee6c <= iVar2) {
          return -1;
        }
      } while( true );
    }
  }
  return -1;
}


