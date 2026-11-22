/* Rebuilt from lomse.exe FUN_00530200 @ 0x00530200 (72 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_0052c8a0 ((int (__fastcall *)(int))0x0052c8a0)
#define FUN_0052d240 ((undefined4 * (__fastcall *)(int))0x0052d240)

#define LOM_SELF_00530200 1
undefined4 __thiscall rb_00530200(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_0052d240(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar2 = FUN_0052c8a0((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  *param_2 = iVar2;
  return (uint)(-1 < iVar2);
}
