
undefined4 __cdecl FUN_0041bf10(void *param_1,int *param_2,int *param_3)

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
    *param_3 = (int)local_4;
  }
  else if (uVar2 == 2) {
    *param_3 = (int)local_4 >> 8;
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
    *param_3 = (int)lVar3;
  }
  iVar1 = FUN_0041be40(param_1,param_2);
  if (iVar1 != 0) {
    if ((-1 < *param_3) && (*param_3 < *(int *)(*param_2 + 0x4c))) {
      return 1;
    }
    FUN_004d41c0(param_1,s_bad_unit_number_00555968);
  }
  return 0;
}


