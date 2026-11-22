
undefined4 __thiscall FUN_0042f4d0(void *this,void *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float local_4;
  
  if (*(char *)((int)this + 0xc38) == '\0') {
    return 0;
  }
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)param_1 + 0x50);
    iVar1 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    *(undefined4 *)(iVar2 + iVar1 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar1 * 8) = param_2;
  }
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)param_1 + 0x50);
    iVar1 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    *(undefined4 *)(iVar2 + iVar1 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = param_3;
  }
  FUN_004d09a0(param_1,*(uint *)((int)this + 0xc38),*(int **)((int)this + 0xc3c),-1);
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      return (int)local_4 >> 8;
    }
    if (uVar3 == 4) {
      lVar4 = __ftol((float10)local_4);
      return (int)lVar4;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_4 = (float)param_2;
  }
  return local_4;
}


