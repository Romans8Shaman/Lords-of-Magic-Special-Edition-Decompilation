/* Rebuilt from lomse.exe FUN_0049c960 @ 0x0049c960 (99 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058372c (*(int *)0x0058372c)
#define FUN_0049c9d0 ((undefined4 (__thiscall *)(void *, undefined4))0x0049c9d0)
#define FUN_0052b240 ((undefined4 (__fastcall *)(undefined4 *))0x0052b240)
#define PTR_FUN_0054da30 (*(void * *)0x0054da30)

#define LOM_SELF_0049c960 1
undefined4 * __thiscall rb_0049c960(void *this,undefined4 param_1)

{

  FUN_0052b240((undefined4 *)((int)this + 0x30));
  *(undefined ***)this = &PTR_FUN_0054da30;
  DAT_0058372c = DAT_0058372c + 0x40;
  *(undefined4 *)((int)this + 0x34) = 0;
  FUN_0049c9d0(this,param_1);
  return this;
}
