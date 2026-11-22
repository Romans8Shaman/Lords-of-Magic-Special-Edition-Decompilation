
undefined4 __thiscall FUN_00526fe0(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 8;
  uVar1 = FUN_005291e0((int)this);
  if ((uVar1 == 0) || ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3)) {
    iVar5 = FUN_00526f70(param_1,*(int **)((int)this + 0x18));
    if (iVar5 == 0) {
      puVar4 = (undefined4 *)FUN_0044c430(&DAT_005d2f50);
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
      puVar3 = puVar4;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar4[7] = *(undefined4 *)((int)this + 0x18);
      *(undefined4 **)((int)this + 0x18) = puVar4;
    }
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)(uVar1 + 0x44)) {
      puVar4 = (undefined4 *)(uVar1 + 0x2c);
      do {
        iVar2 = FUN_00526f70(param_1,(int *)*puVar4);
        if (iVar2 == 0) {
          puVar3 = (undefined4 *)FUN_0044c430(&DAT_005d2f50);
          if (puVar3 == (undefined4 *)0x0) {
            return 0;
          }
          puVar6 = param_1;
          puVar7 = puVar3;
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar3[7] = *puVar4;
          *puVar4 = puVar3;
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar5 < *(int *)(uVar1 + 0x44));
      return 1;
    }
  }
  return 1;
}


