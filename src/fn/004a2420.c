/* Rebuilt from lomse.exe FUN_004a2420 @ 0x004a2420 (1004 bytes, __thiscall, ret 4). HAND (2026-11-13, was asmfn):
 * Writes an IFF "FORM....PBM BMHD" 8-bit PackBits-compressed image file (screenshot / bitmap dump). `this` = bitmap
 * {+0 pixels, +4 width, +8 height, +0xc pitch, +0x10 palette (256 RGB555 words)}. fopen(path, 0x556168) (NULL -> 0); writes the 0x28
 * byte header (width/height big endian, 8 planes, compression 1, aspect 1:1, page w/h), 4-byte tag DAT_0055c978, length 0x300, the 256
 * palette entries converted by 00474e70(0x584ae8, &r,&g,&b, word) as r,g,b bytes, tag DAT_0055c970, remembers ftell, tag
 * DAT_0055c968, then per row a PackBits stream: a run (>=3 equal bytes, up to 0x7f) as (1-n, byte), otherwise a literal of n bytes
 * ((n-1), data) where the literal ends before a 4-byte equal run (or after 0x80 bytes). Pads to even length with a 0 byte, fseek(4)
 * writes total+0x330 BE, fseek(ftell mark) writes the body size BE, fclose, returns 1. */
#include "lom.h"

#define FUN_00539610 ((int * (__cdecl *)(const char *, const char *))0x00539610) /* fopen */
#define FUN_00539660 ((uint (__cdecl *)(const void *, uint, uint, int *))0x00539660) /* fwrite */
#define FUN_0053a140 ((int (__cdecl *)(int *, int, int))0x0053a140) /* fseek */
#define FUN_0053ac20 ((int (__cdecl *)(int *))0x0053ac20) /* ftell */
#define FUN_005394d0 ((int (__cdecl *)(int *))0x005394d0) /* fclose */
#define FUN_00474e70 ((undefined4 (__thiscall *)(void *, uint *, uint *, uint *, uint))0x00474e70)
#define DAT_0055c978 ((void *)0x0055c978)
#define DAT_0055c970 ((void *)0x0055c970)
#define DAT_0055c968 ((void *)0x0055c968)

#define LOM_SELF_004a2420 1
undefined4 __thiscall rb_004a2420(void *this, const char *path)
{
  uchar hdr[0x28];
  uchar b4[4];
  uchar rgb[3];
  uchar one;
  uint r, g, b;
  int *fp;
  int i, rem, n, k, row;
  uint total;
  int mark;
  uchar *p;
  uchar c0, c1;
  int w = *(int *)((int)this + 4), h = *(int *)((int)this + 8);

  hdr[0] = 'F'; hdr[1] = 0x4f; hdr[2] = 0x52; hdr[3] = 0x4d;
  hdr[4] = 0; hdr[5] = 0; hdr[6] = 0; hdr[7] = 0;
  hdr[8] = 0x50; hdr[9] = 0x42; hdr[10] = 0x4d; hdr[11] = 0x20;
  hdr[12] = 0x42; hdr[13] = 0x4d; hdr[14] = 0x48; hdr[15] = 0x44;
  hdr[16] = 0; hdr[17] = 0; hdr[18] = 0; hdr[19] = 0x14;
  hdr[20] = (uchar)(w >> 8); hdr[21] = (uchar)w;
  hdr[22] = (uchar)(h >> 8); hdr[23] = (uchar)h;
  hdr[24] = 0; hdr[25] = 0; hdr[26] = 0; hdr[27] = 0;
  hdr[28] = 8; hdr[29] = 0; hdr[30] = 1; hdr[31] = 0;
  hdr[32] = 0; hdr[33] = 0; hdr[34] = 1; hdr[35] = 1;
  hdr[36] = (uchar)(w >> 8); hdr[37] = (uchar)w;
  hdr[38] = (uchar)(h >> 8); hdr[39] = (uchar)h;
  fp = FUN_00539610(path, (const char *)0x00556168);
  if (fp == 0) return 0;
  FUN_00539660(hdr, 0x28, 1, fp);
  FUN_00539660(DAT_0055c978, 4, 1, fp);
  b4[0] = 0; b4[1] = 0; b4[2] = 3; b4[3] = 0;
  FUN_00539660(b4, 4, 1, fp);
  for (i = 0; i < 0x200; i = i + 2) {
    FUN_00474e70((void *)0x00584ae8, &r, &g, &b, (uint)*(ushort *)(i + *(int *)((int)this + 0x10)));
    rgb[0] = (uchar)r; rgb[1] = (uchar)g; rgb[2] = (uchar)b;
    FUN_00539660(&rgb[0], 1, 1, fp);
    FUN_00539660(&rgb[1], 1, 1, fp);
    FUN_00539660(&rgb[2], 1, 1, fp);
  }
  FUN_00539660(DAT_0055c970, 4, 1, fp);
  mark = FUN_0053ac20(fp);
  FUN_00539660(DAT_0055c968, 4, 1, fp);
  total = 0;
  for (row = 0; row < *(int *)((int)this + 8); row = row + 1) {
    p = (uchar *)(row * *(int *)((int)this + 0xc) + *(int *)this);
    rem = *(int *)((int)this + 4);
    while (rem != 0) {
      c0 = p[0];
      c1 = p[1];
      n = 1;
      while (c1 == c0 && n < rem && n < 0x7f) {
        c1 = p[n + 1];
        n = n + 1;
      }
      if (n < 3) {
        n = 1;
        if (rem > 1) {
          k = 3;
          while (k < 0x81) {
            if (k - 1 < rem && p[n] == p[n + 1] && k < rem && p[n] == p[n + 2] && k + 1 < rem && p[n] == p[n + 3]) break;
            n = n + 1;
            k = k + 1;
            if (!(n < rem)) break;
          }
        }
        one = (uchar)(n - 1);
        FUN_00539660(&one, 1, 1, fp);
        FUN_00539660(p, n, 1, fp);
        total = total + 1 + n;
      } else {
        one = (uchar)(1 - n);
        FUN_00539660(&one, 1, 1, fp);
        FUN_00539660(&c0, 1, 1, fp);
        total = total + 2;
      }
      rem = rem - n;
      p = p + n;
    }
  }
  if ((total & 1) != 0) {
    one = 0;
    FUN_00539660(&one, 1, 1, fp);
    total = total + 1;
  }
  b4[0] = (uchar)((total + 0x330) >> 24); b4[1] = (uchar)((total + 0x330) >> 16);
  b4[2] = (uchar)((total + 0x330) >> 8); b4[3] = (uchar)(total + 0x330);
  FUN_0053a140(fp, 4, 0);
  FUN_00539660(b4, 4, 1, fp);
  b4[0] = (uchar)(total >> 24); b4[1] = (uchar)(total >> 16); b4[2] = (uchar)(total >> 8); b4[3] = (uchar)total;
  FUN_0053a140(fp, mark, 0);
  FUN_00539660(b4, 4, 1, fp);
  FUN_005394d0(fp);
  return 1;
}
