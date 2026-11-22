/* Rebuilt from lomse.exe FUN_00544310 @ 0x00544310 (664 bytes, __cdecl). HAND (2026-11-12, was uncovered):
 * MSVC CRT memcpy/memmove (same body): dst <= src or dst >= src+n -> forward copy, otherwise backward copy
 * (overlap-safe). Returns dst. The original's rep movsd + jump-table tails give the same bytes as this
 * dword/byte copy. Volatile stores keep clang from turning the loops back into a memcpy call. */
#include "lom.h"

#define LOM_SELF_00544310 1
undefined4 * __cdecl rb_00544310(undefined4 *param_1, undefined4 *param_2, uint param_3)
{
  unsigned char *d = (unsigned char *)param_1;
  const unsigned char *s = (const unsigned char *)param_2;
  uint n = param_3;
  if (d <= s || d >= s + n) {
    for (; n >= 4; n -= 4, d += 4, s += 4) *(volatile uint *)d = *(const uint *)s;
    for (; n != 0; n--) *(volatile unsigned char *)d++ = *s++;
  } else {
    d += n; s += n;
    for (; n >= 4; n -= 4) { d -= 4; s -= 4; *(volatile uint *)d = *(const uint *)s; }
    for (; n != 0; n--) *(volatile unsigned char *)--d = *--s;
  }
  return param_1;
}
