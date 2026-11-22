
int __thiscall FUN_00416450(void *this,int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  (/*IC:00416457*/**(code **)(*(int *)this + 0x38))(this);
  iVar5 = *(int *)((int)this + 0x4c);
  if (0xe < iVar5) {
    return -1;
  }
  if (param_2 < iVar5) {
    iVar4 = iVar5 - param_2;
    puVar1 = (undefined4 *)((int)this + iVar5 * 0x4c + 0xc4);
    do {
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + -1;
      puVar6 = puVar1 + -0x13;
      puVar7 = puVar1;
      for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar1 = puVar1 + -0x13;
    } while (iVar4 != 0);
  }
  piVar8 = (int *)((int)this + iVar5 * 0x4c + 0xc4);
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *param_1;
    param_1 = param_1 + 1;
    piVar8 = piVar8 + 1;
  }
  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + 1;
  puVar2 = FUN_004c6fc0();
  if (puVar2 != (undefined *)0x0) {
    (/*IC:004164c7*/**(code **)(*(int *)this + 0x2c))(this);
  }
  return iVar5;
}


