
undefined4 __thiscall FUN_00432360(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  puVar4 = &DAT_00578a80;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined1 *)((int)this + 0x56);
  iVar3 = 7;
  do {
    puVar2[-0x2a] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_2 + 0x28);
  iVar1 = DAT_00578b48;
  iVar3 = *(int *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x1c) = 3;
  *(int *)((int)this + 0x20) = iVar1 * 0x100 + iVar3;
  *(undefined1 *)((int)this + 0x1d) = 0;
  DAT_00578b48 = DAT_00578b48 + 1;
  if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == *(int *)(param_1 + 0x48)) {
    FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
  }
  return 1;
}


