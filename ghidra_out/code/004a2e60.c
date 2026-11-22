
void __fastcall FUN_004a2e60(int *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *this;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  iVar6 = 0;
  local_4 = 0;
  if (0 < *param_1) {
    do {
      pvVar3 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)(iVar6 + 4 + param_1[6]),0);
      this = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)(iVar6 + 0xc + param_1[6]),0);
      if (((pvVar3 != (void *)0x0) && (this != (void *)0x0)) &&
         ((*(byte *)(iVar6 + param_1[6]) & 2) != 0)) {
        if (((~*(uint *)((int)pvVar3 + 0x30) & 0x100) == 0) ||
           ((~*(uint *)((int)this + 0x30) & 0x100) == 0)) {
          FUN_0041dc10(this,0);
          FUN_004a2d80((void *)(iVar6 + param_1[6]),0);
        }
        if (*(int *)((int)pvVar3 + 0x1c) == *(int *)((int)this + 0x1c)) {
          iVar4 = *(int *)((int)pvVar3 + 0x44);
        }
        else {
          iVar4 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)pvVar3 + 0x1c),*(int *)((int)this + 0x1c)
                              );
        }
        if (*(int *)((int)pvVar3 + 0x44) == iVar4) {
          FUN_004a35c0((uint *)(iVar6 + param_1[6]));
          if ((*(byte *)(iVar6 + param_1[6]) & 4) == 0) {
            FUN_0041efa0(pvVar3,*(uint *)(iVar6 + param_1[6] + 0x14));
            *(uint *)(param_1[6] + iVar6) = *(uint *)(param_1[6] + iVar6) | 4;
          }
          *(int *)(iVar6 + 0x24 + param_1[6]) = *(int *)(iVar6 + 0x24 + param_1[6]) + -1;
          pbVar1 = (byte *)(iVar6 + param_1[6]);
          if ((*(int *)(iVar6 + 0x24 + param_1[6]) < 0) ||
             (((*pbVar1 & 4) != 0 && (*(int *)(pbVar1 + 0x14) != *(int *)((int)pvVar3 + 0x544))))) {
            FUN_0041dc10(this,0);
            pvVar3 = DAT_005a7b78;
            uVar2 = *(undefined4 *)(iVar6 + 4 + param_1[6]);
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
              FUN_004d4550(pvVar3);
              *(undefined4 *)((int)pvVar3 + 0x90) = 0;
              *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
            }
            else {
              iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
              iVar4 = *(int *)((int)pvVar3 + 0x50);
              *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
              *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar2;
            }
            pvVar3 = DAT_005a7b78;
            uVar2 = *(undefined4 *)(iVar6 + 0xc + param_1[6]);
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
              FUN_004d4550(pvVar3);
              *(undefined4 *)((int)pvVar3 + 0x90) = 0;
              *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
            }
            else {
              iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
              iVar4 = *(int *)((int)pvVar3 + 0x50);
              *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
              *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar2;
            }
            DAT_00583898 = iVar6 + param_1[6];
            FUN_004d05e0(DAT_005a7b78,*(uint *)(iVar6 + 0x48 + param_1[6]),
                         *(int **)(iVar6 + 0x4c + param_1[6]));
            FUN_00424080(this);
            DAT_00583898 = 0;
            FUN_004a2d80((void *)(iVar6 + param_1[6]),0);
            param_1[1] = param_1[1] + -1;
          }
        }
        else {
          FUN_004193e0(pvVar3,iVar4);
        }
      }
      local_4 = local_4 + 1;
      iVar6 = iVar6 + 0x58;
    } while (local_4 < *param_1);
  }
  return;
}


