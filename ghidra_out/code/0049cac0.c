
void __fastcall FUN_0049cac0(int param_1)

{
  int *piVar1;
  int local_6c [27];
  
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    local_6c[0] = 0x6c;
    local_6c[1] = 0;
    (/*IC:0049cae5*/**(code **)(*piVar1 + 0x58))(piVar1,local_6c);
    DAT_0058372c = DAT_0058372c - local_6c[2] * local_6c[0];
    (/*IC:0049cb05*/**(code **)(**(int **)(param_1 + 0x34) + 8))(*(int **)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


