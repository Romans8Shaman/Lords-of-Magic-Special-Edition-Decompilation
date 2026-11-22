/* Rebuilt from lomse.exe FUN_004b1cc0 @ 0x004b1cc0 (63 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b1db0 ((undefined * (__thiscall *)(void *, undefined1))0x004b1db0)
#define FUN_004b2310 ((undefined4 (__fastcall *)(int))0x004b2310)

#define LOM_SELF_004b1cc0 1
undefined4 __thiscall rb_004b1cc0(void *this,undefined1 param_1,char param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  pcVar2 = FUN_004b1db0(this,param_1);
  cVar1 = pcVar2[1];
  pcVar2[1] = param_2;
  cVar4 = *pcVar2;
  if (*pcVar2 <= param_2) {
    cVar4 = param_2;
  }
  *pcVar2 = cVar4;
  uVar3 = CONCAT31((uint)((uint)pcVar2 >> 8),cVar1);
  if ((param_2 != cVar1) && (uVar3 = 0, param_3 != 0)) {
    uVar3 = FUN_004b2310(0x5aa12c);
  }
  return uVar3;
}
