/* Rebuilt from lomse.exe FUN_0045c9b0 @ 0x0045c9b0 (39 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_0040b620 ((undefined4 (__thiscall *)(void *, void *, uint, uint))0x0040b620)
#define FUN_0045c9e0 ((undefined4 (__fastcall *)(void *))0x0045c9e0)

#define LOM_SELF_0045c9b0 1
void __fastcall rb_0045c9b0(void *param_1)

{
  FUN_0040b620((void *)((int)param_1 + 0x4d4c),DAT_005a7b78,*(uint *)((int)param_1 + 0x5008),1);
  FUN_0045c9e0(param_1);
  return;
}
