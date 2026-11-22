/* Rebuilt from lomse.exe FUN_0047cda0 @ 0x0047cda0 (37 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_0047cdd0 ((undefined4 (__thiscall *)(void *, int *))0x0047cdd0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)

#define LOM_SELF_0047cda0 1
undefined4 __thiscall rb_0047cda0(void *this,int *param_1)

{
  FUN_0047cdd0(this,param_1);
  FUN_004a7d50(&DAT_005ae958,this,*(int *)((int)this + 0x1c));
  return 1;
}
