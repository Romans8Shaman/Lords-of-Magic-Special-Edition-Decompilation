/* Rebuilt from lomse.exe FUN_00411ba0 @ 0x00411ba0 (1256 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005787b8 (*(undefined *)0x005787b8)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae8e8 (*(undefined *)0x005ae8e8)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_004119d0 ((undefined4 (__thiscall *)(void *, int))0x004119d0)
#define FUN_00411a90 ((undefined4 (__thiscall *)(void *, int))0x00411a90)
#define FUN_00411b50 ((undefined4 (__thiscall *)(void *, uint))0x00411b50)
#define FUN_00415470 ((undefined4 (__fastcall *)(int *))0x00415470)
#define FUN_0041da60 ((undefined4 (__fastcall *)(int))0x0041da60)
#define FUN_0041dc40 ((undefined4 (__fastcall *)(int))0x0041dc40)
#define FUN_0041ebb0 ((undefined4 (__thiscall *)(void *, uint))0x0041ebb0)
#define FUN_0041faf0 ((int (__thiscall *)(void *, int, int))0x0041faf0)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00420630 ((undefined4 (__fastcall *)(int))0x00420630)
#define FUN_00455290 ((undefined4 (__thiscall *)(void *, int, undefined4))0x00455290)
#define FUN_00455660 ((undefined4 (__thiscall *)(void *, int))0x00455660)
#define FUN_00455680 ((undefined4 (__thiscall *)(void *, int, undefined4 *, undefined4 *))0x00455680)
#define FUN_0047cbd0 ((undefined4 * (__stdcall *)(void))0x0047cbd0)
#define FUN_0047d680 ((undefined4 (__stdcall *)(int))0x0047d680)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)
#define FUN_0049dcc0 ((undefined4 (__thiscall *)(void *, int))0x0049dcc0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004b02c0 ((undefined4 (__thiscall *)(void *, uint))0x004b02c0)
#define FUN_004b0310 ((undefined4 (__thiscall *)(void *, int))0x004b0310)
#define FUN_004b0400 ((undefined4 (__thiscall *)(void *, int))0x004b0400)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004f5a90 ((undefined4 (__thiscall *)(void *, int))0x004f5a90)
#define FUN_004f5b70 ((undefined4 (__thiscall *)(void *, int))0x004f5b70)
#define FUN_004f6590 ((int (__thiscall *)(void *, int, int))0x004f6590)
#define FUN_00521e30 ((uint (__fastcall *)(int *))0x00521e30)
#define FUN_00521e50 ((uint (__fastcall *)(int *))0x00521e50)
#define FUN_00521e70 ((uint (__fastcall *)(int *))0x00521e70)
#define FUN_00522b60 ((int (__fastcall *)(void *))0x00522b60)
#define FUN_00522c90 ((int (__fastcall *)(void *))0x00522c90)
#define FUN_00522de0 ((int (__fastcall *)(void *))0x00522de0)
#define FUN_00522f00 ((undefined4 (__fastcall *)(void *))0x00522f00)
#define FUN_00522f20 ((int (__fastcall *)(void *))0x00522f20)
#define FUN_00523040 ((int (__fastcall *)(void *))0x00523040)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_0054d3f8 (*(float *)0x0054d3f8)
#define _DAT_0054d400 (*(double *)0x0054d400)
#define _DAT_0054d408 (*(double *)0x0054d408)
#define s_Optimization_bug__00555894 (*(char (*)[])0x00555894)
#define s_SetAnim_follower_logic_error__00555874 (*(char (*)[])0x00555874)
#define s_Unknown_drawn_unit_type_005558a8 (*(char (*)[])0x005558a8)

#define LOM_SELF_00411ba0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_00411ba0(void *this, int **volatile param_1)

{
  int *this_00;
  float fVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  void *pvVar8;
  int **ppiVar9;
  float10 fVar10;
  float10 fVar11;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_44;
  typedef int _t_iStack_40;
  typedef int * _t_apiStack_3c[15];
#define iStack_44 (*(_t_iStack_44 *)(_fr + 0x4))
#define iStack_40 (*(_t_iStack_40 *)(_fr + 0x8))
#define apiStack_3c (*(_t_apiStack_3c *)(_fr + 0xc))
  
  FUN_0041da60((int)this);
  FUN_00420630((int)this);
  if (-1 < (int)param_1) {
    *(int ***)((int)this + 0x50) = param_1;
  }
  iVar2 = *(int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4);
  if (((iVar2 < 0) || (DAT_005cd2f0 <= iVar2)) || (DAT_005cd2f4 == 0)) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = (void *)(DAT_005cd2f4 + iVar2 * 1000);
  }
  if (pvVar8 == (void *)0x0) {
    OutputDebugStringA(s_Unknown_drawn_unit_type_005558a8);
    FUN_004f5a90(this,-1);
    return;
  }
  if (((~*(uint *)((int)this + 0x30) & 0x100) == 0) && (iVar2 = FUN_00522f00(pvVar8), iVar2 != 0)) {
    iVar2 = FUN_00522f20(pvVar8);
    FUN_004f5a90(this,iVar2);
    iVar2 = FUN_00523040(pvVar8);
    FUN_00411a90(this,iVar2);
    FUN_004119d0(this,-1);
    FUN_004b0400((void *)((int)this + 0x55c),-1);
    FUN_0041ebb0(this,*(uint *)((int)this + 0x544));
  }
  else {
    iVar2 = FUN_00522b60(pvVar8);
    FUN_004f5a90(this,iVar2);
    iVar2 = FUN_00522c90(pvVar8);
    FUN_004119d0(this,iVar2);
    iVar2 = FUN_00522de0(pvVar8);
    FUN_00411a90(this,iVar2);
    FUN_0041ebb0(this,*(uint *)((int)this + 0x544));
    FUN_004b0400((void *)((int)this + 0x55c),*(int *)((int)pvVar8 + 0x4c));
    uVar5 = FUN_0047d680(*(int *)((int)this + 0x544));
    FUN_004b02c0((void *)((int)this + 0x55c),uVar5);
    FUN_00411b50(this,*(uint *)((int)this + 0x544));
  }
  FUN_0041dc40((int)this);
  FUN_004f5b70(this,*(int *)((int)this + 0x44));
  FUN_004b0310((void *)((int)this + 0x55c),*(int *)((int)this + 0x44));
  if (*(void **)((int)this + 0x58c) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 0x58c),*(int *)((int)this + 0x44));
  }
  if (*(void **)((int)this + 0x598) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 0x598),*(int *)((int)this + 0x44));
  }
  if ((-1 < *(int *)((int)this + 0x1c)) && (puVar3 = FUN_004c6fc0(), puVar3 != (undefined *)0x0)) {
    iVar2 = *(int *)((int)this + 0x1c);
    puVar3 = FUN_004c6fc0();
    fVar1 = *(float *)(*(int *)(puVar3 + 0x54) + 4 + iVar2 * 8) - _DAT_0054d3f8;
    if ((!__LOM_ISNAN(fVar1) && !__LOM_ISNAN(*(float *)((int)this + 0x5a8))) &&
        *(float *)((int)this + 0x5a8) < fVar1) {
      *(float *)((int)this + 0x5a8) = fVar1;
    }
  }
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x1c)))(this);
  if (((*(uint *)((int)this + 0x30) & 0x1c00000) == 0) || (*(int *)((int)this + 0x4c) < 2)) {
    iVar7 = 0;
    ppiVar9 = apiStack_3c;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppiVar9 = (int *)0x0;
      ppiVar9 = ppiVar9 + 1;
    }
    iVar2 = 0;
    ppiVar9 = apiStack_3c;
    iStack_40 = 0;
    iStack_44 = 0;
    do {
      piVar4 = (int *)FUN_004f6590(&DAT_005ae974,*(int *)((int)this + 0x28),iVar2);
      *ppiVar9 = piVar4;
      if (piVar4 != (int *)0x0) {
        iVar7 = iVar7 + 1;
        ppiVar9 = ppiVar9 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xf);
    ppiVar9 = (int **)0x0;
    if (0 < *(int *)((int)this + 0x4c)) {
      piVar4 = (int *)((int)this + 0xc4);
      do {
        iVar2 = FUN_00415470(piVar4);
        if (iVar2 == 0) {
          uVar5 = FUN_00521e70(piVar4);
          if (((uVar5 != 0) || (uVar5 = FUN_00521e30(piVar4), uVar5 != 0)) || (param_1 == ppiVar9))
          {
            iStack_44 = iStack_44 + 1;
          }
        }
        else {
          iStack_44 = iStack_44 + 1;
          iStack_40 = iStack_40 + 1;
        }
        ppiVar9 = (int **)((int)ppiVar9 + 1);
        piVar4 = piVar4 + 0x13;
      } while ((int)ppiVar9 < *(int *)((int)this + 0x4c));
    }
    if (iStack_40 < 1) {
      iStack_44 = *(int *)((int)this + 0x4c);
    }
    iStack_44 = iStack_44 + -1;
    if (iStack_44 < 0) {
      iStack_44 = 0;
    }
    iVar2 = FUN_00420620((int)this);
    if (iVar2 != 0) {
      iStack_44 = 2;
    }
    if (iStack_44 < iVar7) {
      iVar7 = iVar7 - iStack_44;
      ppiVar9 = apiStack_3c + iStack_44;
      param_1 = (int **)0x6;
      do {
        if (*ppiVar9 != (int *)0x0) {
          FUN_00483be0(&DAT_005aa12c,*ppiVar9);
          *ppiVar9 = (int *)0x0;
        }
        ppiVar9 = ppiVar9 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    else if (iVar7 < iStack_44) {
      param_1 = (int **)0x7;
      ppiVar9 = apiStack_3c + iVar7;
      iStack_44 = iStack_44 - iVar7;
      do {
        piVar4 = FUN_0047cbd0();
        iVar2 = *(int *)((int)this + 0x1c);
        *ppiVar9 = piVar4;
        FUN_004a7d50(&DAT_005ae958,piVar4,iVar2);
        ppiVar9 = ppiVar9 + 1;
        iStack_44 = iStack_44 + -1;
      } while (iStack_44 != 0);
    }
    else {
      param_1 = (int **)0x8;
    }
    if (param_1 == (int **)0x5) {
      OutputDebugStringA(s_Optimization_bug__00555894);
    }
    iVar2 = FUN_00420620((int)this);
    if (iVar2 != 0) {
      FUN_00455680(&DAT_005ae8e8,2,&param_1,&iStack_40);
      apiStack_3c[0][0x11] = *(int *)((int)this + 0x28);
      apiStack_3c[0][0x12] = 0;
      iVar2 = FUN_00455660(&DAT_005ae8e8,2);
      apiStack_3c[0][0x13] = iVar2;
      apiStack_3c[0][0x19] = 0;
      apiStack_3c[0][0x1a] = 0;
      apiStack_3c[0][0x1b] = (int)(float)(int)param_1;
      apiStack_3c[0][0x1c] = (int)(float)iStack_40;
      apiStack_3c[0][0xc] = apiStack_3c[0][0xc] | 0x10;
      ((undefined4 (__thiscall *)(__typeof__(apiStack_3c[0])))(**(code **)(*apiStack_3c[0] + 0x2c)))(apiStack_3c[0]);
      FUN_00455290(&DAT_005ae8e8,2,apiStack_3c[0][10]);
      FUN_00455680(&DAT_005ae8e8,1,&param_1,&iStack_40);
      apiStack_3c[1][0x11] = *(int *)((int)this + 0x28);
      apiStack_3c[1][0x12] = 1;
      iVar2 = FUN_00455660(&DAT_005ae8e8,1);
      apiStack_3c[1][0x13] = iVar2;
      apiStack_3c[1][0x19] = 0;
      apiStack_3c[1][0x1a] = 0;
      apiStack_3c[1][0x1b] = (int)(float)(int)param_1;
      apiStack_3c[1][0x1c] = (int)(float)iStack_40;
      apiStack_3c[1][0xc] = apiStack_3c[1][0xc] | 0x10;
      ((undefined4 (__thiscall *)(__typeof__(apiStack_3c[1])))(**(code **)(*apiStack_3c[1] + 0x2c)))(apiStack_3c[1]);
      FUN_00455290(&DAT_005ae8e8,1,apiStack_3c[1][10]);
      return;
    }
    iVar2 = 0;
    if (0 < *(int *)((int)this + 0x4c)) {
      param_1 = apiStack_3c;
      iVar7 = 1;
      piVar4 = (int *)((int)this + 0xc4);
      do {
        if ((iVar2 != *(int *)((int)this + 0x50)) &&
           ((iStack_40 < 1 || (uVar5 = FUN_00521e50(piVar4), uVar5 == 0)))) {
          pfVar6 = (float *)FUN_0041faf0(&DAT_005787b8,*(int *)((int)this + 0x4c),iVar7);
          this_00 = *param_1;
          if (this_00 == (int *)0x0) {
            OutputDebugStringA(s_SetAnim_follower_logic_error__00555874);
          }
          else {
            this_00[0x11] = *(int *)((int)this + 0x28);
            this_00[0x12] = iVar2;
            this_00[0x13] = *piVar4;
            this_00[0x19] = 0;
            this_00[0x1a] = 0;
            fVar10 = -((float10)_DAT_0054d408 -
                      (float10)*(int *)((int)this + 0x44) * (float10)_DAT_0054d400);
            if (pfVar6 == (float *)0x0) {
              this_00[0x1b] = 0;
              this_00[0x1c] = 0;
            }
            else {
              fVar11 = (float10)fcos(fVar10 + (float10)*pfVar6);
              this_00[0x1b] = (int)(float)(fVar11 * (float10)pfVar6[1]);
              fVar10 = (float10)fsin(fVar10 + (float10)*pfVar6);
              this_00[0x1c] = (int)(float)(fVar10 * (float10)pfVar6[1]);
            }
            ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x2c)))(this_00);
            iVar7 = iVar7 + 1;
            param_1 = param_1 + 1;
          }
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 0x13;
      } while (iVar2 < *(int *)((int)this + 0x4c));
    }
  }
  return;
#undef iStack_44
#undef iStack_40
#undef apiStack_3c
}
