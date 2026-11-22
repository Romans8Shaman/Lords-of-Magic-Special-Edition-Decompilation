/* Rebuilt from lomse.exe FUN_004adc70 @ 0x004adc70 (97 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00504f00 ((int (__cdecl *)(int, int))0x00504f00)
#define _DAT_0054db60 (*(double *)0x0054db60)

#define LOM_SELF_004adc70 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004adc70(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar2 = FUN_00504f00(-0x5a,0x5a);
  fVar3 = (float10)iVar2 * (float10)_DAT_0054db60 + (float10)*(float *)(param_1 + 200);
  fVar1 = (float)fVar3;
  fVar3 = (float10)fcos(fVar3);
  fVar4 = (float10)fsin((float10)fVar1);
  *(float *)(param_1 + 200) = fVar1;
  *(float *)(param_1 + 0xb0) = (float)(fVar3 * (float10)*(float *)(param_1 + 0x68));
  *(float *)(param_1 + 0xb4) = (float)(fVar4 * (float10)*(float *)(param_1 + 0x68));
  return;
}
