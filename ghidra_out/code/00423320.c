
undefined4 __thiscall FUN_00423320(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined **local_5e8 [30];
  int aiStack_570 [18];
  undefined1 local_528;
  undefined4 local_524 [19];
  int aiStack_4d8 [275];
  undefined4 local_8c [3];
  undefined4 local_80 [29];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054956f;
  local_c = ExceptionList;
  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0x4c))) && (-1 < param_2)) &&
     (param_2 < *(int *)((int)this + 0x4c))) {
    piVar5 = (int *)((int)this + param_1 * 0x4c + 0xc4);
    ExceptionList = &local_c;
    iVar1 = FUN_00525fc0(piVar5);
    if ((iVar1 < 0) &&
       (iVar1 = FUN_00525fc0((int *)((int)this + param_2 * 0x4c + 0xc4)), -1 < iVar1)) {
      iVar1 = param_1;
      piVar3 = piVar5;
      do {
        iVar2 = FUN_00525fc0(piVar3);
        if (-1 < iVar2) break;
        iVar1 = iVar1 + -1;
        piVar3 = piVar3 + -0x13;
      } while (-1 < iVar1);
      if (iVar1 == param_2) {
        ExceptionList = local_c;
        return 1;
      }
      iVar1 = *(int *)((int)this + 0x4c) + -1;
      if (param_2 != iVar1) {
        iVar1 = param_2 + 1;
        if (iVar1 < *(int *)((int)this + 0x4c)) {
          piVar3 = (int *)((int)this + iVar1 * 0x4c + 0xc4);
          do {
            iVar2 = FUN_00525fc0(piVar3);
            if (-1 < iVar2) break;
            iVar1 = iVar1 + 1;
            piVar3 = piVar3 + 0x13;
          } while (iVar1 < *(int *)((int)this + 0x4c));
        }
        iVar1 = iVar1 + -1;
      }
      if (param_1 == iVar1) {
        ExceptionList = local_c;
        return 1;
      }
      FUN_004f59a0(local_5e8);
      local_4 = 0;
      local_528 = 0;
      FUN_00539ff0(local_524,0x4c,0xf,FUN_00526e40,thunk_FUN_00526ea0);
      local_4._0_1_ = 1;
      FUN_004c3990(local_8c);
      local_4._0_1_ = 2;
      FUN_0042d4c0(local_80);
      DAT_005787c0 = DAT_005787c0 + 0x5dc;
      local_4 = CONCAT31(local_4._1_3_,3);
      local_5e8[0] = &PTR_FUN_0054d3a8;
      FUN_00419d00(local_5e8,this);
      local_4 = 4;
      if (param_1 < iVar1) {
        piVar3 = aiStack_4d8 + param_1 * 0x13;
        for (uVar4 = (uint)(iVar1 * 0x4c + param_1 * -0x4c) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *piVar5 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar5 = piVar5 + 1;
        }
      }
      else {
        iVar6 = iVar1 + 1;
        iVar2 = iVar1 + 2;
        iVar1 = iVar6;
        if (iVar2 <= param_1) {
          iVar2 = (param_1 - iVar2) + 1;
          piVar3 = aiStack_570 + param_1 * 0x13;
          do {
            iVar2 = iVar2 + -1;
            piVar7 = piVar3;
            piVar9 = piVar5;
            for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar9 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar9 = piVar9 + 1;
            }
            piVar3 = piVar3 + -0x13;
            piVar5 = piVar5 + -0x13;
          } while (iVar2 != 0);
        }
      }
      puVar8 = local_524 + param_1 * 0x13;
      puVar10 = (undefined4 *)((int)this + iVar1 * 0x4c + 0xc4);
      for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      FUN_004117f0(local_5e8,0);
      (/*IC:0042356e*/**(code **)(*(int *)this + 0x2c))(this);
      if ((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
         ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
        FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
      }
      local_4 = 0xffffffff;
      FUN_00411910(local_5e8);
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}


