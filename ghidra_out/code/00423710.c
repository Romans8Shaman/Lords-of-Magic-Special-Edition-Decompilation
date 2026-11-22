
void __cdecl op_teleportarmy(void *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float local_4;
  
  pvVar1 = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      local_4 = (float)((int)local_4 >> 8);
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
        return;
      }
      lVar4 = __ftol((float10)local_4);
      local_4 = (float)lVar4;
    }
  }
  iVar2 = FUN_0041be40(pvVar1,&param_1);
  if (iVar2 != 0) {
    FUN_004237d0(param_1,(int)local_4);
  }
  return;
}


