
uint __fastcall FUN_0049d8f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 == 0) || (*(byte **)(param_1 + 0x24) == (byte *)0x0)) {
    return 0;
  }
  if ((**(byte **)(param_1 + 0x24) & 7) == 4) {
    return (uint)*(ushort *)(iVar1 + 2) * 2 - 1;
  }
  return (uint)*(ushort *)(iVar1 + 2);
}


