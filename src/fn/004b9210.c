/* Rebuilt from lomse.exe FUN_004b9210 @ 0x004b9210 (62 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1ecc (*(undefined4 *)0x005d1ecc)
#define FUN_004b6b30 ((undefined4 (__cdecl *)(int))0x004b6b30)
#define FUN_004b7b50 ((undefined4 (__stdcall *)(undefined4, undefined4))0x004b7b50)

#define LOM_SELF_004b9210 1
undefined4 __thiscall rb_004b9210(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((int)param_1[1] < 0) || (iVar1 = FUN_004b6b30(param_1[1]), (&DAT_005d1ecc)[iVar1] == 0)) {
    uVar2 = FUN_004b7b50(*param_1,param_1[1]);
    return uVar2;
  }
  return 0;
}
