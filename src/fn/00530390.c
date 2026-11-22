/* Rebuilt from lomse.exe FUN_00530390 @ 0x00530390 (18 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0052b640 ((undefined4 (__thiscall *)(void *, int))0x0052b640)
#define FUN_0052d140 ((undefined4 (__fastcall *)(int))0x0052d140)

#define LOM_SELF_00530390 1
void __fastcall rb_00530390(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0052d140((int)param_1);
  FUN_0052b640(param_1,iVar1);
  return;
}
