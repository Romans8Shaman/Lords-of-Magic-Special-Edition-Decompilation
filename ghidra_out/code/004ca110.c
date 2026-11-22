
void __cdecl op_end(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x60);
  if (*(int *)((int)param_1 + 100) + -1 <= iVar1) {
    *(undefined4 *)((int)param_1 + 0x90) = 7;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  if (iVar1 < *(int *)((int)param_1 + 0x68)) {
    *(int *)((int)param_1 + 0x60) = iVar1 + 1;
    return;
  }
  FUN_004d41c0(param_1,s_dictionary_stack_protection_erro_0055e1b0);
  return;
}


