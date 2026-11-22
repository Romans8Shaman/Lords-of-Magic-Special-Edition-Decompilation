
void __fastcall FUN_00475370(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x680) != 0) {
    piVar3 = (int *)(param_1 + 0x6a8);
    iVar2 = 4;
    do {
      piVar1 = (int *)piVar3[-5];
      if (piVar1 != (int *)0x0) {
        (/*IC:00475395*/**(code **)(*piVar1 + 8))(piVar1);
        piVar3[-5] = 0;
      }
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (/*IC:004753a4*/**(code **)(*piVar1 + 8))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    (/*IC:004753b8*/**(code **)(**(int **)(param_1 + 0x680) + 8))(*(int **)(param_1 + 0x680));
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  return;
}


