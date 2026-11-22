/* Rebuilt from lomse.exe FUN_004b1d00 @ 0x004b1d00 (63 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b1db0 ((undefined * (__thiscall *)(void *, undefined1))0x004b1db0)
#define FUN_004b2310 ((undefined4 (__fastcall *)(int))0x004b2310)

#define LOM_SELF_004b1d00 1
void __thiscall rb_004b1d00(void *this,undefined1 param_1,char param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  
  pcVar2 = FUN_004b1db0(this,param_1);
  cVar1 = pcVar2[2];
  pcVar2[2] = param_2;
  cVar3 = *pcVar2;
  if (param_2 <= *pcVar2) {
    cVar3 = param_2;
  }
  *pcVar2 = cVar3;
  if ((param_2 != cVar1) && (param_3 != 0)) {
    FUN_004b2310(0x5aa12c);
  }
  return;
}
