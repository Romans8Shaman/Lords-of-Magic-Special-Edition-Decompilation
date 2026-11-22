/* Rebuilt from lomse.exe FUN_004cfed0 @ 0x004cfed0 (129 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): local_4 */
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004cfed0 1
void __fastcall rb_004cfed0(void *param_1)

{
  int iVar1;
  uint uVar2;
  int *local_4;

  /* else path leaves local_4 uninitialized (vanilla leftover register).
   * clang -O2 can delete the tail / pass garbage into 004d05e0. */
  local_4 = (int *)0;
  uVar2 = 0;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar2 = 0;
  }
  FUN_004d05e0(param_1,uVar2,local_4);
  iVar1 = *(int *)((int)param_1 + 0x6c);
  *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
  while (iVar1 == 0) {
    FUN_004d05e0(param_1,uVar2,local_4);
    iVar1 = *(int *)((int)param_1 + 0x6c);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
  }
  return;
}
