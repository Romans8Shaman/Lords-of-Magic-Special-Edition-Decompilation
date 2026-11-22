/* Rebuilt from lomse.exe FUN_004b1d40 @ 0x004b1d40 (91 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b1db0 ((undefined * (__thiscall *)(void *, undefined1))0x004b1db0)

#define LOM_SELF_004b1d40 1
undefined4 __fastcall rb_004b1d40(void *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  pcVar2 = FUN_004b1db0(param_1,2);
  cVar1 = *pcVar2;
  puVar3 = FUN_004b1db0(param_1,2);
  switch((int)(char)puVar3[4] * (int)cVar1) {
  case 0:
    return 30000;
  case 1:
    return 60000;
  case 2:
    return 180000;
  case 3:
    uVar4 = 300000;
  }
  return uVar4;
}
