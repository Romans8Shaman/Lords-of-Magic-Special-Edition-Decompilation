
undefined4 __fastcall FUN_00407a10(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  undefined4 local_10;
  int local_4;
  
  local_10 = 0;
  bVar1 = false;
  iVar3 = FUN_00525fc0((int *)(param_1 + 0xc4));
  iVar2 = DAT_005ae98c;
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = -1;
  iVar6 = 9999;
  local_14 = 0;
  if (-1 < DAT_005ae98c) {
    do {
      iVar4 = FUN_004f6000(&DAT_005ae974,local_14);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) {
        local_4 = iVar4;
        if (*(int *)(iVar4 + 0x48) == *(int *)(param_1 + 0x48)) {
          iVar5 = FUN_00407d50(iVar4);
          if ((((iVar5 == 0) && (iVar5 = FUN_00420620(iVar4), iVar5 == 0)) &&
              (*(int *)(iVar4 + 0x68) != 0x32)) &&
             ((*(char *)(iVar4 + 0x5ac) == *(char *)(param_1 + 0x5ac) &&
              (*(int *)(iVar4 + 0x68) != 1)))) {
            *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar4 + 0x68);
            *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar4 + 0x6c);
            *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar4 + 0x70);
            *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar4 + 0x74);
            *(undefined4 *)(iVar4 + 0x7c) = 0;
            return 1;
          }
          if (*(int *)(iVar4 + 0x68) == 2) {
            bVar1 = true;
          }
        }
        else {
          iVar5 = FUN_00407d50(iVar4);
          if ((iVar5 == 0) && (iVar5 = FUN_00420620(iVar4), iVar5 == 0)) {
            if (iVar3 == -1) {
              iVar3 = *(int *)(iVar4 + 0x28);
              iVar5 = FUN_004a8a50(&DAT_005ae958,*(int *)(iVar4 + 0x1c),*(int *)(param_1 + 0x1c));
            }
            else {
              iVar5 = FUN_004a8a50(&DAT_005ae958,*(int *)(iVar4 + 0x1c),*(int *)(param_1 + 0x1c));
              if (iVar6 <= iVar5) goto LAB_00407b19;
              iVar3 = *(int *)(iVar4 + 0x28);
            }
            iVar6 = iVar5;
          }
        }
      }
LAB_00407b19:
      local_14 = local_14 + 1;
    } while (local_14 <= iVar2);
  }
  if ((iVar3 != -1) && (bVar1)) {
    *(undefined4 *)(param_1 + 0x68) = 2;
    *(int *)(param_1 + 0x6c) = iVar3;
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined4 *)(local_4 + 0x7c) = 0;
    local_10 = 1;
  }
  return local_10;
}


