
void __thiscall
FUN_00457b60(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,undefined1 param_8,int param_9)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  float10 fVar12;
  int local_8;
  float local_4;
  
  iVar2 = 0;
  local_4 = 0.0;
  local_8 = 0;
  for (iVar8 = param_2; iVar8 <= param_4; iVar8 = iVar8 + 1) {
    if (param_1 <= param_3) {
      iVar2 = iVar2 + 1 + (param_3 - param_1);
      iVar9 = param_1;
      do {
        iVar3 = FUN_004a5170(this,iVar9,iVar8);
        iVar9 = iVar9 + 1;
        local_4 = *(float *)(*(int *)((int)this + 0x54) + 4 + iVar3 * 8) + local_4;
      } while (iVar9 <= param_3);
      local_8 = iVar2;
    }
  }
  if (0 < iVar2) {
    local_4 = local_4 / (float)local_8;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x70)) {
    do {
      iVar8 = *(int *)((int)this + 0x6c);
      iVar9 = 0;
      if (0 < iVar8) {
        do {
          iVar3 = FUN_004a5170(this,iVar9,iVar2);
          iVar8 = (iVar2 * iVar8 + iVar9) * 8;
          *(float *)(*(int *)((int)this + 0x54) + 4 + iVar3 * 8) = local_4;
          *(uint *)(*(int *)((int)this + 100) + 4 + iVar8) =
               *(uint *)(*(int *)((int)this + 100) + 4 + iVar8) & 0xff5c0fff;
          if ((((iVar9 < param_1) || (param_3 < iVar9)) || (iVar2 < param_2)) || (param_4 < iVar2))
          {
            if (param_9 == 1) {
              if (iVar9 < param_3) {
                puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
LAB_00457db0:
                uVar6 = *puVar5 | 0x4000;
              }
              else if (param_2 < iVar2) {
                puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
                uVar6 = *(uint *)(*(int *)((int)this + 100) + 4 + iVar8) | 0x2000;
              }
              else {
                uVar6 = iVar2 - param_2 >> 0x1f;
                iVar3 = (iVar2 - param_2 ^ uVar6) - uVar6;
                uVar6 = iVar9 - param_3 >> 0x1f;
                iVar4 = (iVar9 - param_3 ^ uVar6) - uVar6;
                bVar11 = SBORROW4(iVar3,iVar4);
                bVar10 = iVar3 - iVar4 < 0;
LAB_00457d99:
                if (bVar11 == bVar10) {
LAB_00457da9:
                  puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
                  goto LAB_00457db0;
                }
                puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
                uVar6 = *puVar5 | 0x2000;
              }
              goto LAB_00457db5;
            }
            if (param_9 == 3) {
              if (iVar9 < param_3) {
                puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
                goto LAB_00457db0;
              }
              if (param_4 <= iVar2) {
                uVar6 = iVar2 - param_4 >> 0x1f;
                iVar4 = (iVar2 - param_4 ^ uVar6) - uVar6;
                uVar6 = iVar9 - param_3 >> 0x1f;
                iVar3 = (iVar9 - param_3 ^ uVar6) - uVar6;
                bVar11 = SBORROW4(iVar4,iVar3);
                bVar10 = iVar4 - iVar3 < 0;
                goto LAB_00457d99;
              }
              puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
              uVar6 = *(uint *)(*(int *)((int)this + 100) + 4 + iVar8) | 0x2000;
              goto LAB_00457db5;
            }
            if (param_9 == 5) {
              if (iVar2 < param_4) {
                puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
                uVar6 = *puVar5 | 0x2000;
              }
              else {
                if ((param_1 < iVar9) ||
                   (uVar6 = iVar9 - param_1 >> 0x1f, uVar7 = iVar2 - param_4 >> 0x1f,
                   (int)((iVar9 - param_1 ^ uVar6) - uVar6) <=
                   (int)((iVar2 - param_4 ^ uVar7) - uVar7))) goto LAB_00457da9;
                puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
                uVar6 = *puVar5 | 0x2000;
              }
              goto LAB_00457db5;
            }
            if (param_9 == 7) {
              if (param_1 < iVar9) {
                puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
                goto LAB_00457db0;
              }
              if (iVar2 <= param_2) {
                uVar6 = iVar9 - param_1 >> 0x1f;
                iVar3 = (iVar9 - param_1 ^ uVar6) - uVar6;
                uVar6 = iVar2 - param_2 >> 0x1f;
                iVar4 = (iVar2 - param_2 ^ uVar6) - uVar6;
                bVar11 = SBORROW4(iVar4,iVar3);
                bVar10 = iVar4 - iVar3 < 0;
                goto LAB_00457d99;
              }
              puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
              uVar6 = *(uint *)(*(int *)((int)this + 100) + 4 + iVar8) | 0x2000;
              goto LAB_00457db5;
            }
          }
          else {
            puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
            uVar6 = *(uint *)(*(int *)((int)this + 100) + 4 + iVar8) | 0x1000;
LAB_00457db5:
            *puVar5 = uVar6;
          }
          iVar8 = *(int *)((int)this + 0x6c);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x70));
  }
  if ((param_1 < 1) || (*(int *)((int)this + 0x6c) + -1 <= param_1)) {
    iVar2 = param_3 + 1;
  }
  else {
    iVar2 = param_1 + -1;
  }
  if ((param_2 < 1) || (iVar8 = param_2 + -1, *(int *)((int)this + 0x70) + -1 <= param_2)) {
    iVar8 = param_4 + 1;
  }
  for (; param_2 <= param_4; param_2 = param_2 + 1) {
    iVar9 = FUN_004a5170(this,iVar2,param_2);
    fVar12 = FUN_00455d70(this,iVar2,param_2);
    *(float *)(*(int *)((int)this + 0x54) + 4 + iVar9 * 8) = (float)fVar12;
  }
  for (; param_1 <= param_3; param_1 = param_1 + 1) {
    iVar2 = FUN_004a5170(this,param_1,iVar8);
    fVar12 = FUN_00455d70(this,param_1,iVar8);
    *(float *)(*(int *)((int)this + 0x54) + 4 + iVar2 * 8) = (float)fVar12;
  }
  if (1 < DAT_005ae918) {
    if ((param_7 == 0) || (param_7 == 4)) {
      iVar2 = 0;
      do {
        iVar8 = (param_6 * *(int *)((int)this + 0x6c) + iVar2 + -1 + param_5) * 8;
        puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
        *puVar5 = *puVar5 & 0xff5c0fff;
        pbVar1 = (byte *)(*(int *)((int)this + 100) + 6 + iVar8);
        *pbVar1 = *pbVar1 | 1;
        puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
        iVar2 = iVar2 + 1;
        *puVar5 = *puVar5 | 0x400000;
      } while (iVar2 < 3);
    }
    else {
      iVar2 = 0;
      do {
        iVar8 = ((iVar2 + -1 + param_6) * *(int *)((int)this + 0x6c) + param_5) * 8;
        puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
        *puVar5 = *puVar5 & 0xff5c0fff;
        pbVar1 = (byte *)(*(int *)((int)this + 100) + 5 + iVar8);
        *pbVar1 = *pbVar1 | 0x80;
        puVar5 = (uint *)(*(int *)((int)this + 100) + 4 + iVar8);
        iVar2 = iVar2 + 1;
        *puVar5 = *puVar5 | 0x400000;
      } while (iVar2 < 3);
    }
  }
  FUN_004551f0(&DAT_005ae8e8,(char)param_7,param_8,(char)param_9);
  FUN_00455890(&DAT_005ae8e8,param_5,param_6,(char)param_7,0xffffffff,0xffffffff);
  return;
}


