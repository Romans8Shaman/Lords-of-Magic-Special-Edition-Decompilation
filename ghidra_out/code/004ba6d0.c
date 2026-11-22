
void __cdecl op_setpathindicatorimp(void *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  float local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    DAT_0055d648 = local_4;
    return;
  }
  if (uVar2 == 2) {
    DAT_0055d648 = (float)((int)local_4 >> 8);
    return;
  }
  if (uVar2 == 4) {
    lVar3 = __ftol((float10)local_4);
    DAT_0055d648 = (float)(int)lVar3;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


