/* Rebuilt from lomse.exe FUN_0043aaa0 @ 0x0043aaa0 (290 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_doodad_palette_in_NULL_in_GPTBLI_005560d4 (*(char (*)[])0x005560d4)
#define param_4 (*(byte *)&_param_4) /* narrow view of the full 4-byte param slot _param_4 (Ghidra) */

#define LOM_SELF_0043aaa0 1
void __thiscall rb_0043aaa0(void *this,int *param_1,int param_2,int param_3,uint _param_4)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  byte *pbVar12;
  
  bVar7 = param_4;
  piVar4 = (int *)*param_1;
  iVar5 = piVar4[4];
  if (iVar5 == 0) {
    OutputDebugStringA(s_doodad_palette_in_NULL_in_GPTBLI_005560d4);
    return;
  }
  iVar6 = param_1[3];
  iVar8 = piVar4[3] - iVar6;
  iVar9 = *(int *)((int)this + 0xc) >> 1;
  iVar11 = iVar9 - iVar6;
  piVar1 = param_1 + 2;
  piVar2 = param_1 + 1;
  param_1 = (int *)param_1[4];
  pbVar12 = (byte *)(*piVar1 * piVar4[3] + *piVar2 + *piVar4);
  puVar10 = (undefined2 *)(*(int *)this + (param_3 * iVar9 + param_2) * 2);
  if ((0 < iVar6) && (0 < (int)param_1)) {
    if (iVar8 != 0) {
      do {
        iVar9 = iVar6;
        do {
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          _param_4 = (uint)bVar3;
          if (bVar3 != bVar7) {
            *puVar10 = *(undefined2 *)(iVar5 + _param_4 * 2);
          }
          puVar10 = puVar10 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        pbVar12 = pbVar12 + iVar8;
        puVar10 = puVar10 + iVar11;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
      return;
    }
    do {
      iVar8 = iVar6;
      do {
        bVar3 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        _param_4 = (uint)bVar3;
        if (bVar3 != bVar7) {
          *puVar10 = *(undefined2 *)(iVar5 + _param_4 * 2);
        }
        puVar10 = puVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      puVar10 = puVar10 + iVar11;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  return;
}
