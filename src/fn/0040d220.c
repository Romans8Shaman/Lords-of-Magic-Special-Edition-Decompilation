/* Rebuilt from lomse.exe op_findeventalarm @ 0x0040d220 (190 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): iStack_4 */
#define DAT_005aeea0 (*(undefined *)0x005aeea0)
#define FUN_0040ca40 ((undefined4 (__thiscall *)(void *, undefined4, int))0x0040ca40)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_invalid_operand_type_00555764 (*(char (*)[])0x00555764)

#define LOM_SELF_0040d220 1
void __cdecl rb_0040d220(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    iStack_4 = *(int *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  if ((uVar3 & 0xff) != 0) {
    if (((uVar3 & 0xff) != 5) || ((uVar3 & 0x100) != 0)) {
      FUN_004d41c0(vm,s_invalid_operand_type_00555764);
      return;
    }
    uVar2 = FUN_0040ca40(&DAT_005aeea0,uVar3,iStack_4);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar4 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar4;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar2;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  return;
}
