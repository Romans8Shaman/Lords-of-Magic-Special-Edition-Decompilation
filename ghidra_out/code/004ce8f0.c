
void __fastcall FUN_004ce8f0(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
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
  case 2:
    local_4 = (byte *)((int)local_4 >> 8);
    break;
  default:
    local_4 = (byte *)0x0;
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    break;
  case 4:
    lVar4 = __ftol((float10)(float)local_4);
    local_4 = (byte *)lVar4;
    break;
  case 8:
    local_4 = (byte *)FUN_0053b630(local_4);
  case 1:
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
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(byte **)(iVar1 + 4 + iVar2 * 8) = local_4;
  return;
}


