
undefined4 __thiscall FUN_005007e0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  DWORD DVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined4 *local_80;
  int local_7c;
  int local_78;
  int local_68;
  int local_64;
  int local_60;
  int local_3c [4];
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c070;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x22ff4) != 0) {
    puVar1 = *(undefined4 **)((int)this + 0x25318);
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    ExceptionList = &local_c;
    if (param_1 != 0) {
      ExceptionList = &local_c;
      *(undefined4 *)((int)this + 0x25640) = 1;
    }
    if (*(int *)((int)this + 0x22f14) != 0) {
      *(undefined4 *)((int)this + 0x25640) = 1;
    }
    if (*(int *)((int)this + 0x25640) == 0) {
      DVar11 = GetTickCount();
      for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
        FUN_0048f370(puVar1,DVar11,1);
      }
    }
    piVar12 = (int *)FUN_004754c0((int)this);
    if (piVar12 == (int *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
    if (*(int *)((int)this + 0x25640) != 0) {
      *(undefined4 *)((int)this + 0x22f50) = 0;
      *(undefined4 *)((int)this + 0x22f58) = 0;
      *(undefined4 *)((int)this + 0x22f5c) = 0;
    }
    puVar1 = *(undefined4 **)((int)this + 0x25318);
    while (puVar10 = puVar1, puVar10 != (undefined4 *)0x0) {
      local_80 = puVar10;
      puVar1 = (undefined4 *)*puVar10;
    }
joined_r0x005008b2:
    puVar1 = local_80;
    if (puVar1 != (undefined4 *)0x0) {
      iVar15 = 0;
      GetTickCount();
      if (*(int *)((int)this + 0x25640) == 0) {
        *(undefined4 *)((int)this + 0x22ff0) = 1;
        piVar13 = (int *)FUN_0048ec90(puVar1,local_3c);
        iVar2 = *piVar13;
        iVar3 = piVar13[1];
        iVar4 = piVar13[2];
        iVar5 = piVar13[3];
        DAT_00583648 = DAT_00583648 + 0x20;
        FUN_00494610(local_2c);
        piVar13 = (int *)((int)this + 0x22fe0);
        DAT_00583650 = DAT_00583650 + 0x10;
        iVar6 = *piVar13;
        uVar7 = *(undefined4 *)((int)this + 0x22fe4);
        uVar8 = *(undefined4 *)((int)this + 0x22fe8);
        uVar9 = *(undefined4 *)((int)this + 0x22fec);
        iVar16 = *(int *)((int)this + 0x22fbc);
        local_4 = 1;
        if (0 < iVar16) {
          local_7c = 0;
          do {
            if ((local_7c < 0) || (*(int *)((int)this + 0x22fbc) <= iVar15)) {
              piVar14 = (int *)0x0;
            }
            else {
              piVar14 = (int *)(*(int *)((int)this + 0x22fcc) + local_7c);
            }
            FUN_00476010((void *)((int)this + 0x22f08),*piVar14,piVar14[1],piVar14[2],piVar14[3]);
            iVar15 = iVar15 + 1;
            local_7c = local_7c + 0x10;
          } while (iVar15 < iVar16);
        }
        iVar15 = *(int *)((int)this + 0x22f08);
        local_7c = 0;
        if (0 < iVar15) {
          local_78 = 0;
          do {
            if ((local_78 < 0) || (*(int *)((int)this + 0x22f08) <= local_7c)) {
              piVar14 = (int *)0x0;
            }
            else {
              piVar14 = (int *)(*(int *)((int)this + 0x22f18) + local_78);
            }
            iVar16 = *piVar14;
            if (*piVar14 < iVar2) {
              iVar16 = iVar2;
            }
            local_68 = piVar14[1];
            if (piVar14[1] < iVar3) {
              local_68 = iVar3;
            }
            local_64 = piVar14[2];
            if (iVar4 <= piVar14[2]) {
              local_64 = iVar4;
            }
            local_60 = piVar14[3];
            if (iVar5 <= piVar14[3]) {
              local_60 = iVar5;
            }
            if ((iVar16 <= local_64) && (local_68 <= local_60)) {
              FUN_00494630(local_2c,piVar12,piVar14);
              *piVar13 = *piVar14;
              *(int *)((int)this + 0x22fe4) = piVar14[1];
              *(int *)((int)this + 0x22fe8) = (piVar14[2] - *piVar14) + 1;
              *(int *)((int)this + 0x22fec) = (piVar14[3] - piVar14[1]) + 1;
              FUN_0048f020(puVar1,local_2c);
              if ((DAT_005d2094 & 4) != 0) {
                FUN_004779b0(&DAT_00584ae8,iVar16,local_68,local_64,local_60,0xff00);
              }
            }
            local_7c = local_7c + 1;
            local_78 = local_78 + 0x10;
          } while (local_7c < iVar15);
        }
        *piVar13 = iVar6;
        *(undefined4 *)((int)this + 0x22fe4) = uVar7;
        *(undefined4 *)((int)this + 0x22fe8) = uVar8;
        *(undefined4 *)((int)this + 0x22fec) = uVar9;
        *(undefined4 *)((int)this + 0x22ff0) = 0;
        DAT_00583650 = DAT_00583650 + -0x10;
        DAT_00583648 = DAT_00583648 + -0x20;
        local_4 = 0xffffffff;
        FUN_00495590(local_2c);
      }
      else {
        FUN_0048f020(puVar1,piVar12);
      }
      GetTickCount();
      puVar10 = *(undefined4 **)((int)this + 0x25318);
      if (puVar1 == *(undefined4 **)((int)this + 0x25318)) goto LAB_00500b82;
      do {
        local_80 = puVar10;
        if (local_80 == (undefined4 *)0x0) break;
        puVar10 = (undefined4 *)*local_80;
      } while ((undefined4 *)*local_80 != puVar1);
      goto joined_r0x005008b2;
    }
LAB_00500b82:
    FUN_004755a0(this,piVar12);
    *(undefined4 *)((int)this + 0x25640) = 0;
  }
  ExceptionList = local_c;
  return 1;
}


