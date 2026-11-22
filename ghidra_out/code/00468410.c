
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00468410(void *this,int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  ushort uVar10;
  float10 fVar11;
  
  bVar8 = param_1 != DAT_005aa7d4;
  iVar7 = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    iVar3 = DAT_005af144 * DAT_005af144;
    do {
      iVar5 = iVar7 % DAT_005ae9c4 - *(int *)((int)this + 0x6c) / 2;
      iVar6 = iVar7 / DAT_005ae9c4 - *(int *)((int)this + 0x70) / 2;
      if (iVar3 < iVar5 * iVar5 + iVar6 * iVar6) {
        fVar11 = (float10)fpatan((float10)iVar6,(float10)iVar5);
        fVar1 = (float)fVar11;
        switch(param_2) {
        case 0:
          if ((!NAN(fVar1) && !NAN((float)_DAT_0054d730)) && (float)_DAT_0054d730 < fVar1) {
            bVar9 = (NAN(fVar1) || NAN((float)_DAT_0054d738)) || fVar1 < (float)_DAT_0054d738;
LAB_00468526:
            if (bVar9) {
              puVar4 = (uint *)(*(int *)((int)this + 100) + 4 + iVar7 * 8);
              goto LAB_00468605;
            }
          }
          break;
        case 1:
          if (((!NAN(fVar1) && !NAN((float)_DAT_0054d740)) && (float)_DAT_0054d740 < fVar1) &&
             ((NAN(fVar1) || NAN((float)_DAT_0054d748)) || fVar1 < (float)_DAT_0054d748)) {
LAB_004685fe:
            puVar4 = (uint *)(*(int *)((int)this + 100) + 4 + iVar7 * 8);
            goto LAB_00468605;
          }
          break;
        case 2:
          if ((NAN(fVar1) || NAN((float)_DAT_0054d738)) || fVar1 <= (float)_DAT_0054d738) {
            bVar9 = (NAN(fVar1) || NAN((float)_DAT_0054d750)) || fVar1 < (float)_DAT_0054d750;
            goto LAB_00468526;
          }
LAB_004685d3:
          puVar4 = (uint *)(*(int *)((int)this + 100) + 4 + iVar7 * 8);
LAB_00468605:
          *puVar4 = *puVar4 | (-(uint)bVar8 & 0x400) + 0x400;
          break;
        case 3:
          if (((NAN(fVar1) || NAN((float)_DAT_0054d758)) || fVar1 < (float)_DAT_0054d758) &&
             ((!NAN(fVar1) && !NAN((float)_DAT_0054d760)) && (float)_DAT_0054d760 < fVar1))
          goto LAB_004685fe;
          break;
        case 4:
          if ((NAN(fVar1) || NAN((float)_DAT_0054d768)) || fVar1 < (float)_DAT_0054d768) {
            fVar2 = (float)_DAT_0054d750;
            uVar10 = (ushort)((NAN(fVar1) || NAN(fVar2)) || fVar1 < fVar2) << 8 |
                     (ushort)((NAN(fVar1) || NAN(fVar2)) || fVar1 == fVar2) << 0xe;
LAB_004685cc:
            if (uVar10 == 0) goto LAB_004685d3;
          }
          break;
        case 5:
          if (((!NAN(fVar1) && !NAN((float)_DAT_0054d758)) && (float)_DAT_0054d758 < fVar1) &&
             ((NAN(fVar1) || NAN(_DAT_0054d770)) || fVar1 < _DAT_0054d770)) goto LAB_004685fe;
          break;
        case 6:
          if ((NAN(fVar1) || NAN((float)_DAT_0054d730)) || fVar1 < (float)_DAT_0054d730) {
            fVar2 = (float)_DAT_0054d768;
            uVar10 = (ushort)((NAN(fVar1) || NAN(fVar2)) || fVar1 < fVar2) << 8 |
                     (ushort)((NAN(fVar1) || NAN(fVar2)) || fVar1 == fVar2) << 0xe;
            goto LAB_004685cc;
          }
          break;
        case 7:
          if (((NAN(fVar1) || NAN((float)_DAT_0054d740)) || fVar1 < (float)_DAT_0054d740) &&
             ((!NAN(fVar1) && !NAN(_DAT_0054d770)) && _DAT_0054d770 < fVar1)) goto LAB_004685fe;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)((int)this + 0x68));
  }
  return;
}


