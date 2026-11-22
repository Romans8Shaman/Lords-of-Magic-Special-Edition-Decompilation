
void __fastcall FUN_004cf960(void *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    iVar4 = *(int *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    iVar4 = 0;
  }
  if ((iVar4 == 1) || (iVar4 == 2)) {
    fVar2 = (float)-(int)local_4;
  }
  else {
    if (iVar4 != 4) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
      goto LAB_004cf9fb;
    }
    fVar2 = -local_4;
  }
  if (*(int *)((int)param_1 + 0x54) != 0) {
    iVar3 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar3;
    iVar1 = *(int *)((int)param_1 + 0x50);
    *(int *)(iVar1 + iVar3 * 8) = iVar4;
    *(float *)(iVar1 + 4 + iVar3 * 8) = fVar2;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x90) = 3;
LAB_004cf9fb:
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


