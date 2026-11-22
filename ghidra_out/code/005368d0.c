
void __cdecl FUN_005368d0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar3 = 0;
  puVar2 = (ushort *)(param_1 + 0x8c);
  iVar4 = 7;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar3 = uVar3 + uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (ushort *)(param_1 + 0xa8);
  iVar4 = 0x79;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar5 = uVar5 + uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (ushort *)(param_1 + 0x28c);
  iVar4 = 0x80;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar3 = uVar3 + uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(char *)(param_1 + 0x1c) = '\x01' - (uVar5 >> 2 < uVar3);
  return;
}


