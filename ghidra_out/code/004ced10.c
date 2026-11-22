
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ced10(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  byte *local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(byte **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar2 = 0;
  }
  switch(uVar2 & 0xff) {
  case 1:
    local_4 = (byte *)((int)local_4 << 8);
    break;
  case 2:
    break;
  default:
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_4 = (byte *)0x0;
    break;
  case 4:
    lVar5 = __ftol((float10)(float)local_4 * (float10)_DAT_0054dd10);
    local_4 = (byte *)lVar5;
    break;
  case 8:
    fVar4 = FUN_0053b640(local_4);
    lVar5 = __ftol(fVar4 * (float10)_DAT_0054dd10);
    local_4 = (byte *)lVar5;
  }
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)param_1 + 0x54) + -1;
  *(int *)((int)param_1 + 0x54) = iVar3;
  iVar1 = *(int *)((int)param_1 + 0x50);
  *(undefined4 *)(iVar1 + iVar3 * 8) = 2;
  *(byte **)(iVar1 + 4 + iVar3 * 8) = local_4;
  return;
}


