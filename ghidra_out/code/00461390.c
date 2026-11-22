
void __cdecl op_getplayergo(void *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  pvVar1 = param_1;
  iVar2 = FUN_004bdce0(param_1,&param_1);
  if (iVar2 != 0) {
    uVar3 = 1 << ((byte)*(undefined4 *)((int)param_1 + 0x15a8) & 0x1f) & DAT_005af154;
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar4;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar4 * 8) = (uint)(uVar3 != 0);
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}


