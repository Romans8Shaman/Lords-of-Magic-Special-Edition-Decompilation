
void __fastcall FUN_00407e80(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iStack_7c;
  int local_78 [30];
  
  iVar1 = DAT_005ae98c;
  iVar2 = DAT_005ae998;
  if (((DAT_005787b0 == 0) || (*(int *)(DAT_005787b0 + 0x74) != *(int *)((int)param_1 + 0x28))) ||
     (*(char *)(DAT_005787b0 + 0x78) == '\0')) {
    for (; iVar2 <= iVar1; iVar2 = iVar2 + 1) {
      iVar4 = FUN_004f6000(&DAT_005ae974,iVar2);
      if ((((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) &&
          ((iVar5 = FUN_00407d50(iVar4), iVar5 == 0 &&
           ((iVar5 = FUN_00420620(iVar4), iVar5 == 0 &&
            (*(int *)(iVar4 + 0x74) == *(int *)((int)param_1 + 0x28))))))) &&
         (*(char *)(iVar4 + 0x78) != '\0')) {
        iStack_7c = FUN_00407d90(param_1,local_78);
        if (iStack_7c < 1) {
          return;
        }
        piVar6 = local_78;
        do {
          uVar3 = FUN_00482ac0(&DAT_005aa12c,*piVar6,0);
          if (uVar3 != 0) {
            *(undefined4 *)(uVar3 + 0x68) = 0x15;
            *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(iVar4 + 0x28);
            *(undefined4 *)(uVar3 + 0x70) = 0xffffffff;
            *(byte *)(uVar3 + 0x78) = *(byte *)(uVar3 + 0x78) & 0xfc;
            *(undefined4 *)(uVar3 + 0x7c) = 0;
          }
          piVar6 = piVar6 + 1;
          iStack_7c = iStack_7c + -1;
        } while (iStack_7c != 0);
        return;
      }
    }
  }
  else {
    iVar2 = FUN_00407d90(param_1,local_78);
    if (0 < iVar2) {
      piVar6 = local_78;
      do {
        uVar3 = FUN_00482ac0(&DAT_005aa12c,*piVar6,0);
        if (uVar3 != 0) {
          *(undefined4 *)(uVar3 + 0x68) = 0x15;
          *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(DAT_005787b0 + 0x28);
          *(undefined4 *)(uVar3 + 0x70) = 0xffffffff;
          *(byte *)(uVar3 + 0x78) = *(byte *)(uVar3 + 0x78) & 0xfc;
          *(undefined4 *)(uVar3 + 0x7c) = 0;
        }
        piVar6 = piVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  return;
}


