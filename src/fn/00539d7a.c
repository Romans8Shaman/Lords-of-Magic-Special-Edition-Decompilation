/* Hand C for FUN_00539d7a __abnormal_termination (35 bytes, cdecl, no args). HELD (g229).
 * Reads the current SEH frame (fs:0): returns 1 iff frame->handler == 0x539cf0
 * and frame[2] == (*(frame[3]))[3] (i.e. [ecx+8] == [[ecx+0xc]+0xc]), else 0.
 * Pure; clobbers eax/ecx/edx only (all caller-saved). */
#include "lom.h"
#include <intrin.h>
#define LOM_SELF_00539d7a 1
int rb_00539d7a(void)
{
  unsigned *f = (unsigned *)__readfsdword(0);
  if (f[1] != 0x539cf0) return 0;
  unsigned *g = (unsigned *)f[3];
  return f[2] == g[3];
}
