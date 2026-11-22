
undefined4 __cdecl FUN_004f3810(ushort *param_1)

{
  ushort *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  int *piVar8;
  int iVar9;
  int **ppiVar10;
  int *piVar11;
  int local_94;
  int local_90;
  int local_8c [5];
  int local_78;
  int *local_6c [2];
  uint local_64;
  uint local_60;
  undefined4 local_24;
  undefined4 local_20;
  ushort *puStack_1c;
  undefined4 local_18;
  undefined4 local_4;
  
  *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + (int)param_1;
  if ((*param_1 & 8) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + (int)param_1;
  }
  if ((*param_1 & 0x30) != 0) {
    *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + (int)param_1;
  }
  local_90 = 0;
  if (param_1[0xd] != 0) {
    local_8c[0] = 0;
    do {
      iVar9 = local_8c[0] + *(int *)(param_1 + 0xe);
      local_8c[2] = 0;
      *(byte **)(iVar9 + 0xc) = (byte *)(*(int *)(iVar9 + 0xc) + (int)param_1);
      local_78 = iVar9;
      if (*(char *)(iVar9 + 0xb) != '\0') {
        do {
          local_8c[3] = 0;
          iVar6 = *(int *)(iVar9 + 0xc) + local_8c[2] * 8;
          *(byte **)(iVar6 + 4) =
               (byte *)(*(int *)(*(int *)(iVar9 + 0xc) + 4 + local_8c[2] * 8) + (int)param_1);
          if (*(short *)(iVar6 + 2) != 0) {
            local_94 = 0;
            local_8c[4] = iVar6;
            do {
              puVar7 = (ushort *)(local_94 + *(int *)(iVar6 + 4));
              if ((*puVar7 & 8) == 0) {
                puVar1 = puVar7 + 6;
                if (*(int *)(puVar7 + 6) != 0) {
                  *(byte **)puVar1 = (byte *)(*(int *)(puVar7 + 6) + (int)param_1);
                  if ((*param_1 & 0x33) == 0) {
                    ppiVar10 = local_6c;
                    for (iVar9 = 0x1b; iVar9 != 0; iVar9 = iVar9 + -1) {
                      *ppiVar10 = (int *)0x0;
                      ppiVar10 = ppiVar10 + 1;
                    }
                    local_6c[0] = (int *)0x6c;
                    local_4 = 0x840;
                    local_60 = (uint)puVar7[1];
                    local_64 = (uint)puVar7[2];
                    local_6c[1] = (int *)0x1007;
                    local_24 = 0x20;
                    local_18 = 8;
                    local_20 = 0x60;
                    piVar5 = DAT_00584ab4;
                    (/*IC:004f3981*/**(code **)(*DAT_00584ab4 + 0x18))(DAT_00584ab4,local_6c,puVar1,0);
                    (/*IC:004f3989*/**(code **)(**(int **)puVar1 + 0x6c))(*(int **)puVar1);
                    local_8c[1] = (int)*(byte *)((int)param_1 + 3);
                    local_8c[2] = local_8c[1];
                    (/*IC:004f39a5*/**(code **)(**(int **)puVar1 + 0x74))(*(int **)puVar1,8,local_8c + 1);
                    piVar2 = local_8c;
                    for (iVar9 = 0x1b; iVar9 != 0; iVar9 = iVar9 + -1) {
                      *piVar2 = 0;
                      piVar2 = piVar2 + 1;
                    }
                    local_8c[0] = 0x6c;
                    (/*IC:004f39cd*/**(code **)(**(int **)puVar1 + 100))(*(int **)puVar1,0,local_8c,1,0);
                    iVar9 = 0;
                    if (puVar7[2] != 0) {
                      uVar4 = (uint)puVar7[1];
                      piVar2 = local_6c[1];
                      do {
                        piVar8 = piVar5;
                        piVar11 = piVar2;
                        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                          *piVar11 = *piVar8;
                          piVar8 = piVar8 + 1;
                          piVar11 = piVar11 + 1;
                        }
                        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                          *(char *)piVar11 = (char)*piVar8;
                          piVar8 = (int *)((int)piVar8 + 1);
                          piVar11 = (int *)((int)piVar11 + 1);
                        }
                        uVar4 = (uint)puVar7[1];
                        piVar5 = (int *)((int)piVar5 + uVar4);
                        piVar2 = (int *)((int)piVar2 + local_8c[4]);
                        iVar9 = iVar9 + 1;
                      } while (iVar9 < (int)(uint)puVar7[2]);
                      param_1 = puStack_1c;
                    }
                    (/*IC:004f3a34*/**(code **)(**(int **)puVar1 + 0x80))(*(int **)puVar1,0);
                    iVar6 = local_8c[4];
                    iVar9 = local_78;
                  }
                }
                if (((char)(*puVar7 >> 8) != '\0') && ((*puVar7 & 8) == 0)) {
                  *(byte **)(puVar7 + 4) = (byte *)(*(int *)(puVar7 + 4) + (int)param_1);
                }
              }
              else {
                puVar1 = (ushort *)
                         (*(int *)(puVar7 + 6) * 0x10 +
                         *(int *)(*(int *)(*(int *)(param_1 + 0xe) + 0xc) + 4));
                *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar1 + 6);
                puVar7[1] = puVar1[1];
                puVar7[2] = puVar1[2];
                *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar1 + 4);
                *puVar7 = *puVar7 & 0xff | *puVar1 & 0xff00;
              }
              local_8c[3] = local_8c[3] + 1;
              local_94 = local_94 + 0x10;
            } while (local_8c[3] < (int)(uint)*(ushort *)(iVar6 + 2));
          }
          local_8c[2] = local_8c[2] + 1;
        } while (local_8c[2] < (int)(uint)*(byte *)(iVar9 + 0xb));
      }
      local_90 = local_90 + 1;
      local_8c[0] = local_8c[0] + 0x10;
    } while (local_90 < (int)(uint)param_1[0xd]);
  }
  return 0;
}


