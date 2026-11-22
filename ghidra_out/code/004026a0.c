
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004026a0(uint *param_1,uint *param_2,uint *param_3,float *param_4)

{
  float fVar1;
  float10 fVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = *param_1 & 0xff;
  if (uVar3 == 1) {
    uVar3 = param_1[1];
    *param_2 = uVar3;
    *param_3 = uVar3 << 8;
    *param_4 = (float)(int)*param_2;
    return 1;
  }
  if (uVar3 == 2) {
    uVar3 = param_1[1];
    *param_3 = uVar3;
    *param_2 = (int)uVar3 >> 8;
    *param_4 = (float)(int)*param_3 * (float)_DAT_0054d380;
    return 1;
  }
  if (uVar3 == 4) {
    fVar1 = (float)param_1[1];
    fVar2 = (float10)_DAT_0054d378;
    *param_4 = fVar1;
    lVar4 = __ftol((float10)fVar1 * fVar2);
    *param_3 = (uint)lVar4;
    lVar4 = __ftol((float10)*param_4);
    *param_2 = (uint)lVar4;
    return 1;
  }
  return 0;
}


