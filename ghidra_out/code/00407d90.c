
int __thiscall FUN_00407d90(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 unused_reg_1;
  int iVar6;
  
  iVar1 = DAT_005ae98c;
  iVar6 = DAT_005ae998;
  do {
    iVar2 = -1;
    if (iVar1 < iVar6) {
LAB_00407ddd:
      if (iVar2 < 0) {
        return 0;
      }
      iVar6 = 0;
      iVar2 = iVar2 + 1;
      if (iVar2 <= iVar1) {
        do {
          iVar3 = FUN_004f6000(&DAT_005ae974,iVar2);
          if (((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
               ((*(int *)(iVar3 + 0x48) == *(int *)((int)this + 0x48) &&
                (((~*(uint *)(iVar3 + 0x30) & 0x100) != 0 &&
                 (uVar4 = FUN_00407d60(iVar3), uVar4 == 0)))))) &&
              (uVar4 = FUN_00407d80(iVar3), uVar4 == 0)) &&
             (iVar5 = FUN_00420620(iVar3), iVar5 == 0)) {
            uVar4 = FUN_00431160(iVar3,unused_reg_1,0);
            if (uVar4 != 0) {
              return iVar6;
            }
            iVar6 = iVar6 + 1;
            *param_1 = *(undefined4 *)(iVar3 + 0x28);
            param_1 = param_1 + 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 <= iVar1);
      }
      return iVar6;
    }
    iVar2 = FUN_004f6000(&DAT_005ae974,iVar6);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) &&
       (*(int *)(iVar2 + 0x28) == *(int *)((int)this + 0x28))) {
      iVar2 = iVar6;
      goto LAB_00407ddd;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}


