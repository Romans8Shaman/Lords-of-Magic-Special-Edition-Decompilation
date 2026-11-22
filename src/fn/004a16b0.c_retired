/* Rebuilt from lomse.exe op_removedeadunits @ 0x004a16b0 (105 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_0041e1b0 ((undefined4 (__stdcall *)(undefined4, undefined4))0x0041e1b0)
#define FUN_00521f30 ((int (__fastcall *)(int *))0x00521f30)

#define LOM_SELF_004a16b0 1
void __cdecl rb_004a16b0(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    uVar3 = 0;
    iVar1 = 0;
    if (0 < *(int *)((int)vm + 0x4c)) {
      iVar4 = 0;
      do {
        iVar2 = FUN_00521f30((int *)((int)vm + iVar4 + 0xc4));
        if (iVar2 < 1) {
          uVar3 = uVar3 | 1 << ((byte)iVar1 & 0x1f);
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 0x4c;
      } while (iVar1 < *(int *)((int)vm + 0x4c));
    }
    if (uVar3 != 0) {
      FUN_0041e1b0(*(undefined4 *)((int)vm + 0x28),uVar3);
    }
  }
  return;
}
