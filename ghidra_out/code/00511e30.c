
void __cdecl op_toptriangle(void *param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  uint *puVar6;
  int iVar7;
  undefined8 uVar8;
  uint local_bc;
  undefined4 local_b8;
  undefined4 *local_b4;
  DWORD local_b0;
  uint local_ac;
  int local_a8 [8];
  uint local_88 [17];
  undefined4 local_44 [14];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c35b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00495260(local_a8,0x20,0x20);
  local_4 = 0;
  FUN_0040adb0(param_1,&local_bc);
  iVar1 = FUN_004026a0(&local_bc,local_88 + 2,&local_b0,(float *)&local_b4);
  if (iVar1 != 0) {
    uVar8 = FUN_0043da90(param_1,(int *)(local_88 + 8));
    if ((int)uVar8 == 0) goto LAB_005121f9;
    uVar8 = FUN_0043da90(param_1,(int *)(local_88 + 7));
    if ((int)uVar8 == 0) goto LAB_005121f9;
    FUN_0040adb0(param_1,&local_bc);
    iVar1 = FUN_004026a0(&local_bc,local_88 + 1,&local_b0,(float *)&local_b4);
    if (iVar1 != 0) {
      uVar8 = FUN_0043da90(param_1,(int *)(local_88 + 6));
      if ((int)uVar8 == 0) goto LAB_005121f9;
      FUN_0040adb0(param_1,&local_bc);
      iVar1 = FUN_004026a0(&local_bc,local_88 + 5,&local_b0,(float *)&local_b4);
      if (iVar1 == 0) {
        FUN_00404ab0(param_1,0xe);
        goto LAB_005121f9;
      }
      FUN_0040adb0(param_1,&local_bc);
      iVar1 = FUN_004026a0(&local_bc,local_88,&local_b0,(float *)&local_b4);
      if (iVar1 != 0) {
        FUN_0040adb0(param_1,&local_bc);
        iVar1 = FUN_004026a0(&local_bc,local_88 + 4,&local_b0,(float *)&local_b4);
        if (iVar1 == 0) {
          FUN_00404ab0(param_1,0xe);
          goto LAB_005121f9;
        }
        FUN_0040adb0(param_1,&local_bc);
        iVar1 = FUN_004026a0(&local_bc,local_88 + 3,&local_b0,(float *)&local_b4);
        if (iVar1 == 0) {
          FUN_00404ab0(param_1,0xe);
          goto LAB_005121f9;
        }
        FUN_0040adb0(param_1,&local_bc);
        iVar1 = FUN_004026a0(&local_bc,&local_ac,&local_b0,(float *)&local_b4);
        if (iVar1 != 0) {
          if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
            iVar1 = *(int *)((int)param_1 + 0x54) + 1;
            *(int *)((int)param_1 + 0x54) = iVar1;
            local_bc = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
            local_b8 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
          }
          else {
            FUN_00404ab0(param_1,6);
            local_bc = 0;
          }
          iVar1 = FUN_004026a0(&local_bc,local_88 + 0xf,&local_b0,(float *)&local_b4);
          if (iVar1 == 0) {
            FUN_00404ab0(param_1,0xe);
          }
          else {
            iVar1 = *(int *)((int)param_1 + 0x90);
            *(undefined4 *)((int)param_1 + 0x90) = 0;
            *(undefined4 *)((int)param_1 + 0xa4) = 0;
            if (iVar1 == 0) {
              piVar2 = (int *)FUN_00492760(&DAT_005a7b50,local_ac);
              if (piVar2 == (int *)0x0) {
                FUN_004d41c0(param_1,s_no_doodad_00573b54);
              }
              else {
                local_b4 = (undefined4 *)FUN_004754c0(0x584ae8);
                if (local_b4 != (undefined4 *)0x0) {
                  FUN_00495db0(local_a8,piVar2,0,0);
                  local_b0 = GetTickCount();
                  local_88[9] = 0;
                  local_88[10] = 0;
                  local_88[0xb] = 0x1ff0000;
                  local_88[0xc] = 0;
                  local_88[0xd] = 0;
                  local_88[0xe] = 0x3ff0000;
                  puVar6 = local_88;
                  iVar1 = 3;
                  puVar3 = local_88 + 4;
                  do {
                    puVar3[-1] = puVar3[-1] << 0x10;
                    *puVar3 = *puVar3 << 0x10;
                    *puVar6 = *puVar6 << 0x10;
                    puVar6 = puVar6 + 1;
                    iVar1 = iVar1 + -1;
                    puVar3 = puVar3 + 2;
                  } while (iVar1 != 0);
                  puVar6 = local_88;
                  puVar4 = local_44;
                  iVar1 = 0;
                  do {
                    iVar7 = iVar1 + 8;
                    puVar4[-1] = *(undefined4 *)((int)local_88 + iVar1 + 0xc);
                    *puVar4 = *(undefined4 *)((int)local_88 + iVar1 + 0x10);
                    puVar4[1] = *(undefined4 *)((int)local_88 + iVar1 + 0x24);
                    puVar4[2] = *(undefined4 *)((int)local_88 + iVar1 + 0x28);
                    puVar4[3] = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar4 = puVar4 + 5;
                    iVar1 = iVar7;
                  } while (iVar7 < 0x18);
                  DVar5 = GetTickCount();
                  if (*(int *)((int)param_1 + 0x54) == 0) {
                    *(undefined4 *)((int)param_1 + 0x90) = 3;
                    FUN_004d4550(param_1);
                    *(undefined4 *)((int)param_1 + 0x90) = 0;
                    *(undefined4 *)((int)param_1 + 0xa4) = 0;
                  }
                  else {
                    iVar7 = *(int *)((int)param_1 + 0x54) + -1;
                    *(int *)((int)param_1 + 0x54) = iVar7;
                    iVar1 = *(int *)((int)param_1 + 0x50);
                    *(undefined4 *)(iVar1 + iVar7 * 8) = 1;
                    *(DWORD *)(iVar1 + 4 + iVar7 * 8) = DVar5 - local_b0;
                  }
                  FUN_004755a0(&DAT_00584ae8,local_b4);
                  FUN_004753d0(0x584ae8);
                }
              }
            }
          }
          goto LAB_005121f9;
        }
      }
    }
  }
  *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
LAB_005121f9:
  DAT_00583648 = DAT_00583648 + -0x20;
  local_4 = 0xffffffff;
  FUN_00495590(local_a8);
  ExceptionList = local_c;
  return;
}


