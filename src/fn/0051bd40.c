/* Rebuilt from lomse.exe FUN_0051bd40 @ 0x0051bd40 (28 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004fbf20 ((int (__thiscall *)(void *, int, int))0x004fbf20)

#define LOM_SELF_0051bd40 1
int __stdcall rb_0051bd40(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = FUN_004c6fc0();
  iVar2 = FUN_004fbf20(puVar1 + 0x1c,param_1,param_2);
  return iVar2;
}
