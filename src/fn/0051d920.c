/* Rebuilt from lomse.exe op_getregiontoinvade @ 0x0051d920 (133 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0051d560 ((undefined4 (__fastcall *)(int))0x0051d560)
#define FUN_0051d8e0 ((undefined * (__stdcall *)(void))0x0051d8e0)
#define s_no_AI_00573e7c (*(char (*)[])0x00573e7c)

#define LOM_SELF_0051d920 1
void __cdecl rb_0051d920(void *vm)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = FUN_0051d8e0();
  if (puVar2 == (undefined *)0x0) {
    FUN_004d41c0(vm,s_no_AI_00573e7c);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar3 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar3;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
  }
  else {
    uVar4 = FUN_0051d560((int)puVar2);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar3 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar3;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uVar4;
      return;
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}
