
undefined4 __cdecl FUN_004409e0(void *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  longlong lVar4;
  float local_4;
  
  *param_2 = 0;
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
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      local_4 = (float)((int)local_4 >> 8);
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)param_1 + 0x90) = 0xe;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
        return 0;
      }
      lVar4 = __ftol((float10)local_4);
      local_4 = (float)lVar4;
    }
  }
  puVar2 = FUN_00485400(&DAT_005aa12c,(int)local_4,7);
  *param_2 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    FUN_004d41c0(param_1,s_building_doesn_t_exist_005566f8);
    return 0;
  }
  return 1;
}


