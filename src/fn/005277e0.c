/* Rebuilt from lomse.exe FUN_005277e0 @ 0x005277e0 (51 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd18c (*(undefined *)0x005cd18c)
#define FUN_005274b0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x005274b0)
#define FUN_0052b540 ((int * (__thiscall *)(void *, int))0x0052b540)

#define LOM_SELF_005277e0 1
void __fastcall rb_005277e0(void *param_1)

{
  int *piVar1;
  
  *(undefined4 *)((int)param_1 + 0x48) = 0xffffffff;
  *(uint *)((int)param_1 + 0x24) = *(uint *)((int)param_1 + 0x24) | 8;
  piVar1 = FUN_0052b540(&DAT_005cd18c,*(int *)((int)param_1 + 0x20));
  if (piVar1 == (int *)0x0) {
    return;
  }
  FUN_005274b0(param_1,(undefined4 *)piVar1[1]);
  return;
}
