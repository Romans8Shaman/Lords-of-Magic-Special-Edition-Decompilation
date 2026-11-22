/* Rebuilt from lomse.exe FUN_0045a410 @ 0x0045a410 (514 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af144 (*(int *)0x005af144)
#define FUN_0045ac40 ((undefined4 (__stdcall *)(void))0x0045ac40)
#define FUN_0053a7a0 ((float10 (__cdecl *)(uint, uint))0x0053a7a0)
#define _DAT_0054d6d0 (*(double *)0x0054d6d0)
#define _DAT_0054d6d8 (*(double *)0x0054d6d8)
#define _DAT_0054d6e0 (*(float *)0x0054d6e0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0045a410 1
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_0045a410(void *this,int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  if ((((*param_1 < 0) || (99 < *param_1)) || (*param_2 < 0)) || (99 < *param_2)) {
    *param_1 = -1;
    *param_2 = -1;
    return 0;
  }
  iVar4 = FUN_0045ac40();
  fVar1 = (float)((float10)*param_1 - (float10)_DAT_0054d6d8);
  fVar2 = (float)((float10)*param_2 - (float10)_DAT_0054d6d8);
  fVar10 = (float10)fpatan((float10)*param_2 - (float10)_DAT_0054d6d8,
                           (float10)*param_1 - (float10)_DAT_0054d6d8);
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  fVar7 = (float10)fcos((float10)(float)fVar10);
  fVar10 = (float10)fsin((float10)(float)fVar10);
  fVar8 = (float10)fcos(-((float10)iVar4 * (float10)_DAT_0054d6d0));
  fVar9 = (float10)fsin((float10)(float)-((float10)iVar4 * (float10)_DAT_0054d6d0));
  fVar7 = (float10)*(int *)((int)this + 0x40) * (float10)_DAT_0054d6e0 * (float10)fVar1 * fVar7;
  fVar10 = (float10)*(int *)((int)this + 0x44) * (float10)_DAT_0054d6e0 * (float10)fVar1 * fVar10;
  iVar4 = (int)(longlong)(fVar7 * fVar8 - fVar10 * fVar9);
  iVar5 = (int)(longlong)(fVar7 * fVar9 + fVar10 * fVar8);
  iVar6 = iVar4 * iVar4 + iVar5 * iVar5;
  if (DAT_005af144 * DAT_005af144 < iVar6) {
    fVar1 = (float)DAT_005af144 / SQRT((float)iVar6);
    dVar3 = (double)((float)iVar4 * fVar1);
    fVar7 = FUN_0053a7a0(SUB84(dVar3,0),(uint)(__BC(ulonglong, dVar3) >> 0x20));
    iVar4 = (int)(longlong)fVar7;
    dVar3 = (double)((float)iVar5 * fVar1);
    fVar7 = FUN_0053a7a0(SUB84(dVar3,0),(uint)(__BC(ulonglong, dVar3) >> 0x20));
    iVar5 = (int)(longlong)fVar7;
  }
  *param_1 = *(int *)((int)this + 0x40) / 2 + iVar4;
  *param_2 = *(int *)((int)this + 0x44) / 2 + iVar5;
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  else if (*(int *)((int)this + 0x40) <= *param_1) {
    *param_1 = *(int *)((int)this + 0x40) + -1;
  }
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  else if (*(int *)((int)this + 0x44) <= *param_2) {
    *param_2 = *(int *)((int)this + 0x44) + -1;
  }
  iVar4 = *(int *)((int)this + 0x44) - *param_2;
  *param_2 = iVar4;
  if (*(int *)((int)this + 0x44) <= iVar4) {
    *param_2 = *(int *)((int)this + 0x44) + -1;
  }
  return 1;
}
