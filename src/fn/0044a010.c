/* HAND-WRITTEN: param_1 < 4 -> param_1 + 1, else FUN_004b9550(this, param_1) with ecx passed through. */
#include "lom.h"
#define FUN_004b9550 ((uint (__thiscall *)(void *, uint))0x004b9550)
#define LOM_SELF_0044a010 1
uint __thiscall rb_0044a010(void *this, uint param_1)
{
  if (param_1 < 4) return param_1 + 1;
  return FUN_004b9550(this, param_1);
}
