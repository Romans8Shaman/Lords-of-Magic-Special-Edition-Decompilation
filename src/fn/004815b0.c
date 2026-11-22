/* Rebuilt from lomse.exe FUN_004815b0 @ 0x004815b0 (84 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_004a90b0 ((undefined4 (__thiscall *)(void *, int))0x004a90b0)

#define LOM_SELF_004815b0 1
void __thiscall rb_004815b0(void *this,int param_1,undefined4 param_2)

{
  if ((-1 < param_1) && (param_1 < 9)) {
    *(undefined4 *)((int)this + (param_1 + 0x2eaa) * 0xc) = param_2;
    if (*(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this) == param_1) {
      *(undefined4 *)((int)this + 0x29e74) = param_2;
      FUN_004a90b0((void *)((int)this + 0x29e70),*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    }
  }
  return;
}
