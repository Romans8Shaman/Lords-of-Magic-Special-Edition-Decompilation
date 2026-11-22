/* Rebuilt from lomse.exe FUN_0046fb00 @ 0x0046fb00 (43 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b66c0 ((undefined4 * (__fastcall *)(undefined4 *))0x004b66c0)
#define PTR_FUN_0054d8b0 (*(undefined * *)0x0054d8b0)

#define LOM_SELF_0046fb00 1
undefined4 * __fastcall rb_0046fb00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_004b66c0(param_1);
  *param_1 = &PTR_FUN_0054d8b0;
  puVar1 = param_1 + 0xfb;
  iVar2 = 8;
  do {
    puVar1[-8] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}
