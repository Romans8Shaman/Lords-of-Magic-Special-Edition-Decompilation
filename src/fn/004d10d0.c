/* Rebuilt from lomse.exe FUN_004d10d0 @ 0x004d10d0 (75 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0053a110 ((uint (__stdcall *)(void))0x0053a110)

#define LOM_SELF_004d10d0 1
void __fastcall rb_004d10d0(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_0053a110();
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)param_1 + 0x54) + -1;
  *(int *)((int)param_1 + 0x54) = iVar3;
  iVar1 = *(int *)((int)param_1 + 0x50);
  *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
  *(uint *)(iVar1 + 4 + iVar3 * 8) = uVar2;
  return;
}
