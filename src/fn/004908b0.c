/* Rebuilt from lomse.exe op_setdialogdict @ 0x004908b0 (115 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): uStack_4 */
#define FUN_004906d0 ((undefined4 (__cdecl *)(void *, int *))0x004906d0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004908b0 1
void __cdecl rb_004908b0(void *vm)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar3 = 0;
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  if ((char)uVar3 != '\0') {
    iVar2 = FUN_004906d0(pvVar1,(int *)&vm);
    if (iVar2 != 0) {
      *(undefined4 *)((int)vm + 0x34) = uVar3;
      *(undefined4 *)((int)vm + 0x38) = uStack_4;
    }
  }
  return;
}
