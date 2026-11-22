
undefined4 __cdecl FUN_004906d0(void *param_1,int *param_2)

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
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      local_4 = (float)((int)local_4 >> 8);
    }
    else {
      if (uVar2 != 4) {
        *(undefined4 *)((int)param_1 + 0x90) = 0xe;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
        return 0;
      }
      lVar3 = __ftol((float10)local_4);
      local_4 = (float)lVar3;
    }
  }
  iVar1 = FUN_005005f0(&DAT_00584ae8,(uint)local_4);
  *param_2 = iVar1;
  if (iVar1 == 0) {
    FUN_004d41c0(param_1,s_no_such_dialog_0055c458);
    return 0;
  }
  return 1;
}


