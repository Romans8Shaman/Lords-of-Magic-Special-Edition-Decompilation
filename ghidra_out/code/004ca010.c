
void __cdecl op_pop(void *param_1)

{
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(int *)((int)param_1 + 0x54) = *(int *)((int)param_1 + 0x54) + 1;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x90) = 6;
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


