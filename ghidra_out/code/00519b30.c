
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00519b30(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  longlong lVar9;
  int iStack_e0;
  float afStack_c8 [4];
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 local_9c [20];
  undefined4 local_4c;
  float afStack_38 [11];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054c37b;
  local_c = ExceptionList;
  piVar1 = *(int **)((int)this + 0x202ac);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    ExceptionList = &local_c;
    *(int *)((int)this + 0x202b8) =
         (int)((short *)*piVar1)[*(int *)((int)this + 0x202c0) * 4] - (int)*(short *)*piVar1;
    *(int *)((int)this + 0x202bc) =
         (int)*(short *)(piVar1[*(int *)((int)this + 0x202c4)] + 2) - (int)*(short *)(*piVar1 + 2);
    if (param_1 != 0) {
      local_9c[0] = 100;
      local_4c = 0;
      (/*IC:00519bc9*/**(code **)(*DAT_00585174 + 0x14))(DAT_00585174,0,0,0,0x400,local_9c);
      iVar5 = DAT_00583650 + 0x10;
      uStack_4 = 0;
      if (DAT_005ae9b4 < 1) {
        ExceptionList = local_c;
        return 0;
      }
      iStack_e0 = 0;
      DAT_00583650 = iVar5;
      if (0 < *(int *)((int)this + 0x202b0)) {
        do {
          iVar5 = 0;
          if (0 < *(int *)((int)this + 0x202b4)) {
            do {
              pfVar3 = (float *)FUN_004a5f40(&DAT_005ae958,afStack_38,iVar5,iStack_e0);
              pfVar7 = afStack_c8;
              for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                *pfVar7 = *pfVar3;
                pfVar3 = pfVar3 + 1;
                pfVar7 = pfVar7 + 1;
              }
              FUN_00469b10(this,afStack_c8);
              fVar8 = (float10)fStack_a8 * (float10)_DAT_00587730 +
                      (float10)fStack_ac * (float10)_DAT_0058772c +
                      (float10)fStack_b0 * (float10)_DAT_00587728;
              if ((NAN(fVar8) || NAN((float10)_DAT_0054e9a0)) || fVar8 < (float10)_DAT_0054e9a0) {
                lVar9 = __ftol((float10)(*(int *)((int)this + 0x202a4) << 0x10) -
                               (float10)*(int *)((int)this + 0x202a8) * fVar8 *
                               (float10)_DAT_0054e998);
                iVar6 = (int)lVar9;
              }
              else {
                iVar6 = *(int *)((int)this + 0x202a4) << 0x10;
              }
              if (iVar6 < 0) {
                iVar6 = 0;
              }
              if (0xff0000 < iVar6) {
                iVar6 = 0xff0000;
              }
              iVar4 = FUN_004a5170(&DAT_005ae958,iVar5,iStack_e0);
              *(int *)(*(int *)(*(int *)((int)this + 0x202ac) + iStack_e0 * 4) + 4 + iVar5 * 8) =
                   (0x80 - *(short *)(DAT_005ae9ac + 2 + iVar4 * 8)) * iVar6 >> 7;
              lVar9 = __ftol((float10)afStack_c8[3]);
              *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + iStack_e0 * 4) + iVar5 * 8) =
                   (short)lVar9;
              lVar9 = __ftol((float10)fStack_b8);
              iVar5 = iVar5 + 1;
              *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + iStack_e0 * 4) + -6 + iVar5 * 8) =
                   (short)lVar9;
            } while (iVar5 < *(int *)((int)this + 0x202b4));
          }
          iStack_e0 = iStack_e0 + 1;
        } while (iStack_e0 < *(int *)((int)this + 0x202b0));
      }
      FUN_00511510((int)this);
      DAT_00583650 = DAT_00583650 + -0x10;
    }
    uVar2 = 1;
  }
  ExceptionList = local_c;
  return uVar2;
}


