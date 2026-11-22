/* Rebuilt from lomse.exe FUN_004f3660 @ 0x004f3660 (99 bytes, __thiscall). HAND (2026-11-12, was asm fallback):
 * no object at this+0x38 -> 0 (the original only clears ax there); object's +8 == 0 -> 0; otherwise
 * FUN_004f3b50(&r, this->+0x40, (float)this->sub4.vfn0()) and bit 0 of this->+0x34 := (r.b != 0); returns r.a (16-bit: all callers mask the value to 0xffff). */
#include "lom.h"

#define FUN_004f3b50 ((void (__cdecl *)(int *, int, float))0x004f3b50)

#define LOM_SELF_004f3660 1
ushort __thiscall rb_004f3660(void *this)
{
  int r[2];
  int o = *(int *)((int)this + 0x38);
  if (o == 0) return 0;
  if (*(int *)(o + 8) == 0) return 0;
  {
    void *sub = (void *)((int)this + 4);
    int a40 = *(int *)((int)this + 0x40);
    float f = (float)(*(float10 (__thiscall **)(void *))*(int *)sub)(sub);
    FUN_004f3b50(r, a40, f);
  }
  if (r[1] != 0) *(uint *)((int)this + 0x34) |= 1;
  else *(uint *)((int)this + 0x34) &= ~1u;
  return (ushort)r[0];
}
