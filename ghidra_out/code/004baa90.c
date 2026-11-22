
void __fastcall FUN_004baa90(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined *this;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iStack_18;
  int local_14;
  int iStack_10;
  int local_c [2];
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
  if ((iVar3 < 0) || (0xf < iVar3)) {
    this = (undefined *)0x0;
  }
  else {
    this = &DAT_005af194 + iVar3 * 0x1d84;
  }
  if (this != (undefined *)0x0) {
    FUN_004bbb70(this,&local_14,local_c);
    puVar1 = FUN_00485080(&DAT_005aa12c,local_14,0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      *(int *)(param_1 + 0x2c) = local_14;
      piVar2 = (int *)FUN_004fbe60(&DAT_005ae974,0,0);
      uVar4 = 0;
      for (; piVar2 != (int *)0x0; piVar2 = (int *)FUN_004fbe60(&DAT_005ae974,(int)piVar2,0)) {
        iVar3 = FUN_0051c170(piVar2);
        if (iVar3 != 0) {
          uVar4 = uVar4 + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
      if (*(int *)(param_1 + 0x38) < (int)uVar4) {
        if (*(int *)(param_1 + 0x30) != 0) {
          Ordinal_403(*(int *)(param_1 + 0x30),s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
        iVar3 = Ordinal_401(uVar4 << 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
        *(int *)(param_1 + 0x30) = iVar3;
        *(uint *)(param_1 + 0x38) = -(uint)(iVar3 != 0) & uVar4;
      }
      if ((*(int *)(param_1 + 0x38) != 0) && (uVar4 != 0)) {
        for (piVar2 = (int *)FUN_004fbe60(&DAT_005ae974,0,0); piVar2 != (int *)0x0;
            piVar2 = (int *)FUN_004fbe60(&DAT_005ae974,(int)piVar2,0)) {
          iVar5 = 0;
          iVar3 = FUN_0051c170(piVar2);
          if (iVar3 != 0) {
            iStack_18 = 0;
            *(int *)(*(int *)(param_1 + 0x34) * 0x10 + *(int *)(param_1 + 0x30)) = piVar2[10];
            *(int *)(*(int *)(param_1 + 0x34) * 0x10 + 4 + *(int *)(param_1 + 0x30)) = piVar2[7];
            *(undefined4 *)(*(int *)(param_1 + 0x34) * 0x10 + 8 + *(int *)(param_1 + 0x30)) =
                 0x7ffffffe;
            if (0 < piVar2[0x13]) {
              piVar6 = piVar2 + 0x33;
              do {
                iStack_10 = piVar2[10];
                if ((piVar6[7] & 8U) == 0) {
                  iVar3 = *piVar6;
                }
                else {
                  piVar6[7] = piVar6[7] & 0xfffffff7;
                  iVar3 = FUN_00521e00(piVar6 + -2);
                  if (iVar3 == 0) {
                    *piVar6 = 1;
                    iVar3 = 1;
                  }
                  else {
                    uStack_4 = *(undefined4 *)(iVar3 + 0x108);
                    if (((char)*(uint *)(iVar3 + 0x104) == '\x06') &&
                       ((*(uint *)(iVar3 + 0x104) & 0x100) == 0)) {
                      iVar3 = FUN_00522080(piVar6 + -2,iVar3,iStack_10,iVar5);
                    }
                    else {
                      *piVar6 = 1;
                      iVar3 = 1;
                    }
                  }
                }
                piVar6 = piVar6 + 0x13;
                iStack_18 = iStack_18 + iVar3;
                iVar5 = iVar5 + 1;
              } while (iVar5 < piVar2[0x13]);
            }
            *(int *)(*(int *)(param_1 + 0x34) * 0x10 + 0xc + *(int *)(param_1 + 0x30)) = iStack_18;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
          }
        }
        *(undefined4 *)(param_1 + 0x18) = 1;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 5;
  return;
}


