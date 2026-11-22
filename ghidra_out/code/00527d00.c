
undefined4 __thiscall FUN_00527d00(void *this,undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 8;
  switch(param_1) {
  case 0x96:
    FUN_005274b0(this,param_2);
    return 1;
  case 0x98:
    *(undefined4 **)((int)this + 4) = param_2;
    uVar2 = FUN_005291e0((int)this);
    if (uVar2 == 0) {
      return 1;
    }
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
      return 1;
    }
    iVar3 = 0;
    if (0 < *(int *)(uVar2 + 0x44)) {
      puVar4 = (undefined4 *)(uVar2 + 0x14);
      do {
        *puVar4 = 0;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < *(int *)(uVar2 + 0x44));
    }
    FUN_00528320(this,(int)param_2);
    return 1;
  case 0x99:
    *(undefined4 **)((int)this + 0xc) = param_2;
    return 1;
  case 0x9d:
    uVar2 = FUN_00529140(this);
    if (uVar2 != 0) {
      *(undefined4 **)(*(int *)((int)this + 0x14) + 0x10) = param_2;
      piVar1 = FUN_0052b540(&DAT_005cd18c,*(int *)((int)this + 0x20));
      if (piVar1 == (int *)0x0) {
        return 1;
      }
      if (piVar1[2] < 0) {
        piVar1[2] = (int)param_2;
        return 1;
      }
      return 1;
    }
    break;
  case 0x9f:
    uVar2 = FUN_00529180(this);
    if (uVar2 != 0) {
      *(undefined4 **)(uVar2 + 0x14) = param_2;
      return 1;
    }
    break;
  case 0xa0:
    *(undefined4 **)((int)this + 0x24) = param_2;
    return 1;
  }
  return 0;
}


