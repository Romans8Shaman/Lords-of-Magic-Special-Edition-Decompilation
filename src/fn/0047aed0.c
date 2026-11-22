/* HAND-WRITTEN: if (this->+0x13b4 && 0 <= param_1 <= 9) { if (this->+0x784) { buffer->vt[0x24](buf, &status) (GetStatus; MSVC wrote it into
 * param_1's own slot, so an unwritten status = param_1); if (status & 5) return; } idx = rand() * this[param_1*0xd0 + 0x858] / 32768 (signed);
 * FUN_0047a8b0(this, param_1, this->+0x790[param_1*52 + idx]); } */
#include "lom.h"
#define FUN_0053a110 ((int (__cdecl *)(void))0x0053a110)
#define FUN_0047a8b0 ((void (__thiscall *)(void *, int, int))0x0047a8b0)
#define LOM_SELF_0047aed0 1
void __thiscall rb_0047aed0(void *this, int param_1)
{
  int b = (int)this, *p, r;
  uint st;
  if (*(int *)(b + 0x13b4) == 0 || param_1 < 0 || param_1 > 9) return;
  p = *(int **)(b + 0x784);
  if (p != 0) {
    st = (uint)param_1;
    (*(int (__stdcall **)(int *, uint *))(*p + 0x24))(p, &st);
    if (st & 5) return;
  }
  r = FUN_0053a110() * *(int *)(param_1 * 0xd0 + b + 0x858);
  r = r / 32768;
  FUN_0047a8b0(this, param_1, *(int *)(b + (r + param_1 * 52) * 4 + 0x790));
}
