
void __thiscall FUN_004675b0(void *this,uint param_1,int *param_2,void *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_44 [17];
  
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  piVar1 = (int *)((int)this + 0xc4);
  local_4c = 0;
  iVar7 = *piVar1;
  if (((iVar7 < 0) || (DAT_005cd2f0 <= iVar7)) || (DAT_005cd2f4 == 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = DAT_005cd2f4 + iVar7 * 1000;
  }
  uVar2 = *(uint *)(iVar7 + 0x14);
  bVar9 = (uVar2 & 0x40) != 0;
  if (bVar9) {
    local_58 = 1;
    local_44[0] = 2;
  }
  local_58 = (uint)bVar9;
  if ((uVar2 & 0x80) != 0) {
    local_58 = (uint)CONCAT11(1,bVar9);
    local_44[1] = 7;
  }
  if ((uVar2 & 0x200) != 0) {
    local_58 = CONCAT13(1,(undefined3)local_58);
    local_44[3] = 0x15;
  }
  bVar9 = (uVar2 & 0x400) != 0;
  if (bVar9) {
    local_54 = 1;
    local_44[4] = 0x17;
  }
  local_54 = (uint)bVar9;
  if ((uVar2 & 0x800) != 0) {
    local_54._0_2_ = CONCAT11(1,bVar9);
    local_54 = (uint)(ushort)local_54;
    local_44[5] = 6;
  }
  if ((uVar2 & 0x1000) != 0) {
    local_54._0_3_ = CONCAT12(1,(ushort)local_54);
    local_54 = (uint)(uint3)local_54;
    local_44[6] = 0x12;
  }
  if ((uVar2 & 0x2000) != 0) {
    local_54 = CONCAT13(1,(uint3)local_54);
    local_44[7] = 0x1a;
  }
  bVar9 = (uVar2 & 0x4000) != 0;
  if (bVar9) {
    local_50 = 1;
    local_44[8] = 0x1b;
  }
  local_50 = (uint)bVar9;
  if ((((uVar2 & 0x8000) != 0) &&
      (pvVar4 = (void *)FUN_00428c10((int)piVar1), pvVar4 != (void *)0x0)) &&
     (iVar5 = FUN_0042c500(pvVar4,*(int *)((int)this + 0x28),0,1), iVar5 != 0)) {
    local_50._0_2_ = CONCAT11(1,(undefined1)local_50);
    local_44[9] = 0x1c;
  }
  if ((((*(uint *)(iVar7 + 0x14) & 0x10000) != 0) &&
      (pvVar4 = (void *)FUN_00428c40((int)piVar1), pvVar4 != (void *)0x0)) &&
     (iVar5 = FUN_0042c500(pvVar4,*(int *)((int)this + 0x28),0,1), iVar5 != 0)) {
    local_50._0_3_ = CONCAT12(1,(undefined2)local_50);
    local_44[10] = 0x1d;
  }
  if ((*(uint *)(iVar7 + 0x14) & 0x400000) != 0) {
    local_50 = CONCAT13(1,(undefined3)local_50);
    local_44[0xb] = 0x18;
  }
  if ((*(uint *)(iVar7 + 0x14) & 0x800000) != 0) {
    local_4c = CONCAT11(local_4c._1_1_,1);
    local_44[0xc] = 0x19;
  }
  iVar7 = 0;
  puVar8 = local_44;
  do {
    if (*(char *)((int)local_44 + iVar7 + -0x14) == '\x01') {
      uVar3 = *puVar8;
      if (*(int *)((int)param_3 + 0x54) == 0) {
        *(undefined4 *)((int)param_3 + 0x90) = 3;
        FUN_004d4550(param_3);
        *(undefined4 *)((int)param_3 + 0x90) = 0;
        *(undefined4 *)((int)param_3 + 0xa4) = 0;
      }
      else {
        iVar5 = *(int *)((int)param_3 + 0x50);
        iVar6 = *(int *)((int)param_3 + 0x54) + -1;
        *(int *)((int)param_3 + 0x54) = iVar6;
        *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
        *(undefined4 *)(iVar5 + 4 + iVar6 * 8) = uVar3;
      }
      FUN_004d05e0(param_3,param_1,param_2);
      iVar5 = *(int *)((int)param_3 + 0x6c);
      *(undefined4 *)((int)param_3 + 0x6c) = *(undefined4 *)((int)param_3 + 0x70);
      if (iVar5 != 0) {
        return;
      }
    }
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 1;
    if (0xd < iVar7) {
      return;
    }
  } while( true );
}


