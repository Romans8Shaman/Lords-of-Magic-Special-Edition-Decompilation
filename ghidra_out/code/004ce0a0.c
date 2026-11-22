
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ce0a0(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    fVar4 = (float10)(int)local_4;
  }
  else if (uVar3 == 2) {
    fVar4 = (float10)(int)local_4 * (float10)_DAT_0054dd18;
  }
  else {
    if (uVar3 != 4) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
      goto LAB_004ce13a;
    }
    fVar4 = (float10)local_4;
  }
  fVar4 = (float10)fpatan(fVar4,(float10)1);
  if (*(int *)((int)param_1 + 0x54) != 0) {
    iVar1 = *(int *)((int)param_1 + 0x50);
    iVar2 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
    *(float *)(iVar1 + 4 + iVar2 * 8) = (float)fVar4;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x90) = 3;
LAB_004ce13a:
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


