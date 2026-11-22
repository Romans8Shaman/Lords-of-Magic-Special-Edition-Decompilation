
undefined4 __thiscall
FUN_0049cd80(void *this,uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  int *local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c [8];
  int local_2c [4];
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054af0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) & 0xfe;
  iVar2 = FUN_0049e700(this,param_1,param_2);
  if ((((iVar2 == 0) && (*(int *)((int)this + 0x1c) != 0)) &&
      (*(int **)((int)this + 0x3c) != (int *)0x0)) &&
     ((**(int **)((int)this + 0x3c) != 0 && (piVar3 = FUN_0049d360((int)this), piVar3 != (int *)0x0)
      ))) {
    FUN_0049cc80(this,&local_54);
    iVar2 = local_50 + param_2;
    uVar6 = param_1 + local_54;
    local_84 = uVar6;
    FUN_00495120(local_2c,piVar3,*(int **)((int)this + 0x3c),*(int *)((int)this + 0x1c));
    if (local_2c[0] != 0) {
      if (*(int *)((int)this + 0x30) != 0) {
        local_1c = *(int *)((int)this + 0x30);
      }
      local_88 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 4);
      local_8c = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 2);
      local_94 = 0;
      DAT_0058364c = DAT_0058364c + 0x14;
      local_90 = 0;
      local_98 = local_2c;
      local_4 = 1;
      piVar3 = (int *)FUN_004754c0(0x584ae8);
      if (piVar3 != (int *)0x0) {
        if (param_4 != 0) {
          piVar3[2] = 0x180;
        }
        iVar7 = *(int *)(*(int *)((int)this + 0x3c) + 0x120);
        bVar10 = (byte)iVar7;
        if (DAT_00583734 == (int *)0x0) {
          if (param_5 == 1) {
            if (iVar7 < 0) {
              FUN_00496560(piVar3,(int *)&local_98,uVar6,iVar2,0);
            }
            else {
              FUN_00496c10(piVar3,(int *)&local_98,uVar6,iVar2,0,bVar10);
            }
          }
          else if (param_5 == 2) {
            if (iVar7 < 0) {
              FUN_00496340(piVar3,(int *)&local_98,uVar6,iVar2,0);
            }
            else {
              FUN_00496880(piVar3,(int *)&local_98,uVar6,iVar2,0,bVar10);
            }
          }
          else if (param_5 == 3) {
            FUN_00496f70(piVar3,(int *)&local_98,uVar6,iVar2,0);
          }
          if (param_3 < 0) {
            uVar4 = local_8c - 1;
            uVar1 = local_88 - 1;
            iVar7 = iVar2;
            uVar8 = uVar6;
          }
          else {
            FUN_00495640(piVar3,(int *)&local_98,uVar6,iVar2,(short)param_3,0,iVar7,1);
            iVar7 = iVar2 + -1;
            uVar8 = uVar6 - 1;
            uVar4 = local_8c;
            uVar1 = local_88;
          }
          iVar9 = uVar1 + iVar2;
          if (piVar3[2] <= (int)(uVar1 + iVar2)) {
            iVar9 = piVar3[2];
          }
          if (DAT_0055c738 != 0) {
            FUN_00500650(&DAT_00584ae8,uVar8,iVar7,uVar6 + uVar4,iVar9);
          }
          if ((DAT_005d2094 & 2) != 0) {
            FUN_004779b0(&DAT_00584ae8,uVar8,iVar7,uVar6 + uVar4,iVar9,0xaaaa);
          }
        }
        else {
          local_6c = *DAT_00583734;
          DAT_00583648 = DAT_00583648 + 0x20;
          FUN_00494610(local_4c);
          local_4._0_1_ = 2;
          uVar4 = (uint)(-1 < param_3);
          local_68 = 0;
          if (0 < local_6c) {
            local_60 = uVar6 - uVar4;
            local_58 = iVar2 - uVar4;
            local_64 = uVar4 + uVar6;
            local_5c = uVar4 + iVar2;
            local_70 = 0;
            do {
              if ((local_70 < 0) || (*DAT_00583734 <= local_68)) {
                piVar5 = (int *)0x0;
              }
              else {
                piVar5 = (int *)(DAT_00583734[4] + local_70);
              }
              local_80 = *piVar5;
              local_7c = piVar5[1];
              if (local_80 < local_60) {
                local_80 = local_60;
              }
              if (local_7c < local_58) {
                local_7c = local_58;
              }
              iVar9 = (local_8c - 1) + local_64;
              local_78 = piVar5[2];
              if (iVar9 <= piVar5[2]) {
                local_78 = iVar9;
              }
              iVar9 = (local_88 - 1) + local_5c;
              local_74 = piVar5[3];
              if (iVar9 <= piVar5[3]) {
                local_74 = iVar9;
              }
              if ((local_80 <= local_78) && (local_7c <= local_74)) {
                FUN_00494630(local_4c,piVar3,&local_80);
                uVar6 = local_84 - local_80;
                iVar9 = iVar2 - local_7c;
                if (param_5 == 1) {
                  if (iVar7 < 0) {
                    FUN_00496560(local_4c,(int *)&local_98,uVar6,iVar9,0);
                  }
                  else {
                    FUN_00496c10(local_4c,(int *)&local_98,uVar6,iVar9,0,bVar10);
                  }
                }
                else if (param_5 == 2) {
                  if (iVar7 < 0) {
                    FUN_00496340(local_4c,(int *)&local_98,uVar6,iVar9,0);
                  }
                  else {
                    FUN_00496880(local_4c,(int *)&local_98,uVar6,iVar9,0,bVar10);
                  }
                }
                else if (param_5 == 3) {
                  FUN_00496f70(local_4c,(int *)&local_98,uVar6,iVar9,0);
                }
                if (-1 < param_3) {
                  FUN_00495640(local_4c,(int *)&local_98,uVar6,iVar9,(short)param_3,0,iVar7,1);
                }
                if ((DAT_005d2094 & 0x10) != 0) {
                  FUN_004779b0(&DAT_00584ae8,local_80,local_7c,local_78,local_74,0xaaaa);
                }
              }
              local_68 = local_68 + 1;
              local_70 = local_70 + 0x10;
            } while (local_68 < local_6c);
          }
          DAT_00583648 = DAT_00583648 + -0x20;
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_00495590(local_4c);
        }
        if (((byte)DAT_00583738 & 1) != 0) {
          iVar2 = FUN_0047efd0(piVar3,0xff,0xff,0xff);
          local_84 = param_2 + 5;
          FUN_004946d0(piVar3,param_1 - 5,param_2,param_1 + 5,param_2,(short)iVar2);
          uVar6 = local_84;
          FUN_004946d0(piVar3,param_1,param_2 - 5,param_1,local_84,(short)iVar2);
          if (DAT_0055c738 != 0) {
            FUN_00500650(&DAT_00584ae8,param_1 - 5,param_2 - 5,param_1 + 5,uVar6);
          }
        }
        FUN_004755a0(&DAT_00584ae8,piVar3);
      }
      DAT_0058364c = DAT_0058364c + -0x14;
      DAT_00583648 = DAT_00583648 + -0x20;
      local_4 = 0xffffffff;
      FUN_00495590(local_2c);
      ExceptionList = local_c;
      return 1;
    }
    DAT_00583648 = DAT_00583648 + -0x20;
    local_4 = 0xffffffff;
    FUN_00495590(local_2c);
  }
  ExceptionList = local_c;
  return 0;
}


