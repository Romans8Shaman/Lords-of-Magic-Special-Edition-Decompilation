
undefined4 __thiscall FUN_00527e90(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = param_1;
  iVar7 = *(int *)this;
  if (((iVar7 < 0) || (DAT_005cd2f0 <= iVar7)) || (DAT_005cd2f4 == 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = DAT_005cd2f4 + iVar7 * 1000;
  }
  if (iVar7 == 0) {
    FUN_005047d0(s_EffectiveValue_of_unit___no_type_005742a4);
    return 0;
  }
  if (param_1 < 0x96) {
    if ((param_1 < 0) || (*(int *)(&DAT_005d3354 + param_1 * 8) != 0)) {
      return 0;
    }
    param_1 = *(int *)(*(int *)(&DAT_005d3350 + param_1 * 8) + iVar7);
  }
  else {
    iVar7 = FUN_00527200(this,param_1,&param_1);
    if (iVar7 == 0) {
      return 0;
    }
  }
  iVar7 = 0;
  for (piVar1 = *(int **)((int)this + 0x18); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
    if (*piVar1 == iVar3) {
      iVar7 = iVar7 + piVar1[1];
    }
  }
  uVar4 = FUN_005291e0((int)this);
  if (uVar4 != 0) {
    iVar2 = *(int *)(uVar4 + 0x44);
    iVar6 = 0;
    if (0 < iVar2) {
      puVar5 = (undefined4 *)(uVar4 + 0x2c);
      iVar8 = iVar2;
      do {
        for (piVar1 = (int *)*puVar5; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
          if (*piVar1 == iVar3) {
            iVar6 = iVar6 + piVar1[1];
          }
        }
        puVar5 = puVar5 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (iVar2 != 0) {
      iVar7 = iVar7 + iVar6 / iVar2;
    }
  }
  *param_2 = iVar7 + param_1;
  return 1;
}


