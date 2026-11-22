/* Rebuilt from lomse.exe FUN_0042d6b0 @ 0x0042d6b0 (99 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_00586774 (*(undefined4 *)0x00586774)
#define DAT_005867a4 (*(int *)0x005867a4)
#define DAT_005cd334 (*(undefined *)0x005cd334)
#define FUN_0042e130 ((int (__thiscall *)(void *, int))0x0042e130)
#define FUN_00478c00 ((undefined4 (__thiscall *)(void *, undefined4))0x00478c00)
#define _DAT_005867a0 (*(undefined4 *)0x005867a0)
#define _DAT_005867a8 (*(undefined4 *)0x005867a8)
#define _DAT_005867b0 (*(undefined4 *)0x005867b0)
#define _DAT_005867b4 (*(undefined4 *)0x005867b4)

#define LOM_SELF_0042d6b0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_0042d6b0(void *this,int in_stack_4)

{
  int iVar1;
  
  iVar1 = FUN_0042e130(&DAT_005cd334,*(int *)((int)this + 8));
  iVar1 = *(int *)(iVar1 + 0x24);
  if (-1 < iVar1) {
    *(int *)((int)this + 0xc) = in_stack_4 + 2000;
    _DAT_005867b0 = 0;
    _DAT_005867a8 = DAT_00586774;
    _DAT_005867a0 = *(undefined4 *)((int)this + 0xc);
    _DAT_005867b4 = 1;
    DAT_005867a4 = iVar1;
    FUN_00478c00(&DAT_00585408,iVar1);
  }
  return;
}
