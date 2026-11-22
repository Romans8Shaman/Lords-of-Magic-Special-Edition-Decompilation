
void __cdecl op_getterrainspriteaileavealone(void *param_1)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar2 = param_1;
  iVar3 = FUN_0050cd20(param_1,(uint *)&param_1);
  if (iVar3 == 0) {
    return;
  }
  if (((*(byte *)((int)param_1 + 0x30) & 0x80) == 0) ||
     (iVar3 = FUN_0050c7f0((int)param_1), iVar3 != 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  if (*(int *)((int)pvVar2 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
  *(int *)((int)pvVar2 + 0x54) = iVar4;
  iVar3 = *(int *)((int)pvVar2 + 0x50);
  *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
  *(uint *)(iVar3 + 4 + iVar4 * 8) = -(uint)bVar1;
  return;
}


