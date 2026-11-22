/* Rebuilt from lomse.exe FUN_004e74a0 @ 0x004e74a0 (41 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584690 (*(undefined4 *)0x00584690)
#define FUN_004e7300 ((undefined4 (__fastcall *)(int))0x004e7300)

#define LOM_SELF_004e74a0 1
undefined4 __thiscall rb_004e74a0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  FUN_004e7300((int)this);
  iVar1 = param_2 + param_1 * 5;
  if ((iVar1 < 0) || (0x1f < iVar1)) {
    return 0xffffffff;
  }
  return (&DAT_00584690)[iVar1];
}
