
undefined4 __thiscall FUN_0044ba50(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (DAT_005d2f50 != 0) {
    iVar4 = *(int *)((int)this + param_2 * 4 + 0x2c);
    iVar1 = iVar4;
    iVar3 = DAT_005d2f50;
    do {
      for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      }
      iVar3 = *(int *)(iVar3 + 0x1c);
      iVar1 = iVar4;
    } while (iVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_0044c430(&DAT_005d2f50);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  for (iVar4 = *(int *)((int)this + param_2 * 4 + 0x2c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x1c))
  {
  }
  puVar5 = puVar2;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2[7] = *(undefined4 *)((int)this + param_2 * 4 + 0x2c);
  *(undefined4 **)((int)this + param_2 * 4 + 0x2c) = puVar2;
  return 1;
}


