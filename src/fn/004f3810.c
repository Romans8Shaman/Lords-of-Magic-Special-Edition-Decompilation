/* Rebuilt from lomse.exe FUN_004f3810 @ 0x004f3810 (683 bytes, __cdecl).
 * HAND (2026-11-13): rewrite of the gen C that crashed in r91 endturn (c0000005 read 0x22 at
 * rebuilt +0x144). Ghidra laid a 0x6c-byte DDSURFACEDESC over the loop counters (local_8c[5]
 * and local_6c[2]); the Lock/CreateSurface zero-fill and SetColorKey stores then clobbered
 * the saved record pointer, so the inner-loop bound `*(ushort *)(iVar6 + 2)` read [0x20+2].
 * This version keeps the counters, record pointer, desc, and color-key in distinct locals,
 * and reloads the record pointer after the DirectDraw path just like the original does
 * from [esp+0x2c]. */
#include "lom.h"

#define DAT_00584ab4 (*(int **)0x00584ab4)

#define LOM_SELF_004f3810 1
undefined4 __cdecl rb_004f3810(ushort *param_1)
{
  int base = (int)param_1;
  ushort flags;
  int *groups;
  int g, ng, s, ns, i, ni;
  int *group;
  int *rec;
  ushort *item;
  ushort iflags;
  int p, src_off;
  ushort *src;
  int desc[27];          /* DDSURFACEDESC, dwSize 0x6c */
  int ckey[2];
  int *dd, *surf;
  int pitch, y, w, h;
  int *dp, *sp;
  uint n, rem;

  *(int *)((int)param_1 + 0x1c) = *(int *)((int)param_1 + 0x1c) + base;
  flags = *param_1;
  if ((flags & 8) != 0)
    *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + base;
  if ((flags & 0x30) != 0)
    *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + base;

  ng = (int)(uint)param_1[0xd];          /* [esi+0x1a] */
  if (ng == 0)
    return 0;

  for (g = 0; g < ng; g++) {
    group = (int *)(*(int *)((int)param_1 + 0x1c) + g * 0x10);
    group[3] = (int)((byte *)group[3] + base);   /* +0xc reloc */
    ns = (int)(uint)*(byte *)((int)group + 0xb);
    if (ns == 0)
      continue;
    for (s = 0; s < ns; s++) {
      rec = (int *)(group[3] + s * 8);
      rec[1] = (int)((byte *)rec[1] + base);     /* +4 reloc */
      ni = (int)(uint)*(ushort *)((int)rec + 2);
      if (ni == 0)
        continue;
      for (i = 0; i < ni; i++) {
        item = (ushort *)(rec[1] + i * 0x10);
        iflags = item[0];
        if ((iflags & 8) != 0) {
          /* copy from the already-relocated item at index item[0xc] * 0x10 */
          src_off = *(int *)(item + 6) * 0x10;
          src = (ushort *)(src_off +
                           *(int *)(*(int *)(*(int *)((int)param_1 + 0x1c) + 0xc) + 4));
          *(int *)(item + 6) = *(int *)(src + 6);
          item[1] = src[1];
          item[2] = src[2];
          *(int *)(item + 4) = *(int *)(src + 4);
          item[0] = (iflags & 0xff) | (src[0] & 0xff00);
        } else {
          p = *(int *)(item + 6);
          if (p != 0) {
            p = p + base;
            *(int *)(item + 6) = p;
            if (((*(byte *)param_1) & 0x33) == 0) {
              for (n = 0; n < 27; n++) desc[n] = 0;
              desc[0] = 0x6c;
              desc[1] = 0x1007;
              desc[2] = (int)item[2];            /* height at desc+8 */
              desc[3] = (int)item[1];            /* width  at desc+0xc */
              desc[0x12] = 0x20;                 /* +0x48 */
              desc[0x13] = 0x60;                 /* +0x4c */
              desc[0x15] = 8;                    /* +0x54 */
              desc[0x1a] = 0x840;                /* +0x68 */
              dd = DAT_00584ab4;
              /* CreateSurface(dd, desc, &item[0xc], 0) */
              ((undefined4 (__stdcall *)(int *, int *, int *, int))(*(int *)(*dd + 0x18)))
                (dd, desc, (int *)(item + 6), 0);
              surf = *(int **)(item + 6);
              ((undefined4 (__stdcall *)(int *))(*(int *)(*surf + 0x6c)))(surf);
              ckey[0] = (int)*(byte *)((int)param_1 + 3);
              ckey[1] = ckey[0];
              /* SetColorKey(surf, 8, ckey) */
              ((undefined4 (__stdcall *)(int *, int, int *))(*(int *)(*surf + 0x74)))
                (surf, 8, ckey);
              for (n = 0; n < 27; n++) desc[n] = 0;
              desc[0] = 0x6c;
              /* Lock(surf, 0, desc, 1, 0) */
              ((undefined4 (__stdcall *)(int *, int, int *, int, int))(*(int *)(*surf + 0x64)))
                (surf, 0, desc, 1, 0);
              if (item[2] != 0) {
                w = (int)item[1];
                h = (int)item[2];
                sp = (int *)p;                   /* source pixels (relocated item[0xc]) */
                dp = (int *)desc[9];             /* lpSurface at desc+0x24 */
                pitch = desc[4];                 /* lPitch at desc+0x10 */
                for (y = 0; y < h; y++) {
                  int *s2 = sp;
                  int *d2 = dp;
                  n = (uint)w >> 2;
                  while (n--) { *d2++ = *s2++; }
                  rem = (uint)w & 3;
                  while (rem--) {
                    *(char *)d2 = (char)*s2;
                    s2 = (int *)((int)s2 + 1);
                    d2 = (int *)((int)d2 + 1);
                  }
                  sp = (int *)((int)sp + w);
                  dp = (int *)((int)dp + pitch);
                }
              }
              surf = *(int **)(item + 6);
              /* Unlock(surf, 0) — original pushes 0 then the *pointee of ebx */
              ((undefined4 (__stdcall *)(int *, int))(*(int *)(*surf + 0x80)))(surf, 0);
            }
          }
        }
        if (((iflags >> 8) != 0) && ((iflags & 8) == 0))
          *(int *)(item + 4) = *(int *)(item + 4) + base;
      }
    }
  }
  return 0;
}
