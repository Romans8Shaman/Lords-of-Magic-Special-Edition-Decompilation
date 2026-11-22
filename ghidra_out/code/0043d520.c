
undefined4 __thiscall FUN_0043d520(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005498eb;
  local_c = ExceptionList;
  iVar6 = 0;
  iVar5 = *(int *)((int)this + 0x4c);
  piVar1 = param_1;
  if (0 < iVar5) {
    do {
      if (((uint)piVar1 & 1) != 0) {
        iVar6 = iVar6 + 1;
      }
      piVar1 = (int *)((uint)piVar1 >> 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (iVar6 == 0) {
    uVar2 = 0;
  }
  else {
    ExceptionList = &local_c;
    puVar3 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = FUN_00411610(puVar3);
    }
    uStack_4 = 0xffffffff;
    piVar1[0x11] = *(int *)((int)this + 0x44);
    piVar1[0x12] = *(int *)((int)this + 0x48);
    iStack_14 = 0;
    if (0 < *(int *)((int)this + 0x4c)) {
      puVar3 = (undefined4 *)((int)this + 0xe0);
      do {
        if (((uint)param_1 & 1) != 0) {
          piVar4 = puVar3 + -7;
          piVar7 = piVar1 + piVar1[0x13] * 0x13 + 0x31;
          for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar7 = *piVar4;
            piVar4 = piVar4 + 1;
            piVar7 = piVar7 + 1;
          }
          piVar1[0x13] = piVar1[0x13] + 1;
          puVar3[-1] = 0;
          *puVar3 = 0;
          puVar3[-2] = 0;
          puVar3[-7] = -1;
        }
        puVar3 = puVar3 + 0x13;
        param_1 = (int *)((uint)param_1 >> 1);
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < *(int *)((int)this + 0x4c));
    }
    iStack_10 = *(int *)((int)this + 0x4c);
    if (0 < iStack_10) {
      iVar5 = 1;
      piVar4 = (int *)((int)this + 0xc4);
      iStack_14 = 1;
      param_1 = piVar4;
      do {
        if (*piVar4 < 0) {
          if (iVar5 < *(int *)((int)this + 0x4c)) {
            do {
              iVar5 = iVar5 + 1;
              piVar7 = piVar4 + 0x13;
              piVar8 = piVar4;
              for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
                *piVar8 = *piVar7;
                piVar7 = piVar7 + 1;
                piVar8 = piVar8 + 1;
              }
              piVar4 = piVar4 + 0x13;
            } while (iVar5 < *(int *)((int)this + 0x4c));
            piVar4 = param_1;
            iVar5 = iStack_14;
          }
          iVar6 = *(int *)((int)this + 0x4c) + -1;
          *(int *)((int)this + 0x4c) = iVar6;
          iVar6 = iVar6 * 0x4c;
          *(undefined4 *)((int)this + iVar6 + 0xdc) = 0;
          *(undefined4 *)((int)this + iVar6 + 0xe0) = 0;
          *(undefined4 *)((int)this + iVar6 + 0xd8) = 0;
        }
        else {
          piVar4 = piVar4 + 0x13;
          iVar5 = iVar5 + 1;
          param_1 = piVar4;
          iStack_14 = iVar5;
        }
        iStack_10 = iStack_10 + -1;
      } while (iStack_10 != 0);
    }
    FUN_004a7d50(&DAT_005ae958,piVar1,*(int *)((int)this + 0x1c));
    if (piVar1[0x12] == DAT_005a7d8c) {
      FUN_004d05e0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8);
    }
    (/*IC:0043d6cc*/**(code **)(*piVar1 + 0x2c))(piVar1);
    uVar2 = 1;
  }
  ExceptionList = local_c;
  return uVar2;
}


