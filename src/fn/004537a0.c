/* Rebuilt from lomse.exe op_enumcitymods @ 0x004537a0 (117 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): piStack_4 */
#define FUN_00451a70 ((undefined4 (__cdecl *)(void *, uint *))0x00451a70)
#define FUN_00453010 ((undefined4 (__cdecl *)(int, void *, uint, int *))0x00453010)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004537a0 1
void __cdecl rb_004537a0(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar3 = 0;
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  if ((char)uVar3 != '\0') {
    iVar2 = FUN_00451a70(pvVar1,(uint *)&vm);
    if (iVar2 != 0) {
      FUN_00453010((int)vm,pvVar1,uVar3,piStack_4);
    }
  }
  return;
}
