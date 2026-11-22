/* Rebuilt from lomse.exe FUN_00517a50 @ 0x00517a50 (945 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9ac (*(int *)0x005ae9ac)
#define FUN_00469b10 ((undefined4 (__thiscall *)(void *, float *))0x00469b10)
#define FUN_004a5170 ((int (__thiscall *)(void *, int, int))0x004a5170)
#define FUN_004a5f40 ((undefined4 (__thiscall *)(void *, float *, int, int))0x004a5f40)
#define FUN_00512350 ((undefined4 (__thiscall *)(void *, int, int))0x00512350)
#define _DAT_0054e998 (*(double *)0x0054e998)
#define _DAT_0054e9a0 (*(double *)0x0054e9a0)
#define _DAT_00587728 (*(float *)0x00587728)
#define _DAT_0058772c (*(float *)0x0058772c)
#define _DAT_00587730 (*(float *)0x00587730)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00517a50 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_00517a50(void *this, int param_1, int volatile param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  uchar _fr[0x68] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_5c;
  typedef float _t_local_58[4];
  typedef float _t_local_48;
  typedef float _t_local_40;
  typedef float _t_local_3c;
  typedef float _t_local_38;
  typedef float _t_local_2c[11];
#define local_5c (*(_t_local_5c *)(_fr + 0x4))
#define local_58 (*(_t_local_58 *)(_fr + 0x8))
#define local_48 (*(_t_local_48 *)(_fr + 0x18))
#define local_40 (*(_t_local_40 *)(_fr + 0x20))
#define local_3c (*(_t_local_3c *)(_fr + 0x24))
#define local_38 (*(_t_local_38 *)(_fr + 0x28))
#define local_2c (*(_t_local_2c *)(_fr + 0x34))
  
  iVar4 = *(int *)((int)this + 0x202c0);
  if (param_1 < 0) {
    param_1 = param_1 % iVar4 + iVar4;
  }
  else if (iVar4 <= param_1) {
    param_1 = param_1 % iVar4;
  }
  iVar4 = *(int *)((int)this + 0x202c4);
  if (param_2 < 0) {
    param_2 = param_2 % iVar4 + iVar4;
  }
  else if (iVar4 <= param_2) {
    param_2 = param_2 % iVar4;
  }
  pfVar1 = (float *)FUN_004a5f40(&DAT_005ae958,local_2c,param_1,param_2);
  pfVar5 = local_58;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_00469b10(this,local_58);
  fVar7 = (float10)local_38 * (float10)_DAT_00587730 +
          (float10)local_3c * (float10)_DAT_0058772c + (float10)local_40 * (float10)_DAT_00587728;
  if ((__LOM_ISNAN(fVar7) || __LOM_ISNAN((float10)_DAT_0054e9a0)) || fVar7 < (float10)_DAT_0054e9a0) {
    lVar8 = __ftol((float10)(*(int *)((int)this + 0x202a4) << 0x10) -
                   (float10)*(int *)((int)this + 0x202a8) * fVar7 * (float10)_DAT_0054e998);
    iVar4 = (int)lVar8;
  }
  else {
    iVar4 = *(int *)((int)this + 0x202a4) << 0x10;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (0xff0000 < iVar4) {
    iVar4 = 0xff0000;
  }
  iVar2 = FUN_004a5170(&DAT_005ae958,param_1,param_2);
  iVar4 = (0x80 - *(short *)(DAT_005ae9ac + 2 + iVar2 * 8)) * iVar4 >> 7;
  lVar8 = __ftol((float10)local_58[3]);
  *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) + param_1 * 8) = (short)lVar8;
  lVar8 = __ftol((float10)local_48);
  *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) + 2 + param_1 * 8) = (short)lVar8
  ;
  *(int *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) + 4 + param_1 * 8) = iVar4;
  if (*(int *)((int)this + 0x218) != 0) {
    if (param_1 == 0) {
      pfVar1 = (float *)FUN_004a5f40(&DAT_005ae958,local_2c,*(int *)((int)this + 0x202c0),param_2);
      pfVar5 = local_58;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        pfVar5 = pfVar5 + 1;
      }
      FUN_00469b10(this,local_58);
      lVar8 = __ftol((float10)local_58[3]);
      *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) +
                *(int *)((int)this + 0x202c0) * 8) = (short)lVar8;
      lVar8 = __ftol((float10)local_48);
      *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) + 2 +
                *(int *)((int)this + 0x202c0) * 8) = (short)lVar8;
      *(int *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) + 4 +
              *(int *)((int)this + 0x202c0) * 8) = iVar4;
    }
    if (param_2 == 0) {
      pfVar1 = (float *)FUN_004a5f40(&DAT_005ae958,local_2c,param_1,*(int *)((int)this + 0x202c4));
      pfVar5 = local_58;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        pfVar5 = pfVar5 + 1;
      }
      FUN_00469b10(this,local_58);
      lVar8 = __ftol((float10)local_58[3]);
      *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + *(int *)((int)this + 0x202c4) * 4) +
                param_1 * 8) = (short)lVar8;
      lVar8 = __ftol((float10)local_48);
      *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + *(int *)((int)this + 0x202c4) * 4) + 2 +
                param_1 * 8) = (short)lVar8;
      *(int *)(*(int *)(*(int *)((int)this + 0x202ac) + *(int *)((int)this + 0x202c4) * 4) + 4 +
              param_1 * 8) = iVar4;
    }
    if ((param_1 == 0) && (param_2 == 0)) {
      pfVar1 = (float *)FUN_004a5f40(&DAT_005ae958,local_2c,*(int *)((int)this + 0x202c0),
                                     *(int *)((int)this + 0x202c4));
      pfVar5 = local_58;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        pfVar5 = pfVar5 + 1;
      }
      FUN_00469b10(this,local_58);
      lVar8 = __ftol((float10)local_58[3]);
      *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + *(int *)((int)this + 0x202c4) * 4) +
                *(int *)((int)this + 0x202c0) * 8) = (short)lVar8;
      lVar8 = __ftol((float10)local_48);
      *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + *(int *)((int)this + 0x202c4) * 4) + 2 +
                *(int *)((int)this + 0x202c0) * 8) = (short)lVar8;
      *(int *)(*(int *)(*(int *)((int)this + 0x202ac) + *(int *)((int)this + 0x202c4) * 4) + 4 +
              *(int *)((int)this + 0x202c0) * 8) = iVar4;
    }
  }
  param_2 = param_2 + -1;
  local_5c = 2;
  do {
    iVar4 = param_2;
    if (param_2 < 0) {
      if (*(int *)((int)this + 0x218) != 0) {
        iVar4 = param_2 + *(int *)((int)this + 0x202c4);
        goto LAB_00517db0;
      }
    }
    else {
LAB_00517db0:
      iVar2 = param_1 + -1;
      iVar6 = 2;
      do {
        iVar3 = iVar2;
        if (iVar2 < 0) {
          if (*(int *)((int)this + 0x218) != 0) {
            iVar3 = iVar2 + *(int *)((int)this + 0x202c0);
            goto LAB_00517dd2;
          }
        }
        else {
LAB_00517dd2:
          FUN_00512350(this,iVar3,iVar4);
        }
        iVar2 = iVar2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    param_2 = param_2 + 1;
    local_5c = local_5c + -1;
    if (local_5c == 0) {
      return;
    }
  } while( true );
#undef local_5c
#undef local_58
#undef local_48
#undef local_40
#undef local_3c
#undef local_38
#undef local_2c
}
