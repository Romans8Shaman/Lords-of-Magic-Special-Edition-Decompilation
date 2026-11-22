
void __fastcall FUN_0052b600(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x18);
  iVar2 = 0x1e;
  do {
    puVar1[-1] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0;
    puVar1[0x5a] = 0xffffffff;
    puVar1[0x5b] = 0xffffffff;
    puVar1[0x5c] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


