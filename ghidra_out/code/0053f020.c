
void __cdecl FUN_0053f020(undefined *param_1)

{
  if (DAT_00574a50 == 0xffffffff) {
    return;
  }
  if ((param_1 != (undefined *)0x0) ||
     (param_1 = TlsGetValue(DAT_00574a50), param_1 != (undefined *)0x0)) {
    if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x24));
    }
    if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x44));
    }
    if (*(undefined **)(param_1 + 0x50) != &DAT_00574dd0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x50));
    }
    FUN_0053bce0(param_1);
  }
  TlsSetValue(DAT_00574a50,(LPVOID)0x0);
  return;
}


