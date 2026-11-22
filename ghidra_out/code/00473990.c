
void __fastcall FUN_00473990(int param_1)

{
  int *piVar1;
  int local_10 [4];
  
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  piVar1 = (int *)FUN_00471540((void *)(param_1 + 0x70),local_10);
  FUN_00476010((void *)(param_1 + 0xc),*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  return;
}


