
undefined4 __fastcall FUN_0046a050(int param_1,undefined4 unused_reg_1,int unused_stack_0)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_6c [9];
  undefined4 *puStack_48;
  
  if (((*(int *)(param_1 + 0x29e90) == 0) && (*(int *)(param_1 + 0x22e94) != 0)) &&
     (0 < *(int *)(param_1 + 0x29ecc))) {
    local_6c[0] = 0x6c;
    iVar1 = (/*IC:0046a09d*/**(code **)(*DAT_00585174 + 100))(DAT_00585174,0,local_6c,1,0);
    if (iVar1 == -0x7789fe3e) {
      FUN_00475360(0x584ae8);
      iVar1 = (/*IC:0046a0c4*/**(code **)(*DAT_00585174 + 100))(DAT_00585174,0,local_6c,1,0);
    }
    if (iVar1 != 0) {
      return 0;
    }
    if (unused_stack_0 == 0) {
      puVar3 = puStack_48;
      for (uVar2 = (*(int *)(param_1 + 0x2dd8) + 0xc0) * (*(int *)(param_1 + 0x2dd4) + 0x140) &
                   0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    (/*IC:0046a11d*/**(code **)(**(int **)(param_1 + 0x68c) + 0x80))(*(int **)(param_1 + 0x68c),puStack_48);
    (/*IC:0046a130*/**(code **)(*(int *)(param_1 + 0x2be8) + 4))((void *)(param_1 + 0x2be8),unused_stack_0);
  }
  return 1;
}


