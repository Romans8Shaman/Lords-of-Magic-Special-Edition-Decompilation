
int __thiscall FUN_00421020(void *this,int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  void *pvVar9;
  float local_58;
  float local_54;
  float local_50;
  float local_2c;
  float local_28;
  float local_24;
  
  if (param_1 == param_2) {
    return 1;
  }
  puVar1 = FUN_004c6fc0();
  iVar5 = param_1 % *(int *)(puVar1 + 0x6c);
  puVar1 = FUN_004c6fc0();
  iVar2 = param_1 / *(int *)(puVar1 + 0x6c);
  puVar1 = FUN_004c6fc0();
  iVar6 = param_2 % *(int *)(puVar1 + 0x6c);
  puVar1 = FUN_004c6fc0();
  iVar3 = param_2 / *(int *)(puVar1 + 0x6c);
  iVar4 = FUN_00420580((int)this);
  if (iVar4 == 0) {
    pfVar8 = &local_58;
    puVar1 = FUN_004c6fc0();
    FUN_004a6600(puVar1,pfVar8,iVar5,iVar2);
    pfVar8 = &local_2c;
    puVar1 = FUN_004c6fc0();
    FUN_004a6600(puVar1,pfVar8,iVar6,iVar3);
  }
  else {
    pfVar8 = &local_58;
    pvVar9 = this;
    puVar1 = FUN_004c6fc0();
    FUN_004a6700(puVar1,pfVar8,iVar5,iVar2,(int)pvVar9);
    pfVar8 = &local_2c;
    pvVar9 = this;
    puVar1 = FUN_004c6fc0();
    FUN_004a6700(puVar1,pfVar8,iVar6,iVar3,(int)pvVar9);
  }
  iVar2 = FUN_004209c0((int)this);
  lVar7 = __ftol(SQRT((float10)(local_50 - local_24) * (float10)(local_50 - local_24) +
                      (float10)(local_54 - local_28) * (float10)(local_54 - local_28) +
                      (float10)(local_58 - local_2c) * (float10)(local_58 - local_2c)) *
                 (float10)iVar2);
  iVar2 = (int)lVar7;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  return iVar2;
}


