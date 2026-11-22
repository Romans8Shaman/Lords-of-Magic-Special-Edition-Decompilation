
void __fastcall FUN_0047a7b0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x13b4) != 0) {
    piVar1 = *(int **)(param_1 + 0x780);
    if (piVar1 != (int *)0x0) {
      (/*IC:0047a7ca*/**(code **)(*piVar1 + 0x48))(piVar1);
      FUN_00478f60(*(int **)(param_1 + 0x780));
      (/*IC:0047a7e4*/**(code **)(**(int **)(param_1 + 0x780) + 8))(*(int **)(param_1 + 0x780));
      *(undefined4 *)(param_1 + 0x780) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x784);
    if (piVar1 != (int *)0x0) {
      (/*IC:0047a7fe*/**(code **)(*piVar1 + 0x48))(piVar1);
      FUN_00478f60(*(int **)(param_1 + 0x784));
      (/*IC:0047a818*/**(code **)(**(int **)(param_1 + 0x784) + 8))(*(int **)(param_1 + 0x784));
      *(undefined4 *)(param_1 + 0x784) = 0;
    }
  }
  return;
}


