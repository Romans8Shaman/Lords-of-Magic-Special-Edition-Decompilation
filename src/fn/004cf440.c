/* Rebuilt from lomse.exe FUN_004cf440 @ 0x004cf440 (351 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _DAT_0054dd10 (*(double *)0x0054dd10)
#define _DAT_0054dd18 (*(double *)0x0054dd18)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004cf440 1
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl rb_004cf440(uint *volatile param_1, uint *volatile param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = *param_1;
  uVar8 = *param_2;
  if ((uVar6 == uVar8) && (param_1[1] == param_2[1])) {
    return 1;
  }
  uVar4 = uVar6 & 0xff;
  if ((uVar4 == 5) && ((char)uVar8 == (char)uVar6)) {
    return (uint)(param_1[1] == param_2[1]);
  }
  if (uVar4 == 1) {
    uVar6 = param_1[1];
    lVar3 = CONCAT44(uVar8,uVar6);
    fVar1 = (float)(int)uVar6;
    uVar6 = uVar6 << 8;
  }
  else if (uVar4 == 2) {
    uVar6 = param_1[1];
    lVar3 = CONCAT44(uVar8,(int)uVar6 >> 8);
    fVar1 = (float)(int)uVar6 * _DAT_0054dd18;
  }
  else {
    if (uVar4 != 4) {
      return 0;
    }
    fVar1 = __BC(float, param_1[1]);
    uVar6 = (uint)(longlong)(fVar1 * _DAT_0054dd10);
    lVar3 = (longlong)fVar1;
  }
  uVar8 = *param_2 & 0xff;
  if (uVar8 == 1) {
    uVar5 = param_2[1];
    fVar2 = (float)(int)uVar5;
    uVar7 = uVar5 << 8;
  }
  else if (uVar8 == 2) {
    uVar7 = param_2[1];
    uVar5 = (int)uVar7 >> 8;
    fVar2 = (float)(int)uVar7 * _DAT_0054dd18;
  }
  else {
    if (uVar8 != 4) {
      return 0;
    }
    fVar2 = __BC(float, param_2[1]);
    uVar7 = (uint)(longlong)(fVar2 * _DAT_0054dd10);
    uVar5 = (uint)(longlong)fVar2;
  }
  if ((uVar4 == 4) || (uVar8 == 4)) {
    if ((__LOM_ISNAN(fVar1) || __LOM_ISNAN(fVar2)) || fVar1 == fVar2) {
      return 1;
    }
    return 0;
  }
  if ((uVar4 == 2) || (uVar8 == 2)) {
    return (uint)(uVar6 == uVar7);
  }
  return (uint)((uint)lVar3 == uVar5);
}
