
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00517a50(void *this,int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  int local_5c;
  float local_58 [4];
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_2c [11];
  
  iVar4 = *(int *)((int)this + 0x202c0);
  if (param_1 < 0) {
    param_1 = param_1 % iVar4 + iVar4;
  }
  else if (iVar4 <= param_1) {
    param_1 = param_1 % iVar4;
  }
  iVar4 = *(int *)((int)this + 0x202c4);
  if (param_2 < 0) {
    param_2 = param_2 % iVar4 + iVar4;
  }
  else if (iVar4 <= param_2) {
    param_2 = param_2 % iVar4;
  }
  pfVar1 = (float *)FUN_004a5f40(&DAT_005ae958,local_2c,param_1,param_2);
  pfVar5 = local_58;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_00469b10(this,local_58);
  fVar7 = (float10)local_38 * (float10)_DAT_00587730 +
          (float10)local_3c * (float10)_DAT_0058772c + (float10)local_40 * (float10)_DAT_00587728;
  if ((NAN(fVar7) || NAN((float10)_DAT_0054e9a0)) || fVar7 < (float10)_DAT_0054e9a0) {
    lVar8 = __ftol((float10)(*(int *)((int)this + 0x202a4) << 0x10) -
                   (float10)*(int *)((int)this + 0x202a8) * fVar7 * (float10)_DAT_0054e998);
    iVar4 = (int)lVar8;
  }
  else {
    iVar4 = *(int *)((int)this + 0x202a4) << 0x10;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (0xff0000 < iVar4) {
    iVar4 = 0xff0000;
  }
  iVar2 = FUN_004a5170(&DAT_005ae958,param_1,param_2);
  iVar4 = (0x80 - *(short *)(DAT_005ae9ac + 2 + iVar2 * 8)) * iVar4 >> 7;
  lVar8 = __ftol((float10)local_58[3]);
  *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) + param_1 * 8) = (short)lVar8;
  lVar8 = __ftol((float10)local_48);
  *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) + 2 + param_1 * 8) = (short)lVar8
  ;
  *(int *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) + 4 + param_1 * 8) = iVar4;
  if (*(int *)((int)this + 0x218) != 0) {
    if (param_1 == 0) {
      pfVar1 = (float *)FUN_004a5f40(&DAT_005ae958,local_2c,*(int *)((int)this + 0x202c0),param_2);
      pfVar5 = local_58;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        pfVar5 = pfVar5 + 1;
      }
      FUN_00469b10(this,local_58);
      lVar8 = __ftol((float10)local_58[3]);
      *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) +
                *(int *)((int)this + 0x202c0) * 8) = (short)lVar8;
      lVar8 = __ftol((float10)local_48);
      *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) + 2 +
                *(int *)((int)this + 0x202c0) * 8) = (short)lVar8;
      *(int *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) + 4 +
              *(int *)((int)this + 0x202c0) * 8) = iVar4;
    }
    if (param_2 == 0) {
      pfVar1 = (float *)FUN_004a5f40(&DAT_005ae958,local_2c,param_1,*(int *)((int)this + 0x202c4));
      pfVar5 = local_58;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        pfVar5 = pfVar5 + 1;
      }
      FUN_00469b10(this,local_58);
      lVar8 = __ftol((float10)local_58[3]);
      *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + *(int *)((int)this + 0x202c4) * 4) +
                param_1 * 8) = (short)lVar8;
      lVar8 = __ftol((float10)local_48);
      *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + *(int *)((int)this + 0x202c4) * 4) + 2 +
                param_1 * 8) = (short)lVar8;
      *(int *)(*(int *)(*(int *)((int)this + 0x202ac) + *(int *)((int)this + 0x202c4) * 4) + 4 +
              param_1 * 8) = iVar4;
    }
    if ((param_1 == 0) && (param_2 == 0)) {
      pfVar1 = (float *)FUN_004a5f40(&DAT_005ae958,local_2c,*(int *)((int)this + 0x202c0),
                                     *(int *)((int)this + 0x202c4));
      pfVar5 = local_58;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        pfVar5 = pfVar5 + 1;
      }
      FUN_00469b10(this,local_58);
      lVar8 = __ftol((float10)local_58[3]);
      *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + *(int *)((int)this + 0x202c4) * 4) +
                *(int *)((int)this + 0x202c0) * 8) = (short)lVar8;
      lVar8 = __ftol((float10)local_48);
      *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + *(int *)((int)this + 0x202c4) * 4) + 2 +
                *(int *)((int)this + 0x202c0) * 8) = (short)lVar8;
      *(int *)(*(int *)(*(int *)((int)this + 0x202ac) + *(int *)((int)this + 0x202c4) * 4) + 4 +
              *(int *)((int)this + 0x202c0) * 8) = iVar4;
    }
  }
  param_2 = param_2 + -1;
  local_5c = 2;
  do {
    iVar4 = param_2;
    if (param_2 < 0) {
      if (*(int *)((int)this + 0x218) != 0) {
        iVar4 = param_2 + *(int *)((int)this + 0x202c4);
        goto LAB_00517db0;
      }
    }
    else {
LAB_00517db0:
      iVar2 = param_1 + -1;
      iVar6 = 2;
      do {
        iVar3 = iVar2;
        if (iVar2 < 0) {
          if (*(int *)((int)this + 0x218) != 0) {
            iVar3 = iVar2 + *(int *)((int)this + 0x202c0);
            goto LAB_00517dd2;
          }
        }
        else {
LAB_00517dd2:
          FUN_00512350(this,iVar3,iVar4);
        }
        iVar2 = iVar2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    param_2 = param_2 + 1;
    local_5c = local_5c + -1;
    if (local_5c == 0) {
      return;
    }
  } while( true );
}


