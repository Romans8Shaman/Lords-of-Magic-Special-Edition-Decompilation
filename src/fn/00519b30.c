/* Rebuilt from lomse.exe FUN_00519b30 @ 0x00519b30 (614 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583650 (*(int *)0x00583650)
#define DAT_00585174 (*(int * *)0x00585174)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9ac (*(int *)0x005ae9ac)
#define DAT_005ae9b4 (*(int *)0x005ae9b4)
#define FUN_00469b10 ((undefined4 (__thiscall *)(void *, float *))0x00469b10)
#define FUN_004a5170 ((int (__thiscall *)(void *, int, int))0x004a5170)
#define FUN_004a5f40 ((undefined4 (__thiscall *)(void *, float *, int, int))0x004a5f40)
#define FUN_00511510 ((undefined4 (__fastcall *)(int))0x00511510)
#define _DAT_0054e998 (*(double *)0x0054e998)
#define _DAT_0054e9a0 (*(double *)0x0054e9a0)
#define _DAT_00587728 (*(float *)0x00587728)
#define _DAT_0058772c (*(float *)0x0058772c)
#define _DAT_00587730 (*(float *)0x00587730)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00519b30 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_00519b30(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  longlong lVar9;
  uchar _fr[0xe8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_e0;
  typedef float _t_afStack_c8[4];
  typedef float _t_fStack_b8;
  typedef float _t_fStack_b0;
  typedef float _t_fStack_ac;
  typedef float _t_fStack_a8;
  typedef undefined4 _t_local_9c[20];
  typedef undefined4 _t_local_4c;
  typedef float _t_afStack_38[11];
#define iStack_e0 (*(_t_iStack_e0 *)(_fr + 0x0))
#define afStack_c8 (*(_t_afStack_c8 *)(_fr + 0x18))
#define fStack_b8 (*(_t_fStack_b8 *)(_fr + 0x28))
#define fStack_b0 (*(_t_fStack_b0 *)(_fr + 0x30))
#define fStack_ac (*(_t_fStack_ac *)(_fr + 0x34))
#define fStack_a8 (*(_t_fStack_a8 *)(_fr + 0x38))
#define local_9c (*(_t_local_9c *)(_fr + 0x44))
#define local_4c (*(_t_local_4c *)(_fr + 0x94))
#define afStack_38 (*(_t_afStack_38 *)(_fr + 0xa8))

  piVar1 = *(int **)((int)this + 0x202ac);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    *(int *)((int)this + 0x202b8) =
         (int)((short *)*piVar1)[*(int *)((int)this + 0x202c0) * 4] - (int)*(short *)*piVar1;
    *(int *)((int)this + 0x202bc) =
         (int)*(short *)(piVar1[*(int *)((int)this + 0x202c4)] + 2) - (int)*(short *)(*piVar1 + 2);
    if (param_1 != 0) {
      local_9c[0] = 100;
      local_4c = 0;
      ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(0), __typeof__(0), __typeof__(0), __typeof__(0x400), __typeof__(local_9c)))(**(code **)(*DAT_00585174 + 0x14)))(DAT_00585174,0,0,0,0x400,local_9c);
      iVar5 = DAT_00583650 + 0x10;
      if (DAT_005ae9b4 < 1) {
        return 0;
      }
      iStack_e0 = 0;
      DAT_00583650 = iVar5;
      if (0 < *(int *)((int)this + 0x202b0)) {
        do {
          iVar5 = 0;
          if (0 < *(int *)((int)this + 0x202b4)) {
            do {
              pfVar3 = (float *)FUN_004a5f40(&DAT_005ae958,afStack_38,iVar5,iStack_e0);
              pfVar7 = afStack_c8;
              for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                *pfVar7 = *pfVar3;
                pfVar3 = pfVar3 + 1;
                pfVar7 = pfVar7 + 1;
              }
              FUN_00469b10(this,afStack_c8);
              fVar8 = (float10)fStack_a8 * (float10)_DAT_00587730 +
                      (float10)fStack_ac * (float10)_DAT_0058772c +
                      (float10)fStack_b0 * (float10)_DAT_00587728;
              if (fVar8 < (float10)_DAT_0054e9a0) {
                lVar9 = __ftol((float10)(*(int *)((int)this + 0x202a4) << 0x10) -
                               (float10)*(int *)((int)this + 0x202a8) * fVar8 *
                               (float10)_DAT_0054e998);
                iVar6 = (int)lVar9;
              }
              else {
                iVar6 = *(int *)((int)this + 0x202a4) << 0x10;
              }
              if (iVar6 < 0) {
                iVar6 = 0;
              }
              if (0xff0000 < iVar6) {
                iVar6 = 0xff0000;
              }
              iVar4 = FUN_004a5170(&DAT_005ae958,iVar5,iStack_e0);
              *(int *)(*(int *)(*(int *)((int)this + 0x202ac) + iStack_e0 * 4) + 4 + iVar5 * 8) =
                   (0x80 - *(short *)(DAT_005ae9ac + 2 + iVar4 * 8)) * iVar6 >> 7;
              lVar9 = __ftol((float10)afStack_c8[3]);
              *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + iStack_e0 * 4) + iVar5 * 8) =
                   (short)lVar9;
              lVar9 = __ftol((float10)fStack_b8);
              iVar5 = iVar5 + 1;
              *(short *)(*(int *)(*(int *)((int)this + 0x202ac) + iStack_e0 * 4) + -6 + iVar5 * 8) =
                   (short)lVar9;
            } while (iVar5 < *(int *)((int)this + 0x202b4));
          }
          iStack_e0 = iStack_e0 + 1;
        } while (iStack_e0 < *(int *)((int)this + 0x202b0));
      }
      FUN_00511510((int)this);
      DAT_00583650 = DAT_00583650 + -0x10;
    }
    uVar2 = 1;
  }
  return uVar2;
#undef iStack_e0
#undef afStack_c8
#undef fStack_b8
#undef fStack_b0
#undef fStack_ac
#undef fStack_a8
#undef local_9c
#undef local_4c
#undef afStack_38
}
