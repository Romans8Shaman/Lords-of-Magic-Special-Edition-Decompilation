/* Rebuilt from lomse.exe op_getmultiscenarioname @ 0x004b3090 (77 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa67e (*(undefined *)0x005aa67e)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004b3090 1
void __cdecl rb_004b3090(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)param_1 + 0x54) + -1;
  *(int *)((int)param_1 + 0x54) = iVar2;
  iVar1 = *(int *)((int)param_1 + 0x50);
  *(undefined4 *)(iVar1 + iVar2 * 8) = 8;
  *(undefined **)(iVar1 + 4 + iVar2 * 8) = &DAT_005aa67e;
  return;
}
