/* Rebuilt from lomse.exe op_formationview @ 0x00483b40 (31 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00483ba0 ((undefined4 (__thiscall *)(void *, int))0x00483ba0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define s_SetZoomMode_failed_0055b458 (*(char (*)[])0x0055b458)

#define LOM_SELF_00483b40 1
void __cdecl rb_00483b40(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_00483ba0(&DAT_005aa12c,2);
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_SetZoomMode_failed_0055b458);
  }
  return;
}
