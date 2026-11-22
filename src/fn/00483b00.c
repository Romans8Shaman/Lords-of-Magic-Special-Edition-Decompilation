/* Rebuilt from lomse.exe op_locationview @ 0x00483b00 (64 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00453ad0 ((undefined4 (__thiscall *)(void *, undefined4))0x00453ad0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_0052d140 ((undefined4 (__fastcall *)(int))0x0052d140)
#define s_locationview___no_selection_0055b43c (*(char (*)[])0x0055b43c)

#define LOM_SELF_00483b00 1
void __cdecl rb_00483b00(void *vm)

{
  int iVar1;
  uint in_stack_4;
  
  iVar1 = FUN_0052d140((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  in_stack_4 = FUN_00482ac0(&DAT_005aa12c,iVar1,0);
  if (in_stack_4 == 0) {
    FUN_004d41c0(vm,s_locationview___no_selection_0055b43c);
    return;
  }
  FUN_00453ad0(&DAT_005aa12c,in_stack_4);
  return;
}
