
void __fastcall FUN_004753d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x2be4) == 0) && (*(int *)(param_1 + 0x22ff4) != 0)) &&
     (DAT_005d2ca0 == 0)) {
    iVar2 = FUN_004c9810((undefined4 *)(param_1 + 0x278));
    if (*(int *)(param_1 + 0x684) != 0) {
      piVar1 = (int *)(param_1 + 0x2531c);
      if (iVar2 == 0) {
        FUN_00471950(piVar1);
      }
      else {
        FUN_00474ad0((int)piVar1);
      }
      if (*(int *)(param_1 + 0x4d5cc) != 0) {
        (/*IC:00475448*/**(code **)(**(int **)(param_1 + 0x680) + 0x58))(*(int **)(param_1 + 0x680),1,0);
      }
      iVar3 = (/*IC:00475463*/**(code **)(**(int **)(param_1 + 0x684) + 0x1c))
                        (*(int **)(param_1 + 0x684),0,0,*(undefined4 *)(param_1 + 0x688),0,0);
      if (iVar3 == -0x7789fe3e) {
        FUN_00475360(param_1);
        (/*IC:0047548c*/**(code **)(**(int **)(param_1 + 0x684) + 0x1c))
                  (*(int **)(param_1 + 0x684),0,0,*(undefined4 *)(param_1 + 0x688),0,0);
      }
      if (iVar2 == 0) {
        FUN_00472260((int)piVar1);
      }
      *(undefined4 *)(param_1 + 0x22f08) = 0;
      *(undefined4 *)(param_1 + 0x22f10) = 0;
      *(undefined4 *)(param_1 + 0x22f14) = 0;
    }
  }
  return;
}


