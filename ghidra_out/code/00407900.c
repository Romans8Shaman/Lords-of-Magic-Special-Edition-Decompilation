
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00407900(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  
  uVar6 = 0;
  uVar2 = FUN_0047c9e0(&DAT_005aa12c,*(int *)(param_1 + 0x48));
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_00525fc0((int *)(param_1 + 0xc4));
  iVar1 = DAT_005ae98c;
  if (-1 < iVar3) {
    return 0;
  }
  iVar3 = 0;
  if (-1 < DAT_005ae98c) {
    do {
      iVar4 = FUN_004f6000(&DAT_005ae974,iVar3);
      if (((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) &&
         (*(int *)(iVar4 + 0x48) == *(int *)(param_1 + 0x48))) {
        iVar5 = FUN_00407d50(iVar4);
        if (iVar5 == 0) {
          iVar5 = FUN_00420620(iVar4);
          if (((iVar5 == 0) && (*(int *)(iVar4 + 0x28) != *(int *)(param_1 + 0x28))) &&
             ((*(char *)(iVar4 + 0x5ac) == *(char *)(param_1 + 0x5ac) &&
              (*(int *)(iVar4 + 0x68) == 1)))) {
            fVar7 = FUN_004a89d0(0x5ae958,*(int *)(iVar4 + 0x1c),*(int *)(param_1 + 0x1c));
            if ((NAN(fVar7) || NAN((float10)_DAT_0054d388)) || fVar7 <= (float10)_DAT_0054d388) {
              *(undefined4 *)(iVar4 + 0x68) = 2;
              *(undefined4 *)(iVar4 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
              *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(param_1 + 0x70);
              *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(param_1 + 0x74);
              *(byte *)(iVar4 + 0x78) = *(byte *)(iVar4 + 0x78) & 0xfc;
              *(undefined4 *)(iVar4 + 0x7c) = 0;
              uVar6 = 1;
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar1);
  }
  return uVar6;
}


