
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ae7e0(void *this,float *param_1,float *param_2,float *param_3,short param_4)

{
  double dVar1;
  double dVar2;
  void *this_00;
  int iVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  ushort *puVar7;
  short *psVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  int *local_d8;
  int *local_d0;
  byte local_c4 [4];
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  double local_94;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  int local_60 [2];
  int local_58;
  int local_50;
  int local_40;
  int local_3c [3];
  int local_30;
  int local_20;
  int local_1c;
  
  uVar11 = 0;
  if ((*(int *)((int)this + 0x2c) == 0) ||
     (this_00 = *(void **)(*(int *)((int)this + 0x2c) + 0x3c), this_00 == (void *)0x0)) {
    *param_1 = 0.0;
    *param_2 = 0.0;
  }
  else {
    local_d8 = local_60;
    local_d0 = local_3c;
    bVar5 = false;
    do {
      uVar6 = *(uint *)(*(int *)((int)this + 0x2c) + 4);
      *local_d8 = 0;
      uVar6 = FUN_0049d890(this_00,uVar6,uVar11);
      uVar10 = 0;
      if (0 < (int)uVar6) {
        do {
          puVar7 = (ushort *)
                   FUN_0049abe0(this_00,*(uint *)(*(int *)((int)this + 0x2c) + 4),uVar11,uVar10,
                                (uint *)local_c4);
          if (puVar7 != (ushort *)0x0) {
            iVar9 = 1;
            if (1 < *puVar7 >> 8) {
              psVar8 = *(short **)(puVar7 + 4);
              do {
                psVar8 = psVar8 + 3;
                if (param_4 == *psVar8) {
                  psVar8 = *(short **)(puVar7 + 4) + iVar9 * 3 + 1;
                  goto LAB_004ae89d;
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < (int)(uint)(*puVar7 >> 8));
            }
            psVar8 = (short *)0x0;
LAB_004ae89d:
            if (psVar8 != (short *)0x0) {
              iVar9 = (int)*psVar8;
              if ((local_c4[0] & 1) != 0) {
                iVar9 = -iVar9;
                bVar5 = true;
              }
              local_d0[-1] = iVar9;
              *local_d0 = (int)psVar8[1];
              *local_d8 = 1;
            }
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar6);
      }
      uVar11 = uVar11 + 1;
      local_d0 = local_d0 + 2;
      local_d8 = local_d8 + 1;
    } while ((int)uVar11 < 8);
    iVar3 = *(int *)((int)this + 0x44);
    iVar9 = DAT_005aec3c + 1;
    if (((local_60[0] != 0) && (local_50 != 0)) && (local_58 != 0)) {
      fVar12 = (float10)(local_40 + local_20) * (float10)_DAT_0054db80;
      fVar13 = (float10)local_40 - fVar12;
      fVar12 = (float10)local_30 - fVar12;
      dVar4 = (double)(local_3c[0] + local_1c) * _DAT_0054db80;
      local_8c = _DAT_0054db68;
      dVar1 = (double)fVar13;
      dVar2 = (double)fVar12;
      fVar13 = (float10)fpatan(fVar13,fVar12);
      local_84 = 0;
      local_88 = _DAT_0054db68;
      FUN_00469ae0(&DAT_005876d0,&local_8c);
      local_c0 = 0.0;
      local_bc = 0.0;
      local_b8 = 0x3f800000;
      FUN_00469ae0(&DAT_005876d0,&local_c0);
      local_c0 = SQRT((float)_DAT_0054db80);
      local_94 = (double)-ABS(local_b0 - local_7c);
      local_bc = local_c0;
      if ((DAT_005aec3c & 2) == 0) {
        local_bc = -local_c0;
      }
      local_b8 = 0;
      FUN_00469ae0(&DAT_005876d0,&local_c0);
      fVar14 = SQRT((float10)dVar2 * (float10)dVar2 + (float10)dVar1 * (float10)dVar1) /
               ABS((float10)local_b4 - (float10)local_80);
      *param_3 = (float)((float10)dVar4 / (float10)local_94);
      fVar12 = (float10)(*(int *)((int)this + 0x44) - 2U & 7) * (float10)_DAT_0054dba0;
      if ((bVar5) && (4 < (iVar9 + iVar3 & 7U))) {
        fVar12 = fVar12 - (float10)(double)fVar13;
      }
      else {
        fVar12 = fVar12 + (float10)(double)fVar13;
      }
      fVar13 = (float10)fcos(fVar12);
      fVar12 = (float10)fsin(fVar12);
      *param_1 = (float)(fVar13 * fVar14);
      *param_2 = (float)(fVar12 * fVar14);
      return;
    }
    *param_1 = 0.0;
    *param_2 = 0.0;
  }
  *param_3 = 1.0;
  return;
}


