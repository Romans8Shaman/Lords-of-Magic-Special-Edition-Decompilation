/* Rebuilt from lomse.exe FUN_004adff0 @ 0x004adff0 (1519 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae96c (*(int *)0x005ae96c)
#define DAT_005ae9ac (*(int *)0x005ae9ac)
#define DAT_005ae9b4 (*(int *)0x005ae9b4)
#define DAT_005ae9b8 (*(int *)0x005ae9b8)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005ae9c8 (*(int *)0x005ae9c8)
#define FUN_00469ae0 ((undefined4 (__thiscall *)(void *, float *))0x00469ae0)
#define FUN_0049dc60 ((undefined4 (__thiscall *)(void *, int, int))0x0049dc60)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a64d0 ((float10 (__thiscall *)(void *, uint, uint))0x004a64d0)   /* float args pushed as raw dwords (movl/pushl) */
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)
#define FUN_004a9a60 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004a9a60)
#define FUN_004ab8f0 ((undefined4 (__thiscall *)(void *, int, int))0x004ab8f0)
#define FUN_004adb70 ((undefined4 (__fastcall *)(int))0x004adb70)
#define FUN_004adce0 ((undefined4 (__fastcall *)(int))0x004adce0)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_00532820 ((undefined4 (__thiscall *)(void *, int, float, int, float, float))0x00532820)
#define _DAT_0054db78 (*(float *)0x0054db78)
#define _DAT_0054db7c (*(float *)0x0054db7c)
#define _DAT_0054db80 (*(double *)0x0054db80)
#define _DAT_0054db8c (*(float *)0x0054db8c)
#define _DAT_0054db90 (*(double *)0x0054db90)
#define _DAT_005ae938 (*(float *)0x005ae938)
#define _DAT_005ae93c (*(float *)0x005ae93c)
#define _DAT_005ae940 (*(float *)0x005ae940)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

/* x87 fcom* + fnstsw like the original (fcoms/fcomps/fcompl raise IE on ANY NaN and take the operand from memory; a C float
 * compare would use fucom and load it separately). C0 (0x100) = st0<src or unordered, C3 (0x4000) = equal or unordered. */
static inline unsigned _fcoms_sw(float10 a, const volatile float *m) {
  volatile float10 va = a; unsigned sw;
  __asm__ volatile("fldt %1\n\tfcoms %2\n\tfnstsw %%ax\n\tfstp %%st(0)" : "=a"(sw) : "m"(va), "m"(*m) : "cc");
  return sw;
}
static inline unsigned _fcompl_sw(float10 a, const volatile double *m) {
  volatile float10 va = a; unsigned sw;
  __asm__ volatile("fldt %1\n\tfcompl %2\n\tfnstsw %%ax" : "=a"(sw) : "m"(va), "m"(*m) : "cc");
  return sw;
}
static inline unsigned _fcompp_sw(float10 a, float10 b) {
  volatile float10 va = a, vb = b; unsigned sw;
  __asm__ volatile("fldt %2\n\tfldt %1\n\tfcompp\n\tfnstsw %%ax" : "=a"(sw) : "m"(va), "m"(vb) : "cc");
  return sw;
}
#define FCOMS_C0(a, m) ((_fcoms_sw((float10)(a), &(m)) & 0x100) != 0)
#define FCOMS_C0C3(a, m) ((_fcoms_sw((float10)(a), &(m)) & 0x4100) != 0)
#define FCOML_C0(a, m) ((_fcompl_sw((float10)(a), &(m)) & 0x100) != 0)
#define FCOMP_C0C3(a, b) ((_fcompp_sw((float10)(a), (float10)(b)) & 0x4100) != 0)

#define LOM_SELF_004adff0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_004adff0(void *this)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  float10 fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  uchar _fr[0x70] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef volatile float _t_fStack_64;   /* stack float of the original: the later fadds reloads it (denormal operand DE) */
  typedef uint _t_uStack_5c;
  typedef float _t_fStack_58;
  typedef float _t_fStack_54;
  typedef float _t_fStack_50;
  typedef float _t_fStack_4c;
  typedef float _t_fStack_48;
  typedef undefined4 _t_uStack_44;
  typedef float _t_fStack_2c;
  typedef float _t_fStack_28;
  typedef float _t_fStack_24;
  typedef float _t_fStack_20;
  typedef float _t_fStack_1c;
#define fStack_64 (*(_t_fStack_64 *)(_fr + 0x4))
#define uStack_5c (*(_t_uStack_5c *)(_fr + 0xc))
#define fStack_58 (*(_t_fStack_58 *)(_fr + 0x10))
#define fStack_54 (*(_t_fStack_54 *)(_fr + 0x14))
#define fStack_50 (*(_t_fStack_50 *)(_fr + 0x18))
#define fStack_4c (*(_t_fStack_4c *)(_fr + 0x1c))
#define fStack_48 (*(_t_fStack_48 *)(_fr + 0x20))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0x24))
#define fStack_2c (*(_t_fStack_2c *)(_fr + 0x3c))
#define fStack_28 (*(_t_fStack_28 *)(_fr + 0x40))
#define fStack_24 (*(_t_fStack_24 *)(_fr + 0x44))
#define fStack_20 (*(_t_fStack_20 *)(_fr + 0x48))
#define fStack_1c (*(_t_fStack_1c *)(_fr + 0x4c))
  
  if ((*(byte *)((int)this + 0x30) & 2) == 0) {
    return;
  }
  uVar1 = *(uint *)((int)this + 0x70);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 0x10) == 0) {
        {
          float10 A_ = (float10)*(int *)((int)this + 0xa0);
          volatile float T_ = (float)*(int *)((int)this + 0xa0);
          float10 AT_ = A_ * (float10)T_;
          float10 h_ = (float10)_DAT_0054db7c;
          float10 X_ = ((float10)*(float *)((int)this + 0xb0) * (float10)T_ + ((float10)*(float *)((int)this + 0xbc) * AT_) * h_) + (float10)*(float *)((int)this + 0xa4);
          float10 Y_ = ((float10)*(float *)((int)this + 0xb4) * (float10)T_ + ((float10)*(float *)((int)this + 0xc0) * AT_) * h_) + (float10)*(float *)((int)this + 0xa8);
          *(float *)((int)this + 0xcc) = (float)X_;
          *(float *)((int)this + 0xd0) = (float)Y_;
        }
      }
      else {
        FUN_004adb70((int)this);
      }
    }
    else {
      fVar9 = *(float *)((int)this + 0xb0) + *(float *)((int)this + 0xa4);
      fVar8 = *(float *)((int)this + 0xb4) + *(float *)((int)this + 0xa8);
      *(float *)((int)this + 0xa4) = fVar9;
      *(float *)((int)this + 0xa8) = fVar8;
      *(float *)((int)this + 0xcc) = fVar9;
      *(float *)((int)this + 0xd0) = fVar8;
    }
  }
  else {
    FUN_004adce0((int)this);
  }
  if ((*(byte *)((int)this + 0x70) & 4) == 0) {
    {
      float10 A_ = (float10)*(int *)((int)this + 0xa0);
      float10 h_ = (float10)_DAT_0054db7c;
      *(float *)((int)this + 0xd4) = (float)(((float10)*(float *)((int)this + 0xb8) * A_ + (((float10)*(float *)((int)this + 0xc4) * A_) * A_) * h_) + (float10)*(float *)((int)this + 0xac));
    }
  }
  else {
    float10 q_ = 0;
    int bad_ = 1;
    if (*(int *)((int)this + 0x144) >= 1) {
      q_ = ((float10)*(float *)((int)this + 0x120) - (float10)*(float *)((int)this + 0xf4)) /
           (float10)*(int *)((int)this + 0x144);
      fStack_64 = (float)q_;
      bad_ = FCOML_C0(q_, _DAT_0054db80);   /* fcompl: C0 = q<K or unordered */
    }
    if (bad_) {
      fStack_64 = 0.5;
    }
    {
      /* x87 sequence kept in extended precision exactly as the asm (no float rounding between ops) */
      float10 x_, r_, y_, L_, s_;
      volatile float twoV_, negTwoV_, negL_;
      float c4_, b8n_, acn_;
      twoV_ = (float)((float10)*(float *)((int)this + 0x68) + (float10)*(float *)((int)this + 0x68));
      x_ = ((float10)*(float *)(DAT_005ae9ac + 4 + *(int *)((int)this + 0x1c) * 8) + (float10)fStack_64) -
           (float10)*(float *)((int)this + 0xac);
      negTwoV_ = -twoV_;
      if (FCOMS_C0(x_, negTwoV_)) r_ = (float10)negTwoV_;
      else if (!FCOMS_C0C3(x_, twoV_)) r_ = (float10)twoV_;
      else r_ = x_;
      L_ = (float10)*(float *)((int)this + 0x68) * (float10)_DAT_0054db78;
      y_ = r_ - (float10)*(float *)((int)this + 0xb8);
      negL_ = (float)(-L_);
      c4_ = (float)y_;
      *(float *)((int)this + 0xc4) = c4_;   /* fsts 0xc4(%esi) happens before the compares */
      if (FCOMS_C0(y_, negL_)) c4_ = negL_;
      else if (!FCOMP_C0C3(y_, L_)) c4_ = (float)L_;
      *(float *)((int)this + 0xc4) = c4_;
      s_ = (float10)*(float *)((int)this + 0xc4) + (float10)*(float *)((int)this + 0xb8);
      b8n_ = (float)s_;
      acn_ = (float)((float10)*(float *)((int)this + 0xac) + s_);
      *(float *)((int)this + 0xb8) = b8n_;
      *(float *)((int)this + 0xac) = acn_;
      *(float *)((int)this + 0xd4) = acn_;
    }
  }
  lVar7 = __ftol((float10)(DAT_005ae9b4 >> 1) + (float10)*(float *)((int)this + 0xcc));
  iVar5 = (int)lVar7;
  lVar7 = __ftol((float10)(DAT_005ae9b8 >> 1) + (float10)*(float *)((int)this + 0xd0));
  iVar3 = (int)lVar7;
  if (DAT_005ae96c == 0) {
    if (((-1 < iVar5) && (iVar5 < DAT_005ae9c4)) && (-1 < iVar3)) {
      if (DAT_005ae9c8 <= iVar3) {
        *(undefined4 *)((int)this + 0xd8) = 1;
        goto LAB_004ae3aa;
      }
      goto LAB_004ae291;
    }
  }
  else {
LAB_004ae291:
    iVar5 = FUN_004a51c0(&DAT_005ae958,iVar5,iVar3);
    if (iVar5 != *(int *)((int)this + 0x1c)) {
      iVar3 = FUN_004ab8f0(&DAT_005ae958,*(int *)((int)this + 0x1c),iVar5);
      if (iVar3 == 0) {
        if (((*(byte *)((int)this + 0x70) & 4) == 0) &&
           (iVar3 = FUN_00532820(&DAT_005ae958,*(int *)((int)this + 0x1c),0.0,iVar5,0.0,
                                 *(float *)((int)this + 0xd4) -
                                 *(float *)(DAT_005ae9ac + 4 + *(int *)((int)this + 0x1c) * 8)),
           iVar3 == 0)) {
          *(undefined4 *)((int)this + 0xd8) = 1;
          goto LAB_004ae3aa;
        }
      }
      FUN_004a6dd0(&DAT_005ae958,this,*(int *)((int)this + 0x1c),iVar5);
    }
    fVar8 = *(float *)(DAT_005ae9ac + 4 + *(int *)((int)this + 0x1c) * 8);
    FUN_004a9a60(&DAT_005ae958,&uStack_5c,*(int *)((int)this + 0x1c));
    {
      /* the original keeps the sum / difference unrounded on the x87 stack and fcomps-compares it with this+0xd4 */
      float10 f8 = (float10)fVar8;
      if ((uStack_5c & 0x400000) == 0) {
        if ((uStack_5c & 0x38000) == 0) {
          if ((uStack_5c & 0x200000) == 0) {
            if ((uStack_5c & 0x800000) != 0) {
              f8 = f8 - (float10)_DAT_005ae93c * (float10)_DAT_0054db8c;
            }
          }
          else {
            f8 = f8 + (float10)_DAT_005ae93c;
          }
        }
        else {
          f8 = f8 + (float10)_DAT_005ae940;
        }
      }
      else {
        f8 = f8 + (float10)_DAT_005ae938;
      }
      if (FCOMS_C0(f8, *(float *)((int)this + 0xd4))) {   /* fcomps: C0 = f8 < d4 or unordered */
        *(undefined4 *)((int)this + 0xd8) = 0;
        goto LAB_004ae3aa;
      }
    }
  }
  *(undefined4 *)((int)this + 0xd8) = 1;
LAB_004ae3aa:
  /* integer copies like the original (movl): a float copy would go through the x87 and quiet a signalling NaN */
  *(uint *)&fStack_58 = *(uint *)((int)this + 0xcc);
  *(uint *)&fStack_54 = *(uint *)((int)this + 0xd0);
  *(uint *)&fStack_50 = *(uint *)((int)this + 0xd4);
  FUN_00469ae0(&DAT_005876d0,&fStack_58);
  lVar7 = __ftol((float10)fStack_4c);
  *(int *)((int)this + 0xc) = (int)lVar7;
  lVar7 = __ftol((float10)fStack_48);
  *(int *)((int)this + 0x10) = (int)lVar7;
  iVar5 = *(int *)((int)this + 0xa0) + 1;
  *(undefined4 *)((int)this + 8) = uStack_44;
  if ((*(uint *)((int)this + 0x70) & 1) == 0) {
    {
      float10 N_ = (float10)iVar5;
      float10 m_ = (float10)_DAT_0054db8c;
      fStack_2c = (float)((((float10)*(float *)((int)this + 0xb0) - ((float10)*(float *)((int)this + 0xbc) * N_) * m_) * N_) + (float10)*(float *)((int)this + 0xa4));
      fStack_28 = (float)((((float10)*(float *)((int)this + 0xb4) - ((float10)*(float *)((int)this + 0xc0) * N_) * m_) * N_) + (float10)*(float *)((int)this + 0xa8));
    }
  }
  else {
    fStack_2c = *(float *)((int)this + 0xb0) + *(float *)((int)this + 0xcc);
    fStack_28 = *(float *)((int)this + 0xb4) + *(float *)((int)this + 0xd0);
  }
  if ((*(uint *)((int)this + 0x70) & 4) == 0) {
    {
      float10 N_ = (float10)iVar5;
      float10 m_ = (float10)_DAT_0054db8c;
      fStack_24 = (float)((((float10)*(float *)((int)this + 0xb8) - ((float10)*(float *)((int)this + 0xc4) * N_) * m_) * N_) + (float10)*(float *)((int)this + 0xac));
    }
  }
  else {
    fStack_24 = *(float *)((int)this + 0xd4) + *(float *)((int)this + 0xb8);
  }
  FUN_00469ae0(&DAT_005876d0,&fStack_2c);
  fVar6 = (float10)fpatan((float10)fStack_48 - (float10)fStack_1c,
                          (float10)fStack_4c - (float10)fStack_20);
  lVar7 = __ftol(fVar6 * (float10)_DAT_0054db90);
  iVar5 = -(int)lVar7 + -0x5a;
  if (iVar5 < 0) {
    iVar5 = -(int)lVar7 + 0x10e;
  }
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
    FUN_0049dc60(*(void **)((int)this + 0x2c),iVar5,0x168);
  }
  if (*(void **)((int)this + 0xe8) != (void *)0x0) {
    FUN_0049dc60(*(void **)((int)this + 0xe8),iVar5,0x168);
  }
  if (*(int *)((int)this + 0xe4) != 0) {
    puVar4 = FUN_004c6fc0();
    fVar6 = FUN_004a64d0(puVar4,*(uint *)&fStack_58,*(uint *)&fStack_54);
    fStack_50 = (float)fVar6;
    puVar4 = FUN_004c6fc0();
    fVar6 = FUN_004a64d0(puVar4,*(uint *)&fStack_2c,*(uint *)&fStack_28);
    fStack_24 = (float)fVar6;
    FUN_00469ae0(&DAT_005876d0,&fStack_58);
    FUN_00469ae0(&DAT_005876d0,&fStack_2c);
    fVar6 = (float10)fpatan((float10)fStack_48 - (float10)fStack_1c,
                            (float10)fStack_4c - (float10)fStack_20);
    lVar7 = __ftol(fVar6 * (float10)_DAT_0054db90);
    iVar5 = -(int)lVar7 + -0x5a;
    if (iVar5 < 0) {
      iVar5 = -(int)lVar7 + 0x10e;
    }
    FUN_0049dc60(*(void **)((int)this + 0xe4),iVar5,0x168);
    lVar7 = __ftol((float10)fStack_48);
    *(int *)((int)this + 0xdc) = (int)lVar7 - *(int *)((int)this + 0x10);
  }
  return;
#undef fStack_64
#undef uStack_5c
#undef fStack_58
#undef fStack_54
#undef fStack_50
#undef fStack_4c
#undef fStack_48
#undef uStack_44
#undef fStack_2c
#undef fStack_28
#undef fStack_24
#undef fStack_20
#undef fStack_1c
}
