
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004f3b50(uint *param_1,int param_2,float param_3)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined2 uVar5;
  float10 fVar6;
  float10 fVar7;
  longlong lVar8;
  uint local_8;
  
  bVar2 = *(byte *)(param_2 + 0xb);
  uVar5 = (undefined2)(local_8 >> 0x10);
  local_8 = local_8 & 0xffff0000;
  if (bVar2 < 2) {
    bVar3 = NAN(_DAT_0054de60);
    bVar4 = _DAT_0054de60 <= param_3;
    *param_1 = local_8;
    param_1[1] = (uint)((!NAN(param_3) && !bVar3) && bVar4);
    return;
  }
  if ((*(byte *)(param_2 + 1) & 0x80) == 0) {
    fVar7 = (float10)(int)(0x168 / (ulonglong)(longlong)(int)((uint)bVar2 * 2)) -
            (((float10)param_3 - (float10)_DAT_0054de5c) - (float10)_DAT_0054de48);
    if ((!NAN(fVar7) && !NAN((float10)_DAT_0054de4c)) && (float10)_DAT_0054de4c <= fVar7) {
      if ((!NAN(fVar7) && !NAN((float10)_DAT_0054de48)) && (float10)_DAT_0054de48 <= fVar7) {
        fVar7 = fVar7 - (float10)_DAT_0054de48;
      }
    }
    else {
      fVar7 = fVar7 - (float10)_DAT_0054de50;
    }
    lVar8 = __ftol(fVar7 / ((float10)_DAT_0054de48 / (float10)bVar2));
    *param_1 = CONCAT22(uVar5,(short)lVar8);
    param_1[1] = 0;
    return;
  }
  iVar1 = (uint)bVar2 * 2 + -2;
  fVar7 = (float10)(int)(0x168 / (longlong)(iVar1 * 2)) -
          (((float10)param_3 - (float10)_DAT_0054de44) - (float10)_DAT_0054de48);
  if ((NAN(fVar7) || NAN((float10)_DAT_0054de4c)) || fVar7 < (float10)_DAT_0054de4c) {
    do {
      fVar7 = fVar7 - (float10)_DAT_0054de50;
    } while ((NAN(fVar7) || NAN((float10)_DAT_0054de4c)) || fVar7 < (float10)_DAT_0054de4c);
  }
  if ((!NAN(fVar7) && !NAN((float10)_DAT_0054de48)) && (float10)_DAT_0054de48 <= fVar7) {
    do {
      fVar7 = fVar7 - (float10)_DAT_0054de48;
    } while ((!NAN(fVar7) && !NAN((float10)_DAT_0054de48)) && (float10)_DAT_0054de48 <= fVar7);
  }
  fVar6 = fVar7 / ((float10)_DAT_0054de48 / (float10)iVar1);
  if ((NAN(fVar6) || NAN((float10)iVar1 * (float10)_DAT_0054de54)) ||
      fVar6 <= (float10)iVar1 * (float10)_DAT_0054de54) {
    lVar8 = __ftol((float10)(float)fVar6);
    *param_1 = CONCAT22(uVar5,(short)lVar8);
    param_1[1] = 0;
    return;
  }
  lVar8 = __ftol(((float10)_DAT_0054de48 - fVar7) / ((float10)_DAT_0054de48 / (float10)iVar1) -
                 (float10)_DAT_0054de58);
  *param_1 = CONCAT22(uVar5,(short)lVar8);
  param_1[1] = 1;
  return;
}


