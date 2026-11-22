
undefined4 __fastcall FUN_0044a100(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  piVar1 = *(int **)(param_1 + 0x4a0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (/*IC:0044a115*/**(code **)(*piVar1 + 0x10))(piVar1,s_lpDirectPlay3A_>Close___005568d8);
    FUN_004756f0(iVar2);
    pcVar3 = s_lpDirectPlay3A_>Release___005568bc;
    iVar2 = (/*IC:0044a12f*/**(code **)(**(int **)(param_1 + 0x4a0) + 8))(*(int **)(param_1 + 0x4a0));
    FUN_004756f0(iVar2,pcVar3);
    *(undefined4 *)(param_1 + 0x4a0) = 0;
  }
  FUN_0046f360();
  return 1;
}


