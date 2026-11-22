/* Rebuilt from lomse.exe FUN_004ea320 @ 0x004ea320 (24 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)

#define LOM_SELF_004ea320 1
undefined4 __fastcall rb_004ea320(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00492760(&DAT_005a7b50,*param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x10);
}
