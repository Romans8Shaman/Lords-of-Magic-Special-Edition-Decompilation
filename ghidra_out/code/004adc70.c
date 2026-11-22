
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004adc70(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar2 = FUN_00504f00(-0x5a,0x5a);
  fVar3 = (float10)iVar2 * (float10)_DAT_0054db60 + (float10)*(float *)(param_1 + 200);
  fVar1 = (float)fVar3;
  fVar3 = (float10)fcos(fVar3);
  fVar4 = (float10)fsin((float10)fVar1);
  *(float *)(param_1 + 200) = fVar1;
  *(float *)(param_1 + 0xb0) = (float)(fVar3 * (float10)*(float *)(param_1 + 0x68));
  *(float *)(param_1 + 0xb4) = (float)(fVar4 * (float10)*(float *)(param_1 + 0x68));
  return;
}


