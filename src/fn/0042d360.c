/* Rebuilt from lomse.exe op_enumartifacttypes @ 0x0042d360 (167 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): piStack_4 */
#define DAT_005cd340 (*(undefined *)0x005cd340)
#define FUN_00427d70 ((undefined4 (__thiscall *)(void *, void *, uint, int *))0x00427d70)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0042d360 1
void __cdecl rb_0042d360(void *vm)

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
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (((char)uVar2 == '\x06') && ((uVar2 & 0x100) == 0)) goto LAB_0042d3ea;
    *(undefined4 *)((int)vm + 0x90) = 0x12;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  uVar2 = 0;
LAB_0042d3ea:
  if (((char)uVar2 == '\x06') && ((uVar2 & 0x100) == 0)) {
    FUN_00427d70(&DAT_005cd340,vm,uVar2,piStack_4);
  }
  return;
}
