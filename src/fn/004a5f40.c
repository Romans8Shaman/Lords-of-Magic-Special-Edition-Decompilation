/* Rebuilt from lomse.exe FUN_004a5f40 @ 0x004a5f40 (573 bytes, __thiscall).
 * HAND fix 2026-11-12: x87 80-bit accumulators/rounding points as in the original.
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055ca20 (*(undefined4 *)0x0055ca20)
#define DAT_0055ca40 (*(undefined4 *)0x0055ca40)
#define FUN_004a5210 ((float10 (__thiscall *)(void *, int, int))0x004a5210)
#define _DAT_0054da80 (*(float *)0x0054da80)

static inline float __r32(float10 x){ volatile float f = (float)x; return f; }
#define LOM_SELF_004a5f40 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall rb_004a5f40(void *this, float *param_1, int param_2, int volatile param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float10 fVar11;
  float10 fVar12;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_48;
  typedef char _t_acStack_35[9];
  typedef float _t_local_2c[6];
  typedef float _t_local_14;
  typedef float _t_local_10;
  typedef float _t_local_c;
#define local_48 (*(_t_local_48 *)(_fr + 0x0))
#define acStack_35 (*(_t_acStack_35 *)(_fr + 0x13))
#define local_2c (*(_t_local_2c *)(_fr + 0x1c))
#define local_14 (*(_t_local_14 *)(_fr + 0x34))
#define local_10 (*(_t_local_10 *)(_fr + 0x38))
#define local_c (*(_t_local_c *)(_fr + 0x3c))
  
  acStack_35[1] = 0;
  acStack_35[2] = 0;
  acStack_35[3] = 0;
  acStack_35[4] = 0;
  acStack_35[5] = 0;
  acStack_35[6] = 0;
  acStack_35[7] = 0;
  acStack_35[8] = 0;
  iVar8 = param_2;
  iVar5 = param_3;
  if (*(int *)((int)this + 0x14) == 0) {
    if ((param_2 == *(int *)((int)this + 0x5c)) && (param_3 == *(int *)((int)this + 0x60))) {
      iVar8 = param_2 + -1;
      iVar5 = param_3 + -1;
    }
    else if (param_2 == *(int *)((int)this + 0x5c)) {
      iVar8 = param_2 + -1;
    }
    else if (param_3 == *(int *)((int)this + 0x60)) {
      iVar5 = param_3 + -1;
    }
  }
  fVar11 = (float10)__r32(FUN_004a5210(this,iVar8,iVar5));
  iVar8 = 0;
  pfVar7 = local_2c;
  do {
    iVar5 = (&DAT_0055ca20)[iVar8] + param_2;
    if (((iVar5 < 0) || (*(int *)((int)this + 0x5c) <= iVar5)) && (*(int *)((int)this + 0x14) == 0))
    {
      acStack_35[iVar8 + 1] = '\x01';
    }
    else {
      fVar12 = FUN_004a5210(this,iVar5,(&DAT_0055ca40)[iVar8] + param_3);
      *pfVar7 = __r32(fVar12 - fVar11);
    }
    iVar8 = iVar8 + 1;
    pfVar7 = pfVar7 + 1;
  } while (iVar8 < 8);
  iVar8 = 0;
  local_48 = 0.0;
  uVar9 = 1;
  float10 A2 = (float10)_DAT_0054da80;
  float10 A4 = (float10)_DAT_0054da80;
  do {
    if (acStack_35[uVar9] == '\0') {
      uVar6 = (int)uVar9 >> 0x1f;
      iVar5 = ((uVar9 ^ uVar6) - uVar6 & 7 ^ uVar6) - uVar6;
      float10 ja20 = (float10)__r32((float10)*(int *)((int)&DAT_0055ca20 + iVar8));
      float10 ja40 = (float10)__r32((float10)*(int *)((int)&DAT_0055ca40 + iVar8));
      float10 ia20 = (float10)__r32((float10)(int)(&DAT_0055ca20)[iVar5]);
      float10 ia40 = (float10)__r32((float10)(int)(&DAT_0055ca40)[iVar5]);
      float10 li = (float10)local_2c[iVar5], lj = (float10)*(float *)((int)local_2c + iVar8);
      float10 xa20 = (float10)(int)(&DAT_0055ca20)[iVar5], xa40 = (float10)(int)(&DAT_0055ca40)[iVar5]; /* kept unrounded in x87 regs */
      A4 = (li * ja40 - xa40 * lj) + A4;
      A2 = (xa20 * lj - li * ja20) + A2;
      local_48 = __r32((ia40 * ja20 - ia20 * ja40) + (float10)local_48);
    }
    iVar8 = iVar8 + 4;
    bVar1 = (int)uVar9 < 8;
    uVar9 = uVar9 + 1;
  } while (bVar1);
  fVar3 = __r32(SQRT((A4 * A4 + A2 * A2) + (float10)local_48 * (float10)local_48));
  local_2c[2] = (float)fVar11;
  local_2c[0] = (float)(param_2 - (*(int *)((int)this + 0x5c) >> 1));
  local_2c[1] = (float)(param_3 - (*(int *)((int)this + 0x60) >> 1));
  local_14 = __r32(A4 / (float10)fVar3);
  local_10 = __r32(A2 / (float10)fVar3);
  local_c = __r32((float10)local_48 / (float10)fVar3);
  pfVar7 = local_2c;
  pfVar10 = param_1;
  for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar10 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar10 = pfVar10 + 1;
  }
  return param_1;
#undef local_48
#undef acStack_35
#undef local_2c
#undef local_14
#undef local_10
#undef local_c
}
