/* Rebuilt from lomse.exe FUN_0051ba70 @ 0x0051ba70 (49 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00417890 ((undefined4 (__fastcall *)(int))0x00417890)
#define FUN_0051b9b0 ((undefined4 (__fastcall *)(int))0x0051b9b0)

#define LOM_SELF_0051ba70 1
undefined4 __fastcall rb_0051ba70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0051b9b0(0x584ae8);
  if (iVar1 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x4dc8) == 0) {
    iVar1 = FUN_00417890(param_1);
    return (uint)(iVar1 == 0);
  }
  return 0;
}
