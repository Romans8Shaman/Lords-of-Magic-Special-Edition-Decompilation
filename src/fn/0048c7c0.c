/* Rebuilt from lomse.exe FUN_0048c7c0 @ 0x0048c7c0 (40 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_0048c250 ((undefined4 (__cdecl *)(int))0x0048c250)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_0048c7c0 1
undefined4 __stdcall rb_0048c7c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_005d1e84 == 0) {
    uVar2 = FUN_0048c250(1);
    return uVar2;
  }
  iVar1 = FUN_004b7dd0(DAT_005d1e84);
  uVar2 = FUN_0048c250(iVar1);
  return uVar2;
}
