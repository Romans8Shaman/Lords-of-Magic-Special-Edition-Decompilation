
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0053fd20(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  int local_14;
  undefined8 local_10;
  
  uVar5 = param_1 & 0x1f;
  if (((param_1 & 8) == 0) || ((param_3 & 1) == 0)) {
    if (((param_1 & 4) == 0) || ((param_3 & 4) == 0)) {
      if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
        if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
          bVar6 = (param_1 & 0x10) != 0;
          local_10 = *param_2;
          if ((NAN(local_10) || NAN(_DAT_0054f0f8)) || local_10 == _DAT_0054f0f8) {
            bVar6 = true;
          }
          else {
            fVar7 = FUN_00540240(*(uint *)param_2,*(uint *)((int)param_2 + 4),&local_14);
            dVar1 = (double)fVar7;
            local_14 = local_14 + -0x600;
            if (local_14 < -0x432) {
              bVar6 = true;
              *(undefined4 *)param_2 = 0;
              local_10 = 0.0;
              *(undefined4 *)((int)param_2 + 4) = 0;
            }
            else {
              local_10 = (double)(ulonglong)(SUB87(dVar1,0) & 0xfffffffffffff | 0x10000000000000);
              if (local_14 < -0x3fd) {
                local_14 = -0x3fd - local_14;
                do {
                  if ((((ulonglong)local_10 & 1) != 0) && (!bVar6)) {
                    bVar6 = true;
                  }
                  uVar5 = (uint)local_10 >> 1;
                  uVar2 = (ulonglong)local_10 & 0x100000000;
                  local_10._0_4_ = uVar5;
                  if (uVar2 != 0) {
                    local_10._0_4_ = uVar5 | 0x80000000;
                  }
                  local_14 = local_14 + -1;
                  local_10 = (double)CONCAT44(local_10._4_4_ >> 1,(uint)local_10);
                } while (local_14 != 0);
              }
              if ((NAN(dVar1) || NAN(_DAT_0054f0f8)) || dVar1 < _DAT_0054f0f8) {
                local_10 = -local_10;
              }
              *(uint *)param_2 = (uint)local_10;
              *(uint *)((int)param_2 + 4) = local_10._4_4_;
            }
          }
          if (bVar6) {
            FUN_005403b0();
          }
          uVar5 = param_1 & 0x1d;
        }
      }
      else {
        FUN_005403b0();
        uVar4 = DAT_00574ca4;
        uVar3 = DAT_00574c94;
        uVar5 = param_3 & 0xc00;
        if (uVar5 < 0x401) {
          if (uVar5 == 0x400) {
            if ((NAN(*param_2) || NAN(_DAT_0054f0f8)) || *param_2 <= _DAT_0054f0f8) {
              local_10 = -(double)CONCAT44(DAT_00574c94,DAT_00574c90);
              *param_2 = local_10;
              uVar5 = param_1 & 0x1e;
            }
            else {
              *(undefined4 *)param_2 = DAT_00574ca0;
              *(undefined4 *)((int)param_2 + 4) = uVar4;
              uVar5 = param_1 & 0x1e;
            }
            goto LAB_0054002b;
          }
          if (uVar5 == 0) {
            if ((NAN(*param_2) || NAN(_DAT_0054f0f8)) || *param_2 <= _DAT_0054f0f8) {
              local_10 = -(double)CONCAT44(DAT_00574c94,DAT_00574c90);
              *param_2 = local_10;
              uVar5 = param_1 & 0x1e;
            }
            else {
              *(undefined4 *)param_2 = DAT_00574c90;
              *(undefined4 *)((int)param_2 + 4) = uVar3;
              uVar5 = param_1 & 0x1e;
            }
            goto LAB_0054002b;
          }
        }
        else if (uVar5 == 0x800) {
          if ((!NAN(*param_2) && !NAN(_DAT_0054f0f8)) && _DAT_0054f0f8 < *param_2) {
            *(undefined4 *)param_2 = DAT_00574c90;
            *(undefined4 *)((int)param_2 + 4) = uVar3;
            uVar5 = param_1 & 0x1e;
            goto LAB_0054002b;
          }
          local_10 = -(double)CONCAT44(DAT_00574ca4,DAT_00574ca0);
          *param_2 = local_10;
        }
        else if (uVar5 == 0xc00) {
          if ((NAN(*param_2) || NAN(_DAT_0054f0f8)) || *param_2 <= _DAT_0054f0f8) {
            local_10 = -(double)CONCAT44(DAT_00574ca4,DAT_00574ca0);
            *param_2 = local_10;
            uVar5 = param_1 & 0x1e;
          }
          else {
            *(undefined4 *)param_2 = DAT_00574ca0;
            *(undefined4 *)((int)param_2 + 4) = uVar4;
            uVar5 = param_1 & 0x1e;
          }
          goto LAB_0054002b;
        }
        uVar5 = param_1 & 0x1e;
      }
    }
    else {
      FUN_005403b0();
      uVar5 = param_1 & 0x1b;
    }
  }
  else {
    FUN_005403b0();
    uVar5 = param_1 & 0x17;
  }
LAB_0054002b:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_005403b0();
    uVar5 = uVar5 & 0xffffffef;
  }
  return (uint)(uVar5 == 0);
}


