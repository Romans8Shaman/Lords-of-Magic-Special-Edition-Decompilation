/* Rebuilt from lomse.exe FUN_00421840 @ 0x00421840 (49 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004209c0 ((undefined4 (__fastcall *)(int))0x004209c0)
#define FUN_004209e0 ((int (__thiscall *)(void *, int))0x004209e0)

#define LOM_SELF_00421840 1
undefined4 __fastcall rb_00421840(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004209e0(param_1,*(int *)((int)param_1 + 0x1c));
  iVar2 = FUN_004209c0((int)param_1);
  iVar2 = iVar2 * (iVar1 + 1);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  return (int)(100 / (longlong)iVar2);
}
