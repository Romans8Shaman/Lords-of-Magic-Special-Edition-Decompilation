/* Rebuilt from lomse.exe FUN_00472f90 @ 0x00472f90 (1400 bytes, __thiscall, ret 0x20, 8 stack args). HAND (2026-11-13, was asmfn):
 * Popup placement. Args: out (2 ints x,y), flagsA (p2), flagsB (p3), rect x,y,w,h (p4..p7, the box to place), anchorSel (p8).
 * Anchor rect = (320,190,1,1) if p8 != 0 (004a6e60 / 004f6000 are still called first); else the rect from this->0xec/0xf0 via 004a6e60/004f6000 (obj vtbl[0x12](&r)),
 * or 005005f0(DAT_005a79bc) -> 0048d810(DAT_005a79c0) -> 0048eb70(&tmp) rect. Fails (out = -1,-1) when both flag words are 0
 * or no anchor can be found. Then tries the flag words (flagsA, or flagsB twice if flagsA==0) in order; flag 0x10 re-reads the
 * anchor from this+0x170 (49cb20/49cc10). Bits 1,2,4,8,0x20,0x40,0x80,0x100,0x200,0x400 pick the corner / centring. The first
 * candidate fully inside 640x480 wins; otherwise the candidate with the larger clipped area (ties -> candidate 1) is clamped.
 * Two 16-byte rect objects (ctor 00474de0 / dtor 0046ba20 via the EH vector iterators) are created and destroyed;
 * DAT_00583650 net -0x10. The C++ EH frame (only unwinds on a throw) is omitted. */
#include "lom.h"

#define DAT_00583650 (*(int *)0x00583650)
#define FUN_00539ff0 ((void (__stdcall *)(void *, int, int, void *, void *))0x00539ff0)
#define FUN_00539eb0 ((void (__stdcall *)(void *, int, int, void *))0x00539eb0)
#define FUN_004a6e60 ((int (__thiscall *)(void *, int, int))0x004a6e60)
#define FUN_004f6000 ((int * (__thiscall *)(void *, int))0x004f6000)
#define FUN_005005f0 ((void * (__thiscall *)(void *, int))0x005005f0)
#define FUN_0048d810 ((void * (__thiscall *)(void *, int))0x0048d810)
#define FUN_0048eb70 ((int * (__thiscall *)(void *, int *))0x0048eb70)
#define FUN_0049cb20 ((void (__thiscall *)(void *, int *, int *, int, int))0x0049cb20)
#define FUN_0049cc10 ((int * (__thiscall *)(void *, int *, int, int))0x0049cc10)

#define LOM_SELF_00472f90 1
int * __thiscall rb_00472f90(void *this, int *out, uint p2, uint p3, int px, int py, int w, int h, int sel)
{
  int arr[8];
  uint fl[2];
  int cand[4];
  int ax, ay, aw, ah;
  int r0[4], r1[4], t0[4], tmp2[4];
  int *rp;
  int i, x, y, idx;
  int v30, v2c;
  int *o;
  int *obj;

  FUN_00539ff0(arr, 0x10, 2, (void *)0x00474de0, (void *)0x0046ba20);
  cand[0] = -1; cand[1] = -1; cand[2] = -1; cand[3] = -1;
  fl[0] = p2; fl[1] = p3;
  if (p2 < 1) {
    fl[0] = p3;
    if (p3 < 1) {
      out[0] = -1; out[1] = -1;
      FUN_00539eb0(arr, 0x10, 2, (void *)0x0046ba20);
      DAT_00583650 = DAT_00583650 - 0x10;
      return out;
    }
  }
  obj = FUN_004f6000((void *)0x005ae974, FUN_004a6e60((void *)0x005ae958, *(int *)((int)this + 0xec), *(int *)((int)this + 0xf0)));
  if (sel == 0) {
    if (obj != 0) {
      ((void (__thiscall *)(void *, int *))(*(int **)obj)[0x48 / 4])(obj, t0);
      ax = t0[0]; ay = t0[1]; aw = t0[2] - t0[0]; ah = t0[3] - t0[1];
    } else {
      void *a = FUN_005005f0((void *)0x00584ae8, *(int *)0x005a79bc);
      void *b;
      if (a == 0) {
        out[0] = -1; out[1] = -1;
        FUN_00539eb0(arr, 0x10, 2, (void *)0x0046ba20);
        DAT_00583650 = DAT_00583650 - 0x10;
        return out;
      }
      b = FUN_0048d810(a, *(int *)0x005a79c0);
      if (b == 0) {
        out[0] = -1; out[1] = -1;
        FUN_00539eb0(arr, 0x10, 2, (void *)0x0046ba20);
        DAT_00583650 = DAT_00583650 - 0x10;
        return out;
      }
      rp = FUN_0048eb70(b, tmp2);
      t0[0] = rp[0]; t0[1] = rp[1]; t0[2] = rp[2]; t0[3] = rp[3];
      ax = t0[0]; ay = t0[1]; aw = t0[2] - t0[0]; ah = t0[3] - t0[1];
    }
  } else {
    ax = 0x140; ay = 0xbe; aw = 1; ah = 1;
  }

  for (i = 0; i != 2; i++) {
    uint f = fl[i];
    int *R = &arr[i * 4];
    int *c = &cand[i * 2];
    if (f & 0x10) {
      FUN_0049cb20(*(void **)((int)this + 0x170), &v30, &v2c, 1, -1);
      rp = FUN_0049cc10(*(void **)((int)this + 0x170), r1, *(int *)((int)this + 0xec) - v30, *(int *)((int)this + 0xf0) - v2c);
      t0[0] = rp[0]; t0[1] = rp[1]; t0[2] = rp[2]; t0[3] = rp[3];
      ax = t0[0]; ay = t0[1]; aw = t0[2] - t0[0]; ah = t0[3] - t0[1];
    }
    c[0] = ax; c[1] = ay;
    if (f & 0x1) c[1] = ay - h;
    if (f & 0x2) c[1] = ay + ah;
    if (f & 0x4) c[0] = ax - w;
    if (f & 0x8) c[0] = ax + aw;
    if (f & 0x20) c[0] = ax + (aw >> 1);
    if (f & 0x40) c[0] = ax + (aw >> 1) - w;
    if (f & 0x80) c[1] = ay + (ah >> 1);
    if (f & 0x100) c[1] = ay + (ah >> 1) - h;
    if (f & 0x200) c[0] = ax + (aw >> 1) - (w >> 1);
    if (f & 0x400) c[1] = ay + (ah >> 1) - (h >> 1);
    x = c[0];
    if (x > -1 && w + x < 0x280 && c[1] > -1 && h + c[1] < 0x1e0) {
      out[0] = cand[i * 2]; out[1] = cand[i * 2 + 1];
      FUN_00539eb0(arr, 0x10, 2, (void *)0x0046ba20);
      DAT_00583650 = DAT_00583650 - 0x10;
      return out;
    }
    y = c[1];
    R[0] = px; R[1] = py; R[2] = w; R[3] = h;
    if (x < 0) R[2] += x;
    if (w + x > 0x27f) R[2] += 0x280 - w - x;
    if (y < 0) R[3] += y;
    if (h + y > 0x1df) R[3] += 0x1e0 - h - y;
  }
  idx = (arr[2] * arr[3] <= arr[6] * arr[7]) ? 1 : 0;
  o = &cand[idx * 2];
  if (w + o[0] > 0x27f) o[0] = 0x27f - w;
  if (o[0] < 0) o[0] = 0;
  if (h + o[1] > 0x1df) o[1] = 0x1df - h;
  if (o[1] < 0) o[1] = 0;
  out[0] = o[0]; out[1] = o[1];
  FUN_00539eb0(arr, 0x10, 2, (void *)0x0046ba20);
  DAT_00583650 = DAT_00583650 - 0x10;
  return out;
}
