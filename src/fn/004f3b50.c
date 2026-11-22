/* Rebuilt from lomse.exe FUN_004f3b50 @ 0x004f3b50 (456 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _DAT_0054de44 (*(float *)0x0054de44)
#define _DAT_0054de48 (*(float *)0x0054de48)
#define _DAT_0054de4c (*(float *)0x0054de4c)
#define _DAT_0054de50 (*(float *)0x0054de50)
#define _DAT_0054de54 (*(float *)0x0054de54)
#define _DAT_0054de58 (*(float *)0x0054de58)
#define _DAT_0054de5c (*(float *)0x0054de5c)
#define _DAT_0054de60 (*(float *)0x0054de60)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004f3b50 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004f3b50(uint *param_1,int param_2,float param_3)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined2 uVar5;
  float10 fVar6;
  float10 fVar7;
  longlong lVar8;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  bVar2 = *(byte *)(param_2 + 0xb);
  uVar5 = (undefined2)(local_8 >> 0x10);
  local_8 = local_8 & 0xffff0000;
  if (bVar2 < 2) {
    bVar3 = __LOM_ISNAN(_DAT_0054de60);
    bVar4 = _DAT_0054de60 <= param_3;
    *param_1 = local_8;
    param_1[1] = (uint)((!__LOM_ISNAN(param_3) && !bVar3) && bVar4);
    return;
  }
  if ((*(byte *)(param_2 + 1) & 0x80) == 0) {
    fVar7 = (float10)(int)(0x168 / (ulonglong)(longlong)(int)((uint)bVar2 * 2)) -
            (((float10)param_3 - (float10)_DAT_0054de5c) - (float10)_DAT_0054de48);
    if ((!__LOM_ISNAN(fVar7) && !__LOM_ISNAN((float10)_DAT_0054de4c)) && (float10)_DAT_0054de4c <= fVar7) {
      if ((!__LOM_ISNAN(fVar7) && !__LOM_ISNAN((float10)_DAT_0054de48)) && (float10)_DAT_0054de48 <= fVar7) {
        fVar7 = fVar7 - (float10)_DAT_0054de48;
      }
    }
    else {
      fVar7 = fVar7 - (float10)_DAT_0054de50;
    }
    lVar8 = __ftol(fVar7 / ((float10)_DAT_0054de48 / (float10)bVar2));
    *param_1 = CONCAT22(uVar5,(short)lVar8);
    param_1[1] = 0;
    return;
  }
  iVar1 = (uint)bVar2 * 2 + -2;
  fVar7 = (float10)(int)(0x168 / (longlong)(iVar1 * 2)) -
          (((float10)param_3 - (float10)_DAT_0054de44) - (float10)_DAT_0054de48);
  if ((__LOM_ISNAN(fVar7) || __LOM_ISNAN((float10)_DAT_0054de4c)) || fVar7 < (float10)_DAT_0054de4c) {
    do {
      fVar7 = fVar7 - (float10)_DAT_0054de50;
    } while ((__LOM_ISNAN(fVar7) || __LOM_ISNAN((float10)_DAT_0054de4c)) || fVar7 < (float10)_DAT_0054de4c);
  }
  if ((!__LOM_ISNAN(fVar7) && !__LOM_ISNAN((float10)_DAT_0054de48)) && (float10)_DAT_0054de48 <= fVar7) {
    do {
      fVar7 = fVar7 - (float10)_DAT_0054de48;
    } while ((!__LOM_ISNAN(fVar7) && !__LOM_ISNAN((float10)_DAT_0054de48)) && (float10)_DAT_0054de48 <= fVar7);
  }
  fVar6 = fVar7 / ((float10)_DAT_0054de48 / (float10)iVar1);
  if ((__LOM_ISNAN(fVar6) || __LOM_ISNAN((float10)iVar1 * (float10)_DAT_0054de54)) ||
      fVar6 <= (float10)iVar1 * (float10)_DAT_0054de54) {
    lVar8 = __ftol((float10)(float)fVar6);
    *param_1 = CONCAT22(uVar5,(short)lVar8);
    param_1[1] = 0;
    return;
  }
  lVar8 = __ftol(((float10)_DAT_0054de48 - fVar7) / ((float10)_DAT_0054de48 / (float10)iVar1) -
                 (float10)_DAT_0054de58);
  *param_1 = CONCAT22(uVar5,(short)lVar8);
  param_1[1] = 1;
  return;
#undef local_8
}
