/* Rebuilt from lomse.exe FUN_0042e4c0 @ 0x0042e4c0 (105 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)

#define LOM_SELF_0042e4c0 1
undefined4 * __fastcall rb_0042e4c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;

  FUN_00411610(param_1);
  FUN_00411610(param_1 + 0x177);
  param_1[0x30c] = 0;
  param_1[0x30e] = 0;
  puVar1 = param_1 + 0x2fd;
  iVar2 = 0xf;
  do {
    puVar1[-0xf] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}
