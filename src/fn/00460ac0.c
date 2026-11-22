/* Rebuilt from lomse.exe op_getwinningarmy @ 0x00460ac0 (168 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa78c (*(undefined4 *)0x005aa78c)
#define DAT_005aa7b4 (*(undefined4 *)0x005aa7b4)
#define DAT_005aad68 (*(undefined4 *)0x005aad68)
#define DAT_005aad90 (*(undefined4 *)0x005aad90)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0050b9a0 ((undefined4 (__fastcall *)(int))0x0050b9a0)

#define LOM_SELF_00460ac0 1
void __cdecl rb_00460ac0(void *vm)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0050b9a0(0x5aa12c);
  iVar2 = ((undefined4 (__thiscall *)(__typeof__(&DAT_005aa78c)))(**(code **)(DAT_005aa78c + 0x3c)))(&DAT_005aa78c);
  if (iVar1 == iVar2) {
    uVar3 = DAT_005aa7b4;
  }
  else {
    iVar2 = ((undefined4 (__thiscall *)(__typeof__(&DAT_005aad68)))(**(code **)(DAT_005aad68 + 0x3c)))(&DAT_005aad68);
    if (iVar1 != iVar2) {
      if (*(int *)((int)vm + 0x54) != 0) {
        iVar2 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar2;
        iVar1 = *(int *)((int)vm + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
        return;
      }
      goto LAB_00460b48;
    }
    uVar3 = DAT_005aad90;
  }
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar2 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar2;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar3;
    return;
  }
LAB_00460b48:
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}
