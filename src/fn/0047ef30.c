/* HAND-WRITTEN: text width: sum over param_1[0..param_2-1] of glyph advance (+0x10 of 28-byte entry) + spacing (this->+0xc);
 * the last glyph uses byte +0x2a - this->+4. Start = this->+4 + this->+0xc. */
#include "lom.h"
#define LOM_SELF_0047ef30 1
int __thiscall rb_0047ef30(void *this, uchar *param_1, int param_2)
{
  int b = (int)this, sp = *(int *)(b + 0xc), r = *(int *)(b + 4) + sp, i, d;
  for (i = 0; i < param_2; i++) {
    uint c = param_1[i];
    if (i == param_2 - 1) d = (int)*(uchar *)(b + c * 28 + 0x2a) - *(int *)(b + 4);
    else d = *(int *)(b + c * 28 + 0x10);
    r += d + sp;
  }
  return r;
}
