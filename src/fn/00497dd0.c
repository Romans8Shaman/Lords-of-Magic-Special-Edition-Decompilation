/* Rebuilt from lomse.exe FUN_00497dd0 @ 0x00497dd0 (34 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00497940 ((int (__fastcall *)(int *))0x00497940)

#define LOM_SELF_00497dd0 1
int __fastcall rb_00497dd0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[8];
  iVar2 = FUN_00497940(param_1);
  if ((iVar1 + 1 < iVar2) && ((*(byte *)(param_1 + 7) & 1) != 0)) {
    param_1[8] = iVar1 + 1;
  }
  return param_1[8];
}
