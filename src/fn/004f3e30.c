/* Hand-written from lomse.exe 0x004f3e30 (cdecl, 6 stack args a1..a6, plain ret): Storm-style bitmap dispatcher.
 * a1+8 -> image header whose first byte & 0x33 selects the format (jump table: byte table at 0x4f4120, 12 targets); hdr = a2
 * (u16 flags at +0, +2 width, +4 height, dword +0xc pixel data); flags&4 -> return 0; flip = (flags&1) ^ a5; lut = a4 or
 * *(hdr1+0xc). Codes: 1 -> Lock a3, 004f41e0 / 004f4240 (by flip) (src,surf,w,h,pitch), Unlock, return its result;
 * 2 -> Lock, 004f3d20(surf,&(h*pitch),src,h*pitch,w,pitch), Unlock, return 1; 0x10/0x20/0x30 -> set [0x584aa8] =
 * 0x573264+(code>>4)*12, Lock, 004f42b0 / 004f43a0 (src,surf,w,h,pitch,lut or 0x573298), Unlock; 0x11/0x21/0x31 -> set
 * [0x584aa8], q = 8/G[2], 004f4160(src,[0x584ac8],(h*w+q-1)/q), return 004f4490([0x584ac8],a3,w,h,lut,flip);
 * 0x12/0x22/0x32 -> set [0x584aa8], return 0; anything else -> return 1. */
#include "lom.h"

#define FUN_004f3d20 ((int (__cdecl *)(int, uint *, int, int, uint, int))0x004f3d20)
#define FUN_004f4160 ((undefined4 (__cdecl *)(char *, char *, int))0x004f4160)
#define FUN_004f41e0 ((undefined4 (__cdecl *)(char *, char *, int, int, int))0x004f41e0)
#define FUN_004f4240 ((undefined4 (__cdecl *)(char *, int, int, int, int))0x004f4240)
#define FUN_004f42b0 ((undefined4 (__cdecl *)(uchar *, uchar *, int, int, uint, int))0x004f42b0)
#define FUN_004f43a0 ((undefined4 (__cdecl *)(uchar *, int, int, int, uint, int))0x004f43a0)
#define FUN_004f4490 ((undefined4 (__cdecl *)(int, int *, int, int, int, int))0x004f4490)
#define GSEL 0x00584aa8
#define GBUF 0x00584ac8

static inline void ddlock(int *obj, int *desc)
{
  int i;
  for (i = 0; i < 0x1b; i++) desc[i] = 0;
  desc[0] = 0x6c;
  ((int (__stdcall *)(void *, int, int *, int, int))(*(void **)(*obj + 0x64)))(obj, 0, desc, 1, 0);
}
static inline void ddunlock(int *obj)
{
  ((int (__stdcall *)(void *, int))(*(void **)(*obj + 0x80)))(obj, 0);
}

#define LOM_SELF_004f3e30 1

int rb_004f3e30(int *a1, ushort *hdr, int *a3, uchar *a4, int a5, int a6)
{
  int desc[0x1b];
  uint flags = *hdr;
  volatile int selw; int flip, code, sel, w, h, src, lutv, g, ret, q, cnt, hp;
  uchar *p;
  int *surf = a3;

  if (flags & 4) return 0;
  flip = (int)(flags & 1) ^ a5;
  p = (uchar *)a1[2];
  code = *p & 0x33;
  lutv = (int)a4;
  if (lutv == 0) lutv = *(int *)(p + 0xc);
  if ((uint)(code - 1) > 0x31) return 1;
  selw = *(uchar *)(0x004f4120 + (code - 1)); /* volatile: keep an if-chain, no jump table (no relocs) */
  sel = selw;
  if (selw == 2 || selw == 5 || selw == 8) {
    *(int *)GSEL = 0x00573264 + (code >> 4) * 0x0c;
    src = *(int *)((uchar *)hdr + 0xc);
    h = *(ushort *)((uchar *)hdr + 4);
    w = *(ushort *)((uchar *)hdr + 2);
    if (lutv == 0) lutv = 0x00573298;
    ddlock(surf, desc);
    if (flip == 0) ret = FUN_004f42b0((uchar *)src, (uchar *)desc[9], w, h, (uint)desc[4], lutv);
    else ret = FUN_004f43a0((uchar *)src, desc[9], w, h, (uint)desc[4], lutv);
    ddunlock(surf);
    return ret;
  }
  if (selw == 0) {
    src = *(int *)((uchar *)hdr + 0xc);
    h = *(ushort *)((uchar *)hdr + 4);
    w = *(ushort *)((uchar *)hdr + 2);
    ddlock(surf, desc);
    if (flip == 0) ret = FUN_004f41e0((char *)src, (char *)desc[9], w, h, desc[4]);
    else ret = FUN_004f4240((char *)src, desc[9], w, h, desc[4]);
    ddunlock(surf);
    return ret;
  }
  if (selw == 1) {
    src = *(int *)((uchar *)hdr + 0xc);
    h = *(ushort *)((uchar *)hdr + 4);
    w = *(ushort *)((uchar *)hdr + 2);
    ddlock(surf, desc);
    hp = h * desc[4];
    {
      uint val = (uint)hp;
      FUN_004f3d20(desc[9], &val, src, hp, w, desc[4]);
    }
    ddunlock(surf);
    return 1;
  }
  if (selw == 3 || selw == 6 || selw == 9) {
    int *gp;
    int gb = *(int *)GBUF;
    gp = (int *)(0x00573264 + ((code >> 4) & 3) * 0x0c);
    *(int *)GSEL = (int)gp;
    h = *(ushort *)((uchar *)hdr + 4);
    w = *(ushort *)((uchar *)hdr + 2);
    src = *(int *)((uchar *)hdr + 0xc);
    g = (int)gp;
    if (g == 0) g = 0x00573288;
    q = 8 / ((int *)g)[2];
    cnt = (int)((uint)(h * w + q - 1) / (uint)q);
    FUN_004f4160((char *)src, (char *)gb, cnt);
    return FUN_004f4490(gb, a3, w, h, lutv, flip);
  }
  if (selw == 4 || selw == 7 || selw == 10) {
    *(int *)GSEL = 0x00573264 + ((code >> 4) & 3) * 0x0c;
    return 0;
  }
  return 1;
}
