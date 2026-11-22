/* Hand-written from lomse.exe 0x00413b30 (__fastcall(this), plain ret; SEH/Storm frame 0x54940b dropped like gen.py). Sibling of
 * 00413550 ("split army") with a prologue: vtable[0xf] of this -> player index r; if 0<=r<16 and byte
 * (0x5af194 + r*0x1d84)[0x15d8] & 2: 00415c20(this,0,-1), then if this[0x12]== (0x5aa78c vtable[0xf])() copy this's slots
 * to 0x5aa850, and if == (0x5aad68 vtable[0xf])() copy them to 0x5aae2c. Then as 00413550 but the placement is
 * 004e7400(this,p,&c48,&c44,0) + 0045a260(0x579458,p,c48,c44,e[0x11],&t[3],&t[4]) and 0045a1b0(0x579458)/004e7300(this) run
 * before the loop. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 0x005a7d90
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_00413180 ((int (__thiscall *)(void *, int))0x00413180)
#define FUN_00413500 ((int (__thiscall *)(void *, int, int, int))0x00413500)
#define FUN_004141f0 ((undefined4 (__thiscall *)(void *, int *, int *))0x004141f0)
#define FUN_004154a0 ((int (__fastcall *)(void *))0x004154a0)
#define FUN_00415c20 ((undefined4 (__thiscall *)(void *, int, int))0x00415c20)
#define FUN_0045a1b0 ((undefined4 (__thiscall *)(void *))0x0045a1b0)
#define FUN_004e7300 ((undefined4 (__thiscall *)(void *))0x004e7300)
#define FUN_004e7400 ((undefined4 (__thiscall *)(void *, int, int *, int *, int))0x004e7400)
#define FUN_0045a260 ((undefined4 (__thiscall *)(void *, int, int, int, int, int *, int *))0x0045a260)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004c6fc0 ((void * (__thiscall *)(void *))0x004c6fc0)
#define FUN_004c8bb0 ((undefined4 (__fastcall *)(void *, int *, int *, int *))0x004c8bb0)
#define FUN_0051ab30 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x0051ab30)
#define FUN_00521e00 ((int (__fastcall *)(void *))0x00521e00)
#define FUN_00521e30 ((uint (__fastcall *)(void *))0x00521e30)
#define FUN_00521e50 ((uint (__fastcall *)(void *))0x00521e50)
#define FUN_005291e0 ((int * (__fastcall *)(void *))0x005291e0)
#define Ordinal_401 ((undefined4 * (__stdcall *)(int, char *, int, int))0x00533864)
#define K_d410 (*(double *)0x0054d410)
#define K_d418 (*(double *)0x0054d418)
#define K_d420 (*(double *)0x0054d420)
#define STR_storm (char *)0x00555130

static inline void cpd(int *d, const int *s, int n) { while (n--) *d++ = *s++; }

#define LOM_SELF_00413b30 1


void __fastcall rb_00413b30(int *t)
{
  int r0, c44, c48, i, p, q, nq, cnt, flag, A, B, X, Y, v, cell, k;
  int *obj, *lp, *slot, *cur, *e, *e0;
  void *P;
  char *pl;
  uint r;
  double angle;
  undefined4 *mem;

  r0 = ((int (__thiscall *)(void *))(*(void **)(*(int *)t + 0x3c)))(t);
  pl = (char *)0;
  if (r0 >= 0 && r0 < 0x10) pl = (char *)0x005af194 + r0 * 0x1d84;
  if (pl != 0 && (pl[0x15d8] & 2) != 0) {
    FUN_00415c20(t, 0, -1);
    r0 = ((int (__thiscall *)(void *))(*(void **)(*(int *)0x005aa78c + 0x3c)))((void *)0x005aa78c);
    if (t[0x12] == r0 && 0 < t[0x13]) {
      i = 0;
      do {
        i++;
        cpd((int *)0x005aa850 + (i - 1) * 0x13, t + 0x31 + (i - 1) * 0x13, 0x13);
      } while (i < t[0x13]);
    }
    r0 = ((int (__thiscall *)(void *))(*(void **)(*(int *)0x005aad68 + 0x3c)))((void *)0x005aad68);
    if (t[0x12] == r0 && 0 < t[0x13]) {
      i = 0;
      do {
        i++;
        cpd((int *)0x005aae2c + (i - 1) * 0x13, t + 0x31 + (i - 1) * 0x13, 0x13);
      } while (i < t[0x13]);
    }
  }
  for (i = 0; i < t[0x13]; i++) {
    (void)FUN_005291e0(t + 0x31 + i * 0x13);
  }
  P = FUN_004c6fc0(t);
  (void)*(volatile int *)((char *)P + 0x6c);
  (void)FUN_004c6fc0(t);
  angle = (double)((float10)(int)((t[0x11] + 2) & 7) * (float10)K_d410);
  FUN_004c8bb0(&DAT_005aef04, &B, &B, &A);
  FUN_004141f0(t, &X, &Y);
  cnt = 0;
  flag = 0;
  if (0 < FUN_004154a0(t)) flag = 1;
  FUN_0045a1b0((void *)0x00579458);
  FUN_004e7300(t);
  for (p = 0; p < t[0x13]; p++) {
    cur = (int *)((char *)t + p * 0x4c);
    slot = cur + 0x31;
    FUN_00521e00(slot);
    obj = FUN_005291e0(slot);
    nq = obj ? obj[0x11] : 1;                    /* obj+0x44 */
    lp = (int *)((char *)obj + 0x2c);
    for (q = 0; q < nq; q++, lp++) {
      e = 0;
      mem = Ordinal_401(0x5dc, STR_storm, 0x3ef, 0);
      if (mem) e = (int *)FUN_00411610(mem);
      if (e == 0) continue;
      cpd(e, t, 0x11);
      e[0xb] = 0;
      e[0x11] = t[0x11]; e[0x12] = t[0x12]; e[0x13] = t[0x13]; e[0x14] = t[0x14]; e[0x15] = t[0x15];
      e[0x16] = t[0x16]; e[0x17] = t[0x17]; e[0x18] = t[0x18]; e[0x19] = t[0x19];
      cpd(e + 0x1a, t + 0x1a, 0x16);
      e[0x30] = t[0x30];
      for (k = 0; k < 0xf; k++) cpd(e + 0x31 + k * 0x13, t + 0x31 + k * 0x13, 0x13);
      e[0x14e] = t[0x14e]; e[0x14f] = t[0x14f]; e[0x150] = t[0x150]; e[0x151] = t[0x151]; e[0x152] = t[0x152];
      e[0x153] = t[0x153]; e[0x154] = t[0x154]; e[0x155] = t[0x155]; e[0x156] = t[0x156];
      e[0x157] = t[0x157]; e[0x158] = t[0x158]; e[0x159] = t[0x159];
      cpd(e + 0x15a, t + 0x15a, 9);   /* 0x568..0x58b */
      e[0x163] = t[0x163]; e[0x164] = t[0x164]; e[0x165] = t[0x165]; e[0x166] = t[0x166]; e[0x167] = t[0x167];
      e[0x168] = t[0x168]; e[0x169] = t[0x169]; e[0x16a] = t[0x16a];
      *(char *)(e + 0x16b) = (char)t[0x16b];
      e[0x16c] = t[0x16c]; e[0x16d] = t[0x16d]; e[0x16e] = t[0x16e]; e[0x16f] = t[0x16f]; e[0x170] = t[0x170];
      e[0x171] = t[0x171];
      *(char *)(e + 0x172) = (char)t[0x172];
      e[0x173] = t[0x173];
      *(char *)(e + 0x174) = (char)t[0x174];
      e[0x175] = t[0x175];
      *(char *)(e + 0x16b) = (char)p;
      *(char *)(e + 0x176) = (char)t[0x176];
      e[10] = -1;
      e[0xf] = 0;
      e[0x13] = 1;
      cpd(e + 0x31, slot, 0x13);
      for (k = 1; k < t[0x13]; k++) {
        int *sk = e + 0x31 + k * 0x13;   /* slot k: +0x14,+0x18,+0x1c := 0 */
        sk[6] = 0; sk[7] = 0; sk[5] = 0;
      }
      if (obj == 0) {
        e[0x32] = cur[0x32];
      } else {
        e[0x32] = lp[-6];
        e[0x37] = *lp;
        e[0x36] = 0;
        if (0 < q) e[0x38] = 0;
      }
      e[0x14] = 0;
      t[3] = X;
      t[4] = Y;
      FUN_004e7400(t, p, &c48, &c44, 0);
      FUN_0045a260((void *)0x00579458, p, c48, c44, e[0x11], t + 3, t + 4);
      if (FUN_00521e30(e + 0x31) != 0) {
        P = FUN_004c6fc0(t);
        cell = FUN_004a51c0(P, t[3], t[4]);
        v = FUN_00413180(e, cell);
      } else {
        r = FUN_00521e50(e + 0x31);
        v = r ? B : A;
        v -= 2;
        P = FUN_004c6fc0(t);
        cell = FUN_004a51c0(P, t[3], t[4]);
        v = FUN_00413500(e, cell, (r != 0), v);
      }
      e[7] = v;
      P = FUN_004c6fc0(t);
      FUN_004a7d50(P, e, v);
      if (p == 0 && *(int *)(DAT_005a7d90 + DAT_005a7d8c * 0x400) == t[0x12]) {
        int s1 = (int)(long long)(fsin((float10)angle) * (float10)K_d418);
        int c1 = (int)(long long)(fcos((float10)angle) * (float10)K_d420);
        FUN_0051ab30(&DAT_005876d0, X, Y, 0x140 - c1, 0xc0 - s1);
      }
      cnt++;
      if (flag && FUN_00521e50(e + 0x31) != 0) e[0xc] |= 0x10000000;
    }
  }
}
