/* Rebuilt from lomse.exe FUN_0042d410 @ 0x0042d410 (32 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)

#define LOM_SELF_0042d410 1
undefined4 __fastcall rb_0042d410(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_004efe80(&DAT_005aee6c,*(int *)(param_1 + 8));
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 4) == 0)) {
    return 0;
  }
  return 1;
}
