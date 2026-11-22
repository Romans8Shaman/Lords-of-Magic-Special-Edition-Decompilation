/* Rebuilt from lomse.exe FUN_004adb70 @ 0x004adb70 (245 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"
/* tools/fpsearch.py: float locals fVar1,fVar2,fVar3 = vvx (v volatile float, x float10) */

#define _DAT_0054db48 (*(double *)0x0054db48)
#define _DAT_0054db50 (*(double *)0x0054db50)
#define _DAT_0054db58 (*(float *)0x0054db58)

#define LOM_SELF_004adb70 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004adb70(int param_1)

{
  volatile float fVar1;
  volatile float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0xa0)) {
    fVar1 = *(float *)(param_1 + 0x94);
    fVar3 = _DAT_0054db48;
    fVar2 = _DAT_0054db50;
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x98) + *(float *)(param_1 + 0x94);
    *(float *)(param_1 + 200) = fVar1 * fVar3 * fVar2 + *(float *)(param_1 + 200);
    fVar4 = (float10)fcos((float10)*(float *)(param_1 + 200));
    fVar5 = (float10)fsin((float10)*(float *)(param_1 + 200));
    fVar4 = fVar4 * (float10)*(float *)(param_1 + 0x68);
    fVar5 = fVar5 * (float10)*(float *)(param_1 + 0x68);
  }
  else {
    if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0x9c)) goto LAB_004adc1f;
    fVar5 = (float10)*(float *)(param_1 + 200) - (float10)_DAT_0054db58;
    fVar1 = (float)fVar5;
    fVar4 = (float10)fcos(fVar5);
    fVar5 = (float10)fsin((float10)fVar1);
    fVar4 = fVar4 * (float10)*(float *)(param_1 + 0x68);
    fVar5 = fVar5 * (float10)*(float *)(param_1 + 0x68);
    *(float *)(param_1 + 200) = fVar1;
  }
  *(float *)(param_1 + 0xb0) = (float)fVar4;
  *(float *)(param_1 + 0xb4) = (float)fVar5;
LAB_004adc1f:
  fVar2 = *(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0xa4);
  fVar1 = *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xa8);
  *(float *)(param_1 + 0xa4) = fVar2;
  *(float *)(param_1 + 0xa8) = fVar1;
  *(float *)(param_1 + 0xcc) = fVar2;
  *(float *)(param_1 + 0xd0) = fVar1;
  return;
}
