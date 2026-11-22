
void __fastcall FUN_004f76b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054bb28;
  local_c = ExceptionList;
  iVar4 = 0;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    if (-1 < *(int *)(param_1 + 0x18)) {
      iVar2 = *(int *)(param_1 + 0x18) + 1;
      do {
        if (*piVar1 != 0) {
          iVar3 = iVar3 + 1;
        }
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (iVar3 != 0) {
      DAT_005aa1b8 = 10;
      ExceptionList = &local_c;
      FUN_00487590(local_20);
      local_4 = 0;
      FUN_00487610(local_20,iVar3);
      iVar3 = 0;
      if (-1 < *(int *)(param_1 + 0x18)) {
        do {
          piVar1 = *(int **)(*(int *)(param_1 + 8) + iVar4 * 4);
          if (piVar1 != (int *)0x0) {
            iVar3 = iVar3 + 1;
            FUN_00487650(local_20,iVar3);
            (/*IC:004f7733*/**(code **)(*piVar1 + 0x2c))(piVar1);
            (/*IC:004f773a*/**(code **)(*piVar1 + 0x1c))(piVar1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 <= *(int *)(param_1 + 0x18));
      }
      local_4 = 0xffffffff;
      FUN_004875f0(local_20);
    }
  }
  ExceptionList = local_c;
  return;
}


