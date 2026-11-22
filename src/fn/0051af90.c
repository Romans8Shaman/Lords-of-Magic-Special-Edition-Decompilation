/* Rebuilt from lomse.exe op_calclighttables @ 0x0051af90 (115 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): piStack_4 */
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005116b0 ((undefined4 (__thiscall *)(void *, void *, uint, int *))0x005116b0)
#define s_calclighttables___bad_args_00573bc4 (*(char (*)[])0x00573bc4)

#define LOM_SELF_0051af90 1
void __cdecl rb_0051af90(void *vm)

{
  int iVar1;
  uint uVar2;
  int *piStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar2 = 0;
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  if (((char)uVar2 == '\x06') && ((uVar2 & 0x100) == 0)) {
    FUN_005116b0(&DAT_005876d0,vm,uVar2,piStack_4);
    return;
  }
  FUN_004d41c0(vm,s_calclighttables___bad_args_00573bc4);
  return;
}
