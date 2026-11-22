/* Rebuilt from lomse.exe FUN_00468410 @ 0x00468410 (525 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005af144 (*(int *)0x005af144)
#define _DAT_0054d730 (*(double *)0x0054d730)
#define _DAT_0054d738 (*(double *)0x0054d738)
#define _DAT_0054d740 (*(double *)0x0054d740)
#define _DAT_0054d748 (*(double *)0x0054d748)
#define _DAT_0054d750 (*(double *)0x0054d750)
#define _DAT_0054d758 (*(double *)0x0054d758)
#define _DAT_0054d760 (*(double *)0x0054d760)
#define _DAT_0054d768 (*(double *)0x0054d768)
#define _DAT_0054d770 (*(float *)0x0054d770)

#define LOM_SELF_00468410 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_00468410(void *this,int param_1,undefined4 param_2)

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
          if ((!__LOM_ISNAN(fVar1) && !__LOM_ISNAN((float)_DAT_0054d730)) && _DAT_0054d730 < fVar1) {
            bVar9 = (__LOM_ISNAN(fVar1) || __LOM_ISNAN((float)_DAT_0054d738)) || fVar1 < _DAT_0054d738;
LAB_00468526:
            if (bVar9) {
              puVar4 = (uint *)(*(int *)((int)this + 100) + 4 + iVar7 * 8);
              goto LAB_00468605;
            }
          }
          break;
        case 1:
          if (((!__LOM_ISNAN(fVar1) && !__LOM_ISNAN((float)_DAT_0054d740)) && _DAT_0054d740 < fVar1) &&
             ((__LOM_ISNAN(fVar1) || __LOM_ISNAN((float)_DAT_0054d748)) || fVar1 < _DAT_0054d748)) {
LAB_004685fe:
            puVar4 = (uint *)(*(int *)((int)this + 100) + 4 + iVar7 * 8);
            goto LAB_00468605;
          }
          break;
        case 2:
          if ((__LOM_ISNAN(fVar1) || __LOM_ISNAN((float)_DAT_0054d738)) || fVar1 <= _DAT_0054d738) {
            bVar9 = (__LOM_ISNAN(fVar1) || __LOM_ISNAN((float)_DAT_0054d750)) || fVar1 < _DAT_0054d750;
            goto LAB_00468526;
          }
LAB_004685d3:
          puVar4 = (uint *)(*(int *)((int)this + 100) + 4 + iVar7 * 8);
LAB_00468605:
          *puVar4 = *puVar4 | (-(uint)bVar8 & 0x400) + 0x400;
          break;
        case 3:
          if (((__LOM_ISNAN(fVar1) || __LOM_ISNAN((float)_DAT_0054d758)) || fVar1 < _DAT_0054d758) &&
             ((!__LOM_ISNAN(fVar1) && !__LOM_ISNAN((float)_DAT_0054d760)) && _DAT_0054d760 < fVar1))
          goto LAB_004685fe;
          break;
        case 4:
          if ((__LOM_ISNAN(fVar1) || __LOM_ISNAN((float)_DAT_0054d768)) || fVar1 < _DAT_0054d768) {
            fVar2 = _DAT_0054d750;
            uVar10 = (ushort)((__LOM_ISNAN(fVar1) || __LOM_ISNAN(fVar2)) || fVar1 < fVar2) << 8 |
                     (ushort)((__LOM_ISNAN(fVar1) || __LOM_ISNAN(fVar2)) || fVar1 == fVar2) << 0xe;
LAB_004685cc:
            if (uVar10 == 0) goto LAB_004685d3;
          }
          break;
        case 5:
          if (((!__LOM_ISNAN(fVar1) && !__LOM_ISNAN((float)_DAT_0054d758)) && _DAT_0054d758 < fVar1) &&
             ((__LOM_ISNAN(fVar1) || __LOM_ISNAN(_DAT_0054d770)) || fVar1 < _DAT_0054d770)) goto LAB_004685fe;
          break;
        case 6:
          if ((__LOM_ISNAN(fVar1) || __LOM_ISNAN((float)_DAT_0054d730)) || fVar1 < _DAT_0054d730) {
            fVar2 = _DAT_0054d768;
            uVar10 = (ushort)((__LOM_ISNAN(fVar1) || __LOM_ISNAN(fVar2)) || fVar1 < fVar2) << 8 |
                     (ushort)((__LOM_ISNAN(fVar1) || __LOM_ISNAN(fVar2)) || fVar1 == fVar2) << 0xe;
            goto LAB_004685cc;
          }
          break;
        case 7:
          if (((__LOM_ISNAN(fVar1) || __LOM_ISNAN((float)_DAT_0054d740)) || fVar1 < _DAT_0054d740) &&
             ((!__LOM_ISNAN(fVar1) && !__LOM_ISNAN(_DAT_0054d770)) && _DAT_0054d770 < fVar1)) goto LAB_004685fe;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)((int)this + 0x68));
  }
  return;
}
