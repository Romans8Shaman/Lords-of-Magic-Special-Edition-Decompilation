/* Rebuilt from lomse.exe op_findinstring @ 0x004d7140 (380 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): puStack_4 */
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0053a560 ((uint * (__cdecl *)(uint *, char *))0x0053a560)

#define LOM_SELF_004d7140 1
void __cdecl rb_004d7140(void *vm)

{
  void *this;
  int iVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  uint *puStack_4;

  /* else path of a VM pop leaves this register-held local uninitialized
   * (vanilla leftover). clang -O2 can substitute a callee return or drop
   * later uses. Zero it so the leftover path is defined. */
  puStack_4 = (uint *)0;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar4 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    puVar2 = *(uint **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    cVar4 = '\0';
    puVar2 = puStack_4;
  }
  iVar1 = FUN_0041da00((int)vm);
  if (iVar1 == 0) {
    if (cVar4 == '\b') {
      vm = puVar2;
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      vm = (void *)0x0;
    }
  }
  else {
    vm = (void *)0x0;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    cVar4 = (char)*(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    puStack_4 = *(uint **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    cVar4 = '\0';
  }
  iVar1 = FUN_0041da00((int)this);
  if (iVar1 == 0) {
    if (cVar4 == '\b') goto LAB_004d720f;
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  puStack_4 = (uint *)0x0;
LAB_004d720f:
  if ((puStack_4 == (uint *)0x0) || (vm == (void *)0x0)) {
    if (*(int *)((int)this + 0x54) != 0) {
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
  }
  else {
    puVar2 = FUN_0053a560(puStack_4,vm);
    if (puVar2 == (uint *)0x0) {
      if (*(int *)((int)this + 0x54) != 0) {
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
    }
    else if (*(int *)((int)this + 0x54) != 0) {
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar3 * 8) = (int)puVar2 - (int)puStack_4;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 3;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}
