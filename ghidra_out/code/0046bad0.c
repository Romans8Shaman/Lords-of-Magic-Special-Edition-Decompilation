
void __thiscall FUN_0046bad0(void *this,void *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  int *piVar3;
  void *this_00;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int local_34;
  char *local_30;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  char *local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  *(int *)((int)this + 0x3c) = param_2 + DAT_005a7ac8;
  iVar5 = DAT_005a7acc;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(int *)((int)this + 0x40) = param_3 + iVar5;
  piVar3 = (int *)FUN_00492760(&DAT_005a7b50,*(int *)this);
  if (piVar3 != (int *)0x0) {
    FUN_00496340(param_1,piVar3,param_2,param_3,0);
  }
  this_00 = (void *)FUN_00492de0(&DAT_005a7b50,*(int *)((int)this + 8));
  if (((*(byte *)((int)this + 0x44) & 1) == 0) || (this_00 == (void *)0x0)) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)((int)this_00 + 8);
  }
  if ((*(int *)((int)this + 4) != 0) && (local_18 = 0, 0 < *(int *)((int)this + 0xc))) {
    local_34 = 0;
    do {
      if (0 < *(int *)(local_34 + 0x28 + *(int *)((int)this + 4))) {
        piVar3 = (int *)FUN_00491c20(&DAT_005a7b50,
                                     *(int *)(local_34 + *(int *)((int)this + 4) + 0x1c));
        if ((piVar3 != (int *)0x0) &&
           (piVar4 = (int *)(*(int *)((int)this + 4) + local_34),
           iVar5 = FUN_00491910(piVar3,&local_10,*piVar4,piVar4[1]), iVar5 != 0)) {
          if (*piVar3 == 0xf) {
            FUN_00493a00((void *)piVar3[1],&local_10,*(int *)(local_34 + *(int *)((int)this + 4)),
                         *(int *)(local_34 + 4 + *(int *)((int)this + 4)));
            local_28 = (local_8 - local_10) + 1;
            local_24 = (local_4 - local_c) + 1;
          }
          else {
            local_28 = FUN_004918d0(piVar3);
            local_24 = FUN_004918f0(piVar3);
          }
          piVar4 = (int *)(local_34 + *(int *)((int)this + 4));
          iVar10 = ((piVar4[2] >> 1) - (local_28 >> 1)) + *piVar4;
          iVar5 = ((piVar4[3] >> 1) - (local_24 + local_1c >> 1)) + piVar4[1];
          if ((*(byte *)(piVar4 + 5) & 8) == 0) {
            iVar7 = 1;
            iVar6 = -1;
          }
          else {
            iVar7 = *(int *)((int)this + 0x50);
            iVar6 = *(int *)((int)this + 0x4c);
          }
          FUN_004935c0(piVar3,param_1,
                       (*(int *)(local_34 + *(int *)((int)this + 4)) - local_10) + iVar10 + param_2,
                       (piVar4[1] - local_c) + iVar5 + param_3,iVar6,iVar7);
          pvVar2 = DAT_005a7b78;
          if (((this_00 != (void *)0x0) && ((char)*(uint *)((int)this + 0x20) == '\x06')) &&
             ((*(uint *)((int)this + 0x20) & 0x100) == 0)) {
            uVar1 = *(undefined4 *)(local_34 + 0x20 + *(int *)((int)this + 4));
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            }
            else {
              iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
              iVar7 = *(int *)((int)pvVar2 + 0x50);
              *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
              *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar1;
            }
            pvVar2 = DAT_005a7b78;
            uVar1 = *(undefined4 *)(local_34 + 0x24 + *(int *)((int)this + 4));
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            }
            else {
              iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
              iVar7 = *(int *)((int)pvVar2 + 0x50);
              *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
              *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar1;
            }
            pvVar2 = DAT_005a7b78;
            uVar1 = *(undefined4 *)(local_34 + 0x28 + *(int *)((int)this + 4));
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            }
            else {
              iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
              iVar7 = *(int *)((int)pvVar2 + 0x50);
              *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
              *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar1;
            }
            FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x20),*(int **)((int)this + 0x24));
            pvVar2 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
              piVar3 = (int *)((int)DAT_005a7b78 + 0x50);
              iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
              cVar8 = (char)*(undefined4 *)(*piVar3 + -8 + iVar7 * 8);
              local_30 = *(char **)(*piVar3 + -4 + iVar7 * 8);
            }
            else {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
              cVar8 = '\0';
              local_30 = local_14;
            }
            iVar7 = *(int *)((int)pvVar2 + 0x90);
            *(undefined4 *)((int)pvVar2 + 0x90) = 0;
            *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            if (iVar7 == 0) {
              if (cVar8 != '\b') {
                *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
                FUN_004d4550(pvVar2);
                *(undefined4 *)((int)pvVar2 + 0x90) = 0;
                *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
                local_30 = (char *)0x0;
              }
            }
            else {
              local_30 = (char *)0x0;
            }
            if (local_30 != (char *)0x0) {
              uVar9 = 0xffffffff;
              pcVar11 = local_30;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar8 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar8 != '\0');
              iVar7 = FUN_0047ef30(this_00,(int)local_30,~uVar9 - 1);
              FUN_0047f0a0(this_00,param_1,(int)local_30,(local_28 - iVar7 >> 1) + iVar10 + param_2,
                           local_24 + iVar5 + param_3,~uVar9 - 1,0,-1);
            }
          }
        }
        piVar3 = (int *)FUN_00491c20(&DAT_005a7b50,
                                     *(int *)(local_34 + 0x2c + *(int *)((int)this + 4)));
        if ((piVar3 != (int *)0x0) &&
           (iVar5 = FUN_00491910(piVar3,&local_10,*(int *)(local_34 + *(int *)((int)this + 4)),
                                 *(int *)(local_34 + 4 + *(int *)((int)this + 4))), iVar5 != 0)) {
          if (*piVar3 == 0xf) {
            FUN_00493a00((void *)piVar3[1],&local_10,*(int *)(local_34 + *(int *)((int)this + 4)),
                         *(int *)(local_34 + 4 + *(int *)((int)this + 4)));
            iVar5 = (local_8 - local_10) + 1;
            iVar10 = (local_4 - local_c) + 1;
          }
          else {
            iVar5 = FUN_004918d0(piVar3);
            iVar10 = FUN_004918f0(piVar3);
          }
          piVar4 = (int *)(*(int *)((int)this + 4) + local_34);
          FUN_004935c0(piVar3,param_1,
                       (param_2 + ((piVar4[2] >> 1) - (iVar5 >> 1)) + *piVar4 * 2) - local_10,
                       (param_3 + ((piVar4[3] >> 1) - (iVar10 >> 1)) + piVar4[1] * 2) - local_c,-1,1
                      );
        }
      }
      local_18 = local_18 + 1;
      local_34 = local_34 + 0x30;
    } while (local_18 < *(int *)((int)this + 0xc));
  }
  return;
}


