
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b2df0(int param_1)

{
  int *piVar1;
  int local_10 [4];
  
  _DAT_00584cd0 = 1;
  *(undefined4 *)(param_1 + 0x5e4) = 0;
  FUN_00495590((int *)(param_1 + 0x4c0));
  piVar1 = (int *)FUN_00471540((void *)(param_1 + 0x4e0),local_10);
  FUN_00476010(&DAT_005a9e10,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  return;
}


