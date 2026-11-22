/* Rebuilt from lomse.exe op_errorline @ 0x004cccd0 (78 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004cccd0 1
void __cdecl rb_004cccd0(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xa4c);
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)param_1 + 0x54) + -1;
  *(int *)((int)param_1 + 0x54) = iVar3;
  iVar2 = *(int *)((int)param_1 + 0x50);
  *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
  *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
  return;
}
