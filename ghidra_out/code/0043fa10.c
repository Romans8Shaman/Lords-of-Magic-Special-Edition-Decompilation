
void __cdecl op_addsatellite(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  float fStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  float fStack_a4;
  undefined4 auStack_a0 [19];
  undefined1 auStack_54 [72];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054992b;
  pvStack_c = ExceptionList;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    ExceptionList = &pvStack_c;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_d4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_d0 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_00404ab0(vm,6);
    uStack_d0 = uStack_c0;
    uStack_d4 = 0;
  }
  iVar1 = 0;
  iVar2 = FUN_004026a0(&uStack_d4,&uStack_b0,&uStack_cc,&fStack_c8);
  if (iVar2 != 0) {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar2 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar2;
      uStack_d4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
      uStack_d0 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(vm,6);
      uStack_d4 = 0;
      uStack_d0 = uStack_c0;
    }
    iVar2 = FUN_004026a0(&uStack_d4,&uStack_ac,&uStack_cc,&fStack_c8);
    if (iVar2 != 0) {
      if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
        iVar2 = *(int *)((int)vm + 0x54) + 1;
        *(int *)((int)vm + 0x54) = iVar2;
        uStack_d4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
        uStack_d0 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
      }
      else {
        FUN_00404ab0(vm,6);
        uStack_d4 = 0;
        uStack_d0 = uStack_c0;
      }
      iVar2 = FUN_004026a0(&uStack_d4,&uStack_b4,&uStack_cc,&fStack_c8);
      if (iVar2 != 0) {
        if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
          iVar2 = *(int *)((int)vm + 0x54) + 1;
          *(int *)((int)vm + 0x54) = iVar2;
          uStack_c4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
          uStack_c0 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
        }
        else {
          FUN_00404ab0(vm,6);
          uStack_c4 = 0;
        }
        iVar2 = FUN_004026a0(&uStack_c4,&uStack_a8,&uStack_d4,&fStack_a4);
        if (iVar2 == 0) {
          FUN_00404ab0(vm,0xe);
          ExceptionList = pvStack_c;
          return;
        }
        uVar3 = FUN_00482ac0(&DAT_005aa12c,uStack_ac,3);
        if (uVar3 == 0) {
          FUN_004d41c0(vm,s_city_1_doesn_t_exist_005566a0);
          ExceptionList = pvStack_c;
          return;
        }
        uVar4 = FUN_00482ac0(&DAT_005aa12c,uStack_b0,3);
        if (uVar4 == 0) {
          FUN_004d41c0(vm,s_city_2_doesn_t_exist_00556688);
          ExceptionList = pvStack_c;
          return;
        }
        iStack_b8 = 0;
        uStack_cc = 0;
        iStack_bc = 0;
        iVar2 = FUN_004a51c0(&DAT_005ae958,uStack_a8,uStack_b4);
        fStack_c8 = (float)FUN_004a8960(&DAT_005ae958,*(int *)(uVar3 + 0x1c),iVar2);
        iVar5 = FUN_004a8960(&DAT_005ae958,*(int *)(uVar4 + 0x1c),iVar2);
        for (iVar2 = FUN_004fbe60(&DAT_005ae974,0,2); iVar2 != 0;
            iVar2 = FUN_004fbe60(&DAT_005ae974,iVar2,2)) {
          if (*(int *)(iVar2 + 0x58) == 0xd) {
            if ((*(int *)(iVar2 + 0x78) == *(int *)(uVar3 + 0x28)) ||
               (*(int *)(iVar2 + 0x7c) == *(int *)(uVar3 + 0x28))) {
              if ((int)*(short *)(iVar2 + 0x56) == *(int *)(uVar3 + 0x80)) {
                iStack_bc = iStack_bc + 1;
              }
              else {
                iStack_b8 = iStack_b8 + 1;
              }
            }
            if ((*(int *)(iVar2 + 0x78) == *(int *)(uVar4 + 0x28)) ||
               (*(int *)(iVar2 + 0x7c) == *(int *)(uVar4 + 0x28))) {
              if ((int)*(short *)(iVar2 + 0x56) == *(int *)(uVar4 + 0x80)) {
                iVar1 = iVar1 + 1;
              }
              else {
                uStack_cc = uStack_cc + 1;
              }
            }
          }
        }
        if (iVar1 < iStack_bc) {
          iVar1 = *(int *)(uVar4 + 0x80);
        }
        else if (iStack_bc < iVar1) {
          iVar1 = *(int *)(uVar3 + 0x80);
        }
        else if (iStack_b8 < (int)uStack_cc) {
          iVar1 = *(int *)(uVar4 + 0x80);
        }
        else if ((int)uStack_cc < iStack_b8) {
          iVar1 = *(int *)(uVar3 + 0x80);
        }
        else if ((int)fStack_c8 < iVar5) {
          iVar1 = *(int *)(uVar4 + 0x80);
        }
        else if (iVar5 < (int)fStack_c8) {
          iVar1 = *(int *)(uVar3 + 0x80);
        }
        else {
          iVar1 = *(int *)(uVar4 + 0x80);
          if (*(int *)(uVar4 + 0x80) <= *(int *)(uVar3 + 0x80)) {
            iVar1 = *(int *)(uVar3 + 0x80);
          }
        }
        FUN_0043b990(auStack_a0,0xffffffff,(short)iVar1,(short)iVar1,0xd,1,uStack_ac,uStack_b0,
                     0xffffffff);
        uStack_4 = 0;
        FUN_0043c500(&DAT_005aa12c,uStack_a8,uStack_b4,auStack_54);
        uStack_4 = 0xffffffff;
        FUN_0043ba50(auStack_a0);
        ExceptionList = pvStack_c;
        return;
      }
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  ExceptionList = pvStack_c;
  return;
}


