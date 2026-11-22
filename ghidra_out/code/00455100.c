
void __fastcall FUN_00455100(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x50) = 0x40400000;
  *(undefined4 *)(param_1 + 0x54) = 0x40400000;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4c) = 0xff;
  *(undefined1 *)(param_1 + 0x34) = 0xff;
  *(undefined1 *)(param_1 + 0x35) = 0xff;
  *(undefined1 *)(param_1 + 0x36) = 0xff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0x28;
  *(undefined4 *)(param_1 + 0x60) = 0x3c;
  *(undefined4 *)(param_1 + 0x58) = 0x405f5c29;
  *(undefined1 *)(param_1 + 0x4d) = 7;
  iVar2 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x20);
  do {
    puVar1[-8] = 0xffffffff;
    if (iVar2 < 3) {
      puVar1[-3] = 0xffffffff;
      *puVar1 = 0xffffffff;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 5);
  return;
}


