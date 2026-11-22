/* Rebuilt from lomse.exe FUN_004a28f0 @ 0x004a28f0 (484 bytes, __cdecl). HAND (2026-11-13, was asmfn):
 * IFF ILBM "BODY" unpacker. Find "BODY" in src[0..len-3) (data starts 5 bytes after the tag; if absent, at
 * len-3), read a 24-bit big-endian size. If the BMHD compression byte src[0x1e] is 0: copy size bytes when they
 * fit in dstcap. Otherwise ByteRun1/PackBits: 0x80 = nop; c>0x80 = repeat next byte 257-c times; c<0x80 = copy c+1
 * literal bytes (a trailing 0 at end of input is skipped). The loop counter n advances by 1 per nop,
 * 2 per run and c+2 per literal (original quirk) until n >= size. Returns 1 ok, 0 on bad input/overflow. */
#include "lom.h"

#define LOM_SELF_004a28f0 1
undefined4 __cdecl rb_004a28f0(byte *src, uint len, byte *dst, uint dstcap)
{
  uint pos;
  uint i;
  uint size;
  uint n;
  uint d;
  uint end;
  uint cnt;
  byte c;
  byte v;

  d = 0;
  if (len < 4) return 0;
  if (src == 0) return 0;
  pos = 0;
  if (len - 3 != 0) {
    for (i = 0; i < len - 3; i = i + 1) {
      if (src[i] == 'B' && src[i + 1] == 'O' && src[i + 2] == 'D' && src[i + 3] == 'Y') break;
    }
    pos = (i < len - 3) ? i + 5 : len - 3;
  }
  size = ((uint)src[pos] << 16) | ((uint)src[pos + 1] << 8) | (uint)src[pos + 2];
  pos = pos + 3;
  if (src[0x1e] == 0) {
    if (size > dstcap) return 0;
    for (i = 0; i < size; i = i + 1) {
      ((volatile byte *)dst)[i] = src[pos + i];
    }
    return 1;
  }
  n = 0;
  if (size == 0) return 1;
  do {
    if (pos >= len) return 0;
    c = src[pos];
    pos = pos + 1;
    if (c != 0x80) {
      if (c > 0x80) {
        if (pos >= len) return 0;
        v = src[pos];
        end = d + 0x101 - (uint)c;
        pos = pos + 1;
        if (dstcap < end) return 0;
        for (; d < end; d = d + 1) {
          ((volatile byte *)dst)[d] = v;
        }
        d = end;
        n = n + 1;
      }
      else if (pos != len || c != 0) {
        cnt = (uint)c + 1;
        end = d + cnt;
        if (dstcap < end) return 0;
        if (len < pos + cnt) return 0;
        for (i = 0; i < cnt; i = i + 1) {
          ((volatile byte *)dst)[d + i] = src[pos + i];
        }
        d = end;
        pos = pos + cnt;
        n = n + (uint)c + 1;
      }
    }
    n = n + 1;
  } while (n < size);
  return 1;
}
