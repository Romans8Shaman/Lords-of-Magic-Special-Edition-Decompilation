
void __fastcall FUN_00472ac0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0xec);
  uVar2 = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  *(undefined4 *)(param_1 + 0x194) = uVar1;
  *(undefined4 *)(param_1 + 0x18c) = uVar1;
  *(undefined4 *)(param_1 + 0x184) = uVar2;
  *(undefined4 *)(param_1 + 0x198) = uVar2;
  *(undefined4 *)(param_1 + 400) = uVar2;
  *(undefined4 *)(param_1 + 0x188) = 1;
  FUN_00503040(&DAT_00584ae8,6);
  return;
}


