/* Rebuilt from lomse.exe FUN_0049b630 @ 0x0049b630 (73 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583718 (*(int *)0x00583718)
#define FUN_0049ab00 ((undefined4 (__fastcall *)(undefined4 *))0x0049ab00)
#define FUN_0049b450 ((undefined4 (__thiscall *)(void *, byte *, int *))0x0049b450)

#define LOM_SELF_0049b630 1
undefined4 * __thiscall rb_0049b630(void *this,byte *param_1,int *param_2)

{
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 1;
  DAT_00583718 = DAT_00583718 + 0x124;
  FUN_0049ab00(this);
  FUN_0049b450(this,param_1,param_2);
  return this;
}
