
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00527fa0(void *this,int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int local_4;
  
  iVar1 = param_1;
  iVar6 = *(int *)this;
  if (((iVar6 < 0) || (DAT_005cd2f0 <= iVar6)) || (DAT_005cd2f4 == 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = DAT_005cd2f4 + iVar6 * 1000;
  }
  if (iVar6 == 0) {
    FUN_005047d0(s_EffectiveValue_of_unit___no_type_005742a4);
    return 0;
  }
  if (param_1 < 0x96) {
    if (-1 < param_1) {
      if (*(int *)(&DAT_005d3354 + param_1 * 8) == 4) {
        param_1 = *(int *)(*(int *)(&DAT_005d3350 + param_1 * 8) + iVar6);
      }
      else {
        if (*(int *)(&DAT_005d3354 + param_1 * 8) != 3) {
          return 0;
        }
        lVar8 = __ftol((float10)*(float *)(*(int *)(&DAT_005d3350 + param_1 * 8) + iVar6) *
                       (float10)_DAT_0054e9d0);
        param_1 = (int)lVar8;
      }
LAB_00528037:
      piVar2 = *(int **)((int)this + 0x18);
      iVar6 = 0;
      local_4 = 0;
      if (piVar2 != (int *)0x0) {
        do {
          if (*piVar2 == iVar1) {
            iVar6 = iVar6 + piVar2[1] * 0x100;
          }
          piVar2 = (int *)piVar2[7];
        } while (piVar2 != (int *)0x0);
        local_4 = iVar6;
      }
      uVar3 = FUN_005291e0((int)this);
      if (uVar3 != 0) {
        iVar6 = *(int *)(uVar3 + 0x44);
        iVar5 = 0;
        if (0 < iVar6) {
          puVar4 = (undefined4 *)(uVar3 + 0x2c);
          iVar7 = iVar6;
          do {
            for (piVar2 = (int *)*puVar4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
              if (*piVar2 == iVar1) {
                iVar5 = iVar5 + piVar2[1] * 0x100;
              }
            }
            puVar4 = puVar4 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (iVar6 != 0) {
          local_4 = local_4 + iVar5 / iVar6;
        }
      }
      *param_2 = local_4 + param_1;
      return 1;
    }
  }
  else {
    iVar6 = FUN_005271e0(this,param_1,&param_1);
    if (iVar6 != 0) goto LAB_00528037;
  }
  return 0;
}


