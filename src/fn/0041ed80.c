/* Rebuilt from lomse.exe FUN_0041ed80 @ 0x0041ed80 (126 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_00586778 (*(undefined4 *)0x00586778)
#define DAT_005867a4 (*(int *)0x005867a4)
#define FUN_0041ecf0 ((undefined4 (__thiscall *)(void *, int))0x0041ecf0)
#define FUN_00478920 ((undefined4 (__fastcall *)(int *))0x00478920)
#define FUN_00478c00 ((undefined4 (__thiscall *)(void *, undefined4))0x00478c00)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define _DAT_005867a0 (*(undefined4 *)0x005867a0)
#define _DAT_005867a8 (*(undefined4 *)0x005867a8)
#define _DAT_005867b0 (*(undefined4 *)0x005867b0)
#define _DAT_005867b4 (*(undefined4 *)0x005867b4)

#define LOM_SELF_0041ed80 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall rb_0041ed80(void *this,int in_stack_4)

{
  void *this_00;
  int in_stack_4_00;
  
  this_00 = (void *)FUN_00521e00((int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4));
  _DAT_005867a0 = 0xfffffc18;
  in_stack_4_00 = FUN_00478920(&DAT_00585408);
  if (this_00 != (void *)0x0) {
    in_stack_4_00 = FUN_0041ecf0(this_00,in_stack_4);
    if (-1 < in_stack_4_00) {
      _DAT_005867b0 = 0;
      _DAT_005867a8 = DAT_00586778;
      _DAT_005867a0 = 0xfffffc18;
      _DAT_005867b4 = 0;
      DAT_005867a4 = in_stack_4_00;
      in_stack_4_00 = FUN_00478c00(&DAT_00585408,in_stack_4_00);
    }
  }
  return in_stack_4_00;
}
