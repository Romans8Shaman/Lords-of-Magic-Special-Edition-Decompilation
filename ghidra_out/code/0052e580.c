
undefined4 __fastcall FUN_0052e580(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar4 = 0;
  local_8 = 0xffffffff;
  iVar5 = 0;
  piVar3 = param_1 + 6;
  do {
    uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar3,0);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x48) == *param_1)) {
      iVar2 = FUN_00525fc0((int *)(uVar1 + 0xc4));
      if (iVar2 == 2) {
        iVar2 = FUN_005228b0((void *)(uVar1 + 0xc4 + iVar5),*(undefined4 *)(uVar1 + 0x28),0);
        if (iVar4 < iVar2) {
          local_8 = *(undefined4 *)(uVar1 + 0x28);
          iVar4 = iVar2;
        }
      }
    }
    iVar5 = iVar5 + 0x4c;
    piVar3 = piVar3 + 3;
  } while (iVar5 < 0x8e8);
  return local_8;
}


