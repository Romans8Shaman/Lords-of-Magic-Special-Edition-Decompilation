
void __fastcall FUN_004b2820(undefined4 *param_1)

{
  int *piVar1;
  int local_10 [4];
  
  FUN_00495590(param_1 + 2);
  FUN_00495590(param_1 + 0x1a);
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)FUN_00471540(param_1 + 10,local_10);
  FUN_00476010(&DAT_005a9e10,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  piVar1 = (int *)FUN_00471540(param_1 + 0x22,local_10);
  FUN_00476010(&DAT_005a9e10,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  return;
}


