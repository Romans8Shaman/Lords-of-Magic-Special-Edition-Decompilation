/* Rebuilt from lomse.exe FUN_004c0110 @ 0x004c0110 (37 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004c0300 ((undefined4 (__thiscall *)(void *, int))0x004c0300)

#define LOM_SELF_004c0110 1
uint __thiscall rb_004c0110(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004c0300(&DAT_005aa12c,param_1);
  return (uint)(*(int *)((int)this + 0x15a8) == iVar1);
}
