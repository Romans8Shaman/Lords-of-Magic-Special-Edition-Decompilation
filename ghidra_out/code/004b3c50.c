
void __fastcall FUN_004b3c50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    FUN_005394d0(*(int **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (DAT_005863b8 == 0) {
    FUN_004b3ac0(0x585408);
  }
  else {
    FUN_004b3a40(0x585408);
  }
  DAT_0058674d = '\x01' - DAT_0058674d;
  uVar1 = FUN_004fe6e0(&DAT_00584ae8,&DAT_0058664c);
  *(undefined4 *)(param_1 + 4) = uVar1;
  FUN_004b3990(param_1);
  return;
}


