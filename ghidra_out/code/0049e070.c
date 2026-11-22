
undefined4 __thiscall
FUN_0049e070(void *this,void *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_bc;
  int local_b8;
  int *local_b4;
  int local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  int *local_a0;
  int local_9c;
  int *local_98;
  int local_94;
  int local_90;
  int *local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  void *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  int local_4c [4];
  int local_3c;
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054af8e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) & 0xfe;
  local_70 = this;
  iVar2 = FUN_0049e700(this,param_2,param_3);
  if ((((iVar2 == 0) && (*(int *)((int)this + 0x1c) != 0)) &&
      (*(int **)((int)this + 0x3c) != (int *)0x0)) &&
     ((**(int **)((int)this + 0x3c) != 0 && (param_1 != (void *)0x0)))) {
    FUN_0049cc80(this,&local_78);
    FUN_0049cc80(param_1,&local_68);
    local_bc = local_68 - local_78;
    local_b8 = local_64 - local_74;
    piVar3 = FUN_0049de40((int)param_1);
    if ((piVar3 != (int *)0x0) &&
       (local_98 = piVar3, piVar4 = FUN_0049d360((int)this), piVar4 != (int *)0x0)) {
      iVar2 = local_78 + param_2;
      iVar5 = local_74 + param_3;
      local_9c = iVar2;
      FUN_00495120(local_4c,piVar4,*(int **)((int)this + 0x3c),*(int *)((int)this + 0x1c));
      if (local_4c[0] != 0) {
        if (*(int *)((int)this + 0x30) != 0) {
          local_3c = *(int *)((int)this + 0x30);
        }
        if (local_bc < 0) {
          iVar8 = piVar3[3];
          piVar3[1] = piVar3[1] - local_bc;
          piVar3[3] = iVar8 + local_bc;
          if (iVar8 + local_bc < 0) {
            piVar3[3] = 0;
          }
          local_bc = 0;
        }
        if (local_b8 < 0) {
          piVar3[2] = piVar3[2] - local_b8;
          iVar8 = piVar3[4];
          piVar3[4] = iVar8 + local_b8;
          if (iVar8 + local_b8 < 0) {
            piVar3[4] = 0;
          }
          local_b8 = 0;
        }
        local_80 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 2) - local_bc;
        if (piVar3[3] <= local_80) {
          local_80 = piVar3[3];
        }
        if (local_80 < 0) {
          local_80 = 0;
        }
        local_7c = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 4) - local_b8;
        if (piVar3[4] <= local_7c) {
          local_7c = piVar3[4];
        }
        if (local_7c < 0) {
          local_7c = 0;
        }
        DAT_0058364c = DAT_0058364c + 0x14;
        local_8c = local_4c;
        local_88 = local_bc;
        local_4 = 1;
        local_84 = local_b8;
        local_a0 = (int *)FUN_004754c0(0x584ae8);
        if (local_a0 != (int *)0x0) {
          if (param_5 != 0) {
            local_a0[2] = 0x180;
          }
          if (DAT_00583734 == (int *)0x0) {
            iVar6 = iVar5 + local_b8;
            iVar8 = iVar2 + local_bc;
            FUN_0043abd0(local_a0,(int *)&local_8c,local_98,iVar8,iVar6,0xf,param_6);
            if (param_4 < 0) {
              iVar2 = local_80 + iVar2 + -1 + local_bc;
              iVar5 = local_7c + iVar5 + -1 + local_b8;
            }
            else {
              local_a4 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 4);
              local_a8 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 2);
              DAT_0058364c = DAT_0058364c + 0x14;
              local_b4 = local_4c;
              local_b0 = 0;
              local_ac = 0;
              local_4._0_1_ = 2;
              FUN_00495640(local_a0,(int *)&local_b4,iVar2,iVar5,(short)param_4,0,
                           *(undefined4 *)(*(int *)((int)this + 0x3c) + 0x120),1);
              iVar8 = iVar2 + -1;
              iVar6 = iVar5 + -1;
              iVar2 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 2) + iVar2;
              iVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 4) + iVar5;
              DAT_0058364c = DAT_0058364c + -0x14;
              local_4 = CONCAT31(local_4._1_3_,1);
            }
            if (local_a0[2] <= iVar5) {
              iVar5 = local_a0[2];
            }
            if (DAT_0055c738 != 0) {
              FUN_00500650(&DAT_00584ae8,iVar8,iVar6,iVar2,iVar5);
            }
            if ((DAT_005d2094 & 2) != 0) {
              FUN_004779b0(&DAT_00584ae8,iVar8,iVar6,iVar2,iVar5,0xaaaa);
            }
          }
          else {
            iVar8 = *DAT_00583734;
            DAT_00583648 = DAT_00583648 + 0x20;
            local_6c = iVar8;
            FUN_00494610(local_2c);
            uVar7 = (uint)(-1 < param_4);
            local_4._0_1_ = 3;
            local_94 = 0;
            if (0 < iVar8) {
              local_90 = 0;
              do {
                if ((local_90 < 0) || (*DAT_00583734 <= local_94)) {
                  piVar3 = (int *)0x0;
                }
                else {
                  piVar3 = (int *)(DAT_00583734[4] + local_90);
                }
                local_b4 = (int *)*piVar3;
                local_b0 = piVar3[1];
                local_ac = piVar3[2];
                if (param_4 < 0) {
                  piVar4 = (int *)((iVar2 - uVar7) + local_bc);
                  if ((int)local_b4 < (int)piVar4) {
                    local_b4 = piVar4;
                  }
                  iVar8 = (iVar5 - uVar7) + local_b8;
                  if (local_b0 < iVar8) {
                    local_b0 = iVar8;
                  }
                  iVar8 = local_80 + uVar7 + iVar2 + -1 + local_bc;
                  if (iVar8 <= local_ac) {
                    local_ac = iVar8;
                  }
                  uVar1 = local_7c + uVar7 + iVar5 + -1 + local_b8;
                }
                else {
                  if ((int)local_b4 < (int)(iVar2 - uVar7)) {
                    local_b4 = (int *)(iVar2 - uVar7);
                  }
                  if (local_b0 < (int)(iVar5 - uVar7)) {
                    local_b0 = iVar5 - uVar7;
                  }
                  iVar8 = local_80 + uVar7 + -1 + iVar2;
                  if (iVar8 <= local_ac) {
                    local_ac = iVar8;
                  }
                  uVar1 = local_7c + uVar7 + -1 + iVar5;
                }
                local_a8 = piVar3[3];
                if ((int)uVar1 <= piVar3[3]) {
                  local_a8 = uVar1;
                }
                if (((int)local_b4 <= local_ac) && (local_b0 <= (int)local_a8)) {
                  FUN_00494630(local_2c,local_a0,(int *)&local_b4);
                  iVar2 = iVar2 - (int)local_b4;
                  iVar8 = iVar5 - local_b0;
                  FUN_0043abd0(local_2c,(int *)&local_8c,local_98,iVar2 + local_bc,iVar8 + local_b8,
                               0xf,param_6);
                  if (-1 < param_4) {
                    local_50 = (uint)*(ushort *)(*(int *)((int)local_70 + 0x1c) + 4);
                    local_54 = (uint)*(ushort *)(*(int *)((int)local_70 + 0x1c) + 2);
                    DAT_0058364c = DAT_0058364c + 0x14;
                    local_60 = local_4c;
                    local_5c = 0;
                    local_58 = 0;
                    local_4._0_1_ = 4;
                    FUN_00495640(local_2c,(int *)&local_60,iVar2,iVar8,(short)param_4,0,
                                 *(undefined4 *)(*(int *)((int)local_70 + 0x3c) + 0x120),1);
                    local_4._0_1_ = 3;
                    DAT_0058364c = DAT_0058364c + -0x14;
                  }
                  if ((DAT_005d2094 & 0x10) != 0) {
                    FUN_004779b0(&DAT_00584ae8,(int)local_b4,local_b0,local_ac,local_a8,0xffff);
                  }
                  iVar2 = local_9c;
                }
                local_94 = local_94 + 1;
                local_90 = local_90 + 0x10;
              } while (local_94 < local_6c);
            }
            DAT_00583648 = DAT_00583648 + -0x20;
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_00495590(local_2c);
          }
          FUN_004755a0(&DAT_00584ae8,local_a0);
        }
        DAT_0058364c = DAT_0058364c + -0x14;
        DAT_00583648 = DAT_00583648 + -0x20;
        local_4 = 0xffffffff;
        FUN_00495590(local_4c);
        ExceptionList = local_c;
        return 1;
      }
      DAT_00583648 = DAT_00583648 + -0x20;
      local_4 = 0xffffffff;
      FUN_00495590(local_4c);
    }
  }
  ExceptionList = local_c;
  return 0;
}


