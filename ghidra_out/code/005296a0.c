
int __thiscall FUN_005296a0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00529180(this);
  if (uVar1 != 0) {
    if (-1 < *(int *)(uVar1 + 0x1c)) {
      iVar2 = FUN_004beef0((void *)(param_1 + 0x34),*(int *)(uVar1 + 0x1c));
      if (iVar2 != 0) {
        iVar2 = FUN_00529360(this,2,2,*(int *)(uVar1 + 0x1c));
        if (iVar2 != 0) {
          return *(int *)(uVar1 + 0x1c);
        }
        iVar2 = FUN_00529360(this,2,1,*(int *)(uVar1 + 0x1c));
        if (iVar2 != 0) {
          return *(int *)(uVar1 + 0x1c);
        }
      }
    }
    iVar2 = 0;
    if (0 < DAT_005aee6c) {
      do {
        iVar3 = FUN_004beef0((void *)(param_1 + 0x34),iVar2);
        if (iVar3 != 0) {
          iVar3 = FUN_00529360(this,2,2,iVar2);
          if (iVar3 != 0) goto LAB_00529761;
        }
        iVar3 = FUN_004beef0((void *)(param_1 + 0x34),iVar2);
        if (iVar3 != 0) {
          iVar3 = FUN_00529360(this,2,1,iVar2);
          if (iVar3 != 0) {
LAB_00529761:
            *(int *)(uVar1 + 0x1c) = iVar2;
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


