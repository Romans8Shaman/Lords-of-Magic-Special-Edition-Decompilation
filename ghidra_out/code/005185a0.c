
void __fastcall FUN_005185a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x21c);
  if (*(int *)(param_1 + 0x218) == 0) {
    if (iVar1 == 2) {
      *(undefined1 **)(param_1 + 0x220) = &LAB_00518690;
      return;
    }
    if (iVar1 == 4) {
      *(undefined1 **)(param_1 + 0x220) = &LAB_005186f0;
      return;
    }
    if (iVar1 == 6) {
      *(undefined1 **)(param_1 + 0x220) = &LAB_00518750;
      return;
    }
    *(undefined1 **)(param_1 + 0x220) = &LAB_00518630;
    return;
  }
  if (iVar1 == 2) {
    *(undefined1 **)(param_1 + 0x220) = &LAB_005188a0;
    return;
  }
  if (iVar1 == 4) {
    *(code **)(param_1 + 0x220) = FUN_00518970;
    return;
  }
  if (iVar1 == 6) {
    *(undefined1 **)(param_1 + 0x220) = &LAB_00518a50;
    return;
  }
  *(code **)(param_1 + 0x220) = FUN_005187b0;
  return;
}


