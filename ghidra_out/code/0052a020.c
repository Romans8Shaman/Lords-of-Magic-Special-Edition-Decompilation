
void __cdecl op_setunitlevelrangeproc(void *param_1)

{
  int iVar1;
  undefined4 local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    DAT_005d2f48 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    DAT_005d2f4c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
    return;
  }
  *(undefined4 *)((int)param_1 + 0x90) = 6;
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  DAT_005d2f48 = 0;
  DAT_005d2f4c = local_4;
  return;
}


