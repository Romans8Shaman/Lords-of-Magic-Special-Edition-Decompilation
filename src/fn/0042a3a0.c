/* Rebuilt from lomse.exe op_validcurrentartifact_q @ 0x0042a3a0 (173 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555d6c (*(int *)0x00555d6c)
#define DAT_00555d70 (*(int *)0x00555d70)
#define DAT_00555d74 (*(int *)0x00555d74)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00428840 ((int (__thiscall *)(void *, int))0x00428840)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0042a3a0 1
void __cdecl rb_0042a3a0(void *vm)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = FUN_00485080(&DAT_005aa12c,DAT_00555d74,0x2f);
  if (((puVar1 != (undefined4 *)0x0) && (-1 < DAT_00555d70)) && (DAT_00555d70 < (int)puVar1[0x13]))
  {
    iVar2 = FUN_00428840(puVar1 + DAT_00555d70 * 0x13 + 0x31,DAT_00555d6c);
    if (iVar2 != 0) {
      if (*(int *)((int)vm + 0x54) != 0) {
        iVar3 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar3;
        iVar2 = *(int *)((int)vm + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
      goto LAB_0042a42d;
    }
  }
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar3 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar3;
    iVar2 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
    return;
  }
LAB_0042a42d:
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}
