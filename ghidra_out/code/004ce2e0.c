
void __fastcall FUN_004ce2e0(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
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
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      local_4 = (float)((int)local_4 >> 8);
    }
    else {
      if (uVar2 != 4) {
        *(undefined4 *)((int)param_1 + 0x90) = 0xe;
        goto LAB_004ce371;
      }
      lVar4 = __ftol((float10)local_4);
      local_4 = (float)lVar4;
    }
  }
  if (*(int *)((int)param_1 + 0x54) != 0) {
    iVar3 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar3;
    iVar1 = *(int *)((int)param_1 + 0x50);
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(uint *)(iVar1 + 4 + iVar3 * 8) = ~(uint)local_4;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x90) = 3;
LAB_004ce371:
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


