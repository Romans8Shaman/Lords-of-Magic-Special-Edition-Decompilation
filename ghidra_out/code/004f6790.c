
void __fastcall FUN_004f6790(void *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  int local_34;
  int local_30;
  float local_2c [3];
  float local_20;
  float local_1c;
  undefined4 local_18;
  
  if (*(int *)((int)param_1 + 0x2c) != 0) {
    iVar3 = *(int *)((int)param_1 + 0x1c);
    puVar1 = FUN_004c6fc0();
    iVar3 = iVar3 % *(int *)(puVar1 + 0x6c);
    iVar2 = *(int *)((int)param_1 + 0x1c);
    puVar1 = FUN_004c6fc0();
    iVar2 = iVar2 / *(int *)(puVar1 + 0x6c);
    FUN_004f6760(param_1,&local_34);
    pfVar5 = local_2c;
    puVar1 = FUN_004c6fc0();
    FUN_004a6600(puVar1,pfVar5,iVar3,iVar2);
    lVar4 = __ftol((float10)local_34 + (float10)local_20);
    *(int *)((int)param_1 + 0xc) = (int)lVar4;
    lVar4 = __ftol((float10)local_30 + (float10)local_1c);
    *(int *)((int)param_1 + 0x10) = (int)lVar4;
    *(undefined4 *)((int)param_1 + 8) = local_18;
  }
  return;
}


