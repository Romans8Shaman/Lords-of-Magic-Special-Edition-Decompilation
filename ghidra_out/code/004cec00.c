
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004cec00(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  byte *local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(byte **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar3 = 0;
  }
  switch(uVar3 & 0xff) {
  case 1:
    fVar4 = (float10)(int)local_4;
    break;
  case 2:
    fVar4 = (float10)(int)local_4 * (float10)_DAT_0054dd18;
    break;
  default:
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    FUN_004d4550(param_1);
    fVar4 = (float10)_DAT_0054dd20;
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    break;
  case 4:
    fVar4 = (float10)(float)local_4;
    break;
  case 8:
    fVar4 = FUN_0053b640(local_4);
  }
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)param_1 + 0x50);
  iVar2 = *(int *)((int)param_1 + 0x54) + -1;
  *(int *)((int)param_1 + 0x54) = iVar2;
  *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
  *(float *)(iVar1 + 4 + iVar2 * 8) = (float)fVar4;
  return;
}


