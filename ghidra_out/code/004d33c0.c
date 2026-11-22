
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d33c0(void *this,int *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int local_10;
  
  local_10 = 0;
  if (0 < param_1[1]) {
    do {
      puVar1 = (uint *)(*param_1 + local_10 * 8);
      uVar6 = *param_2;
      uVar7 = *puVar1;
      if ((uVar7 == uVar6) && (puVar1[1] == param_2[1])) {
        bVar10 = true;
      }
      else {
        uVar4 = uVar7 & 0xff;
        if ((uVar4 == 5) && ((char)uVar6 == (char)uVar7)) {
          bVar10 = puVar1[1] == param_2[1];
        }
        else if (uVar4 == 1) {
          uVar8 = puVar1[1];
          fVar2 = (float)(int)uVar8;
          uVar7 = uVar8 << 8;
LAB_004d3487:
          uVar6 = uVar6 & 0xff;
          if (uVar6 == 1) {
            uVar5 = param_2[1];
            fVar3 = (float)(int)uVar5;
            uVar9 = uVar5 << 8;
          }
          else if (uVar6 == 2) {
            uVar9 = param_2[1];
            uVar5 = (int)uVar9 >> 8;
            fVar3 = (float)(int)uVar9 * (float)_DAT_0054dd18;
          }
          else {
            if (uVar6 != 4) goto LAB_004d3591;
            fVar3 = (float)param_2[1];
            uVar9 = (uint)(longlong)(fVar3 * (float)_DAT_0054dd10);
            uVar5 = (uint)(longlong)fVar3;
          }
          if ((uVar4 == 4) || (uVar6 == 4)) {
            if ((NAN(fVar2) || NAN(fVar3)) || fVar2 == fVar3) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
          }
          else if ((uVar4 == 2) || (uVar6 == 2)) {
            bVar10 = uVar7 == uVar9;
          }
          else {
            bVar10 = uVar8 == uVar5;
          }
        }
        else {
          if (uVar4 == 2) {
            uVar7 = puVar1[1];
            uVar8 = (int)uVar7 >> 8;
            fVar2 = (float)(int)uVar7 * (float)_DAT_0054dd18;
            goto LAB_004d3487;
          }
          if (uVar4 == 4) {
            fVar2 = (float)puVar1[1];
            uVar7 = (uint)(longlong)(fVar2 * (float)_DAT_0054dd10);
            uVar8 = (uint)(longlong)fVar2;
            goto LAB_004d3487;
          }
LAB_004d3591:
          bVar10 = false;
        }
      }
      if (bVar10) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      else if ((char)*puVar1 == '\x06') {
        FUN_004d33c0(this,(int *)puVar1[1],param_2,param_3);
      }
      local_10 = local_10 + 1;
    } while (local_10 < param_1[1]);
  }
  return;
}


