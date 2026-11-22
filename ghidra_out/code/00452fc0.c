
undefined4 __thiscall FUN_00452fc0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00453a60(&DAT_005792c4);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar3 = puVar1;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)this;
    this = (undefined4 *)((int)this + 4);
    puVar3 = puVar3 + 1;
  }
  *puVar1 = *(undefined4 *)(param_1 + 0x28);
  puVar1[9] = *(undefined4 *)(param_1 + 0x348);
  *(undefined4 **)(param_1 + 0x348) = puVar1;
  return 1;
}


