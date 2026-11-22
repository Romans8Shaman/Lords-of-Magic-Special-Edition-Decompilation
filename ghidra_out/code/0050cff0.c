
void __fastcall FUN_0050cff0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00492850(&DAT_005a7b50,*(int *)(param_1 + 0x28));
  if (piVar1 != (int *)0x0) {
    FUN_0049ab20(piVar1);
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    FUN_004f6670(&DAT_00584ae8,(int)piVar1);
  }
  return;
}


