/* HAND-WRITTEN: if (!FUN_004f5bb0(this, r)) return 0; if (FUN_004b0700(this + 0x88, b, this->+0x14, this->+0x18))
 * { r[0] = min(r[0], b[0]); r[1] = min(r[1], b[1]); r[2] = max(r[2], b[2]); r[3] = max(r[3], b[3]); } return 1. */
#include "lom.h"
#define FUN_004f5bb0 ((int (__thiscall *)(void *, int *))0x004f5bb0)
#define FUN_004b0700 ((int (__thiscall *)(void *, int *, int, int))0x004b0700)
#define LOM_SELF_0047e2b0 1
int __thiscall rb_0047e2b0(void *this, int *param_1)
{
  int b[4], r;
  r = FUN_004f5bb0(this, param_1);
  if (r == 0) return r;
  if (FUN_004b0700((void *)((int)this + 0x88), b, *(int *)((int)this + 0x14), *(int *)((int)this + 0x18)) != 0) {
    if (!(param_1[0] < b[0])) param_1[0] = b[0];
    if (!(param_1[1] < b[1])) param_1[1] = b[1];
    if (param_1[2] < b[2]) param_1[2] = b[2];
    if (param_1[3] < b[3]) param_1[3] = b[3];
  }
  return 1;
}
