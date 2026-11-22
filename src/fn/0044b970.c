/* Rebuilt from lomse.exe FUN_0044b970 @ 0x0044b970 (49 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0044b490 ((undefined4 (__fastcall *)(undefined4 *))0x0044b490)
#define PTR_FUN_0054d600 (*(undefined * *)0x0054d600)

#define LOM_SELF_0044b970 1
undefined4 * __fastcall rb_0044b970(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_0044b490(param_1);
  *param_1 = &PTR_FUN_0054d600;
  param_1[0x11] = 0;
  puVar1 = param_1 + 0xb;
  iVar2 = 6;
  do {
    puVar1[-6] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[1] = 3;
  return param_1;
}
