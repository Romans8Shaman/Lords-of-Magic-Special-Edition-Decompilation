
void __cdecl FUN_0053ec10(int param_1,int param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0054efc8;
  puStack_10 = &LAB_0053b9f8;
  local_14 = ExceptionList;
  if (((*(int *)(param_3 + 4) != 0) && (*(char *)(*(int *)(param_3 + 4) + 8) != '\0')) &&
     (*(int *)(param_3 + 8) != 0)) {
    piVar1 = (int *)(param_2 + 0xc + *(int *)(param_3 + 8));
    local_8 = 0;
    if ((*param_3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        if (*(int *)(param_4 + 0x18) == 0) {
          ExceptionList = &local_14;
          iVar2 = FUN_00544ae0(*(void **)(param_1 + 0x18),1);
          if ((iVar2 != 0) && (iVar2 = FUN_00544b00(piVar1,1), iVar2 != 0)) {
            uVar4 = *(uint *)(param_4 + 0x14);
            puVar3 = (undefined4 *)FUN_0053eea0(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_00544310(piVar1,puVar3,uVar4);
            ExceptionList = local_14;
            return;
          }
        }
        else {
          ExceptionList = &local_14;
          iVar2 = FUN_00544ae0(*(void **)(param_1 + 0x18),1);
          if (((iVar2 != 0) && (iVar2 = FUN_00544b00(piVar1,1), iVar2 != 0)) &&
             (iVar2 = FUN_00544b20(*(FARPROC *)(param_4 + 0x18)), iVar2 != 0)) {
            if ((*param_4 & 4) == 0) {
              FUN_0053eea0(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
              FUN_005399b0(piVar1,*(undefined **)(param_4 + 0x18));
              ExceptionList = local_14;
              return;
            }
            FUN_0053eea0(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_005399b0(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
        }
      }
      else {
        ExceptionList = &local_14;
        iVar2 = FUN_00544ae0(*(void **)(param_1 + 0x18),1);
        if ((iVar2 != 0) && (iVar2 = FUN_00544b00(piVar1,1), iVar2 != 0)) {
          FUN_00544310(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
          if (*(int *)(param_4 + 0x14) != 4) {
            ExceptionList = local_14;
            return;
          }
          if (*piVar1 == 0) {
            ExceptionList = local_14;
            return;
          }
          iVar2 = FUN_0053eea0(*piVar1,(int *)(param_4 + 8));
          *piVar1 = iVar2;
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      iVar2 = FUN_00544ae0(*(void **)(param_1 + 0x18),1);
      if ((iVar2 != 0) && (iVar2 = FUN_00544b00(piVar1,1), iVar2 != 0)) {
        iVar2 = *(int *)(param_1 + 0x18);
        *piVar1 = iVar2;
        iVar2 = FUN_0053eea0(iVar2,(int *)(param_4 + 8));
        *piVar1 = iVar2;
        ExceptionList = local_14;
        return;
      }
    }
    FUN_0053f160();
  }
  ExceptionList = local_14;
  return;
}


