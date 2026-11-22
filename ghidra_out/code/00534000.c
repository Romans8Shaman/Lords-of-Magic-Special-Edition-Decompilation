
void __cdecl FUN_00534000(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x24) << 1;
  *(undefined2 *)(*(int *)(param_1 + 0x3c) + -2 + *(int *)(param_1 + 0x44) * 2) = 0;
  uVar4 = *(int *)(param_1 + 0x44) * 2 - 2;
  puVar5 = *(undefined4 **)(param_1 + 0x3c);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  iVar2 = *(int *)(param_1 + 0x7c) * 0xc;
  *(uint *)(param_1 + 0x78) = (uint)*(ushort *)(&DAT_0054ea52 + iVar2);
  *(uint *)(param_1 + 0x84) = (uint)*(ushort *)(&DAT_0054ea50 + iVar2);
  *(uint *)(param_1 + 0x88) = (uint)*(ushort *)(&DAT_0054ea54 + iVar2);
  uVar1 = *(ushort *)(&DAT_0054ea56 + iVar2);
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x74) = (uint)uVar1;
  *(undefined4 *)(param_1 + 0x70) = 2;
  *(undefined4 *)(param_1 + 0x58) = 2;
  return;
}


