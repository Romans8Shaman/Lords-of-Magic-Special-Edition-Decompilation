
undefined4 __thiscall
FUN_0052c0c0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *this_00;
  uint uVar5;
  int iVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unused_reg_1;
  undefined1 *puVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  int local_204;
  uint *local_200;
  int local_1fc;
  undefined1 *local_1f8;
  int local_1f4;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  uint local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  undefined4 local_1cc;
  int local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  undefined1 local_1b6;
  uint local_1b4;
  undefined4 local_1b0;
  uint local_1ac;
  undefined4 local_1a4;
  int local_1a0;
  uint local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_c8 [200];
  
  iVar10 = 0;
  if (param_5 == 0) {
    iVar1 = FUN_0052bd80(param_1,param_2);
  }
  else {
    iVar1 = FUN_004a51c0(&DAT_005ae958,param_1,param_2);
  }
  local_1c4 = 0;
  local_1c0 = 0;
  local_1cc = 0;
  local_1bc = 0;
  local_1f4 = -1;
  local_1b8 = 0;
  local_1d4 = 0;
  local_1b6 = 0;
  cVar9 = -2;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    iVar2 = FUN_004a8330(&DAT_005ae958,iVar1,1);
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x30) & 0x40) != 0)) {
      local_1d4 = 1;
    }
    FUN_0053a320((undefined1 *)((int)this + 0x14),0x1e,0xc,&LAB_0052bf80);
    local_200 = (uint *)((int)this + 0x18);
    local_1e8 = -2;
    local_1fc = 0;
    local_1f8 = (undefined1 *)0x0;
    local_204 = 0;
    puVar7 = local_c8;
    local_1e4 = 0x1e;
    do {
      puVar3 = FUN_00485080(&DAT_005aa12c,*local_200,0x2f);
      if ((puVar3 != (undefined4 *)0x0) && (puVar3[0x12] == *(int *)this)) {
        iVar2 = FUN_004c1cf0((int)puVar3);
        if (iVar2 == 0) {
          if (puVar3[0x12] != DAT_005cc9d4) {
            iVar2 = FUN_00420560((int)puVar3);
            if (iVar2 != 0) goto LAB_0052c27f;
          }
          iVar2 = puVar3[7];
          if ((iVar2 != iVar1) && (local_1e0 = iVar2, (puVar3[0xc] & 0x40000000) == 0)) {
            iVar2 = FUN_0052bf50((int)puVar3);
            if ((local_1e8 != iVar2) || ((6 < iVar10 + 1 && (cVar9 != *(char *)(puVar3 + 0x16b)))))
            {
              iVar10 = 0;
              puVar7 = puVar7 + 4;
              local_1e8 = iVar2;
            }
            cVar9 = *(char *)(puVar3 + 0x16b);
            iVar2 = puVar3[7];
            iVar10 = iVar10 + 1;
            *(int *)(puVar7 + -4) = iVar10;
            local_1fc = local_1fc + iVar2 % DAT_005ae9c4;
            local_1f8 = (undefined1 *)((int)local_1f8 + iVar2 / DAT_005ae9c4);
            local_204 = local_204 + 1;
          }
        }
      }
LAB_0052c27f:
      local_200 = local_200 + 3;
      local_1e4 = local_1e4 + -1;
    } while (local_1e4 != 0);
    if (local_204 != 0) {
      local_1e0 = FUN_004a51c0(&DAT_005ae958,local_1fc / local_204,(int)local_1f8 / local_204);
    }
    FUN_004a9a60(&DAT_005ae958,&local_1dc,iVar1);
    if ((local_1dc & 0x200000) != 0) {
      local_1c8 = FUN_00454fc0(iVar1,local_204);
    }
  }
  local_1e8 = -2;
  cVar9 = -2;
  local_204 = 0;
  local_1d8 = 0;
  local_1fc = 0;
  local_1f8 = local_c8;
  local_200 = (uint *)((int)this + 0x18);
  local_1d0 = 0x1e;
  uVar8 = local_1cc;
  do {
    puVar3 = FUN_00485080(&DAT_005aa12c,*local_200,0x2f);
    if ((((((puVar3 != (undefined4 *)0x0) && (puVar3[0x12] == *(int *)this)) &&
          (iVar10 = FUN_004c1cf0((int)puVar3), iVar10 == 0)) &&
         ((puVar3[0x12] == DAT_005cc9d4 || (iVar10 = FUN_00420560((int)puVar3), iVar10 == 0)))) &&
        ((puVar3[7] != iVar1 && ((puVar3[0xc] & 0x40000000) == 0)))) &&
       ((puVar4 = FUN_00485080(&DAT_005aa12c,*local_200,0x2f), puVar4 != (undefined4 *)0x0 ||
        (local_200[1] != 0)))) {
      iVar10 = FUN_00420580((int)puVar3);
      if (iVar10 == 0) {
        local_1b4 = *local_200;
        local_1ac = local_200[1];
        if (local_1ac == 0) {
          local_1ac = 0xffffffff;
        }
        local_1a4 = puVar3[7];
        local_19c = -(uint)(param_3 != 0) & 0x40;
        local_194 = 0;
        local_1a0 = iVar1;
        if (param_3 == 0) {
          local_1b0 = 0xffffffff;
        }
        else {
          iVar10 = FUN_004a6e60(&DAT_005ae958,param_1,param_2);
          puVar3 = FUN_00485080(&DAT_005aa12c,iVar10,0x2f);
          if (puVar3 == (undefined4 *)0x0) {
            uVar5 = FUN_00482ac0(&DAT_005aa12c,iVar10,7);
            if (uVar5 != 0) {
              puVar3 = (undefined4 *)FUN_00482ac0(&DAT_005aa12c,*(int *)(uVar5 + 0x44),0);
            }
            if (puVar3 == (undefined4 *)0x0) {
              local_1b0 = 0xffffffff;
              goto LAB_0052c68e;
            }
          }
          local_1b0 = puVar3[10];
        }
LAB_0052c68e:
        local_198 = 0xffffffff;
        if (((param_4 == 0) && ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)) &&
           ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 8)) {
          local_19c = local_19c | 8;
        }
        iVar10 = FUN_0052c010(this,(int *)&local_1b4);
        if (iVar10 == 0) {
          FUN_0047c570((int *)&local_1b4,0);
        }
      }
      else {
        if (local_1f4 < 0) {
          if (local_1e0 == iVar1) {
            local_1f4 = puVar3[0x11];
          }
          else {
            local_1f4 = FUN_004a8b50(&DAT_005ae958,local_1e0,iVar1);
          }
        }
        iVar10 = iVar1;
        if (local_1d4 == 0) {
          iVar2 = FUN_0052bf50((int)puVar3);
          if ((local_1e8 != iVar2) || ((6 < local_204 + 1 && (cVar9 != *(char *)(puVar3 + 0x16b)))))
          {
            local_1fc = local_1fc + 2;
            local_1f8 = local_1f8 + 4;
            local_204 = 0;
            local_1e8 = iVar2;
          }
          cVar9 = *(char *)(puVar3 + 0x16b);
          if (2 < local_1fc) {
            iVar2 = local_1fc + -2;
            do {
              iVar10 = FUN_004a4c70(&DAT_005ae958,iVar10,local_1f4 - 4U & 7,puVar3[0x15]);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          iVar2 = *(int *)(local_1f8 + -4) >> 1;
          if (0 < iVar2) {
            do {
              iVar10 = FUN_004a4c70(&DAT_005ae958,iVar10,local_1f4 - 2U & 7,puVar3[0x15]);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          if (0 < local_204) {
            iVar2 = local_204;
            do {
              iVar10 = FUN_004a4c70(&DAT_005ae958,iVar10,local_1f4 + 2U & 7,puVar3[0x15]);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        this_00 = (void *)FUN_0052be20((int)this);
        uVar8 = extraout_EDX;
        if (this_00 != (void *)0x0) {
          FUN_0041ed80(this_00,0x18);
          uVar8 = extraout_EDX_00;
        }
        if (DAT_00583100 == '\x02') {
          iVar2 = FUN_00420620((int)puVar3);
          if ((iVar2 == 0) &&
             ((DAT_005d209c != '\x01' ||
              (uVar5 = FUN_00431160((int)puVar3,unused_reg_1,0), uVar5 != 0)))) {
            iVar2 = local_1d8;
            if (((local_1dc & 0x200000) != 0) && (local_1d8 < local_1c8)) {
              iVar6 = FUN_004550e0(local_1d8);
              if (iVar6 != -1) {
                iVar10 = iVar6;
              }
              local_1d8 = iVar2 + 1;
            }
            if (DAT_005851a0 == 0) {
              FUN_00404da0(*local_200,iVar10);
            }
            else {
              FUN_00404d50(*local_200,iVar10);
            }
          }
        }
        else if ((DAT_005d209c != '\x01') || (uVar5 = FUN_00431160((int)puVar3,uVar8,0), uVar5 != 0)
                ) {
          FUN_00404d50(*local_200,iVar10);
        }
        local_204 = local_204 + 1;
        if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
          FUN_004fbb10(&DAT_005ae974,iVar10,puVar3[10]);
        }
      }
      uVar8 = 1;
      local_200[1] = 0;
    }
    local_200 = local_200 + 3;
    local_1d0 = local_1d0 + -1;
    if (local_1d0 == 0) {
      return uVar8;
    }
  } while( true );
}


