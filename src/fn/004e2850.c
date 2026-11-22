/* Rebuilt from lomse.exe op_armycantransferartifacts_q @ 0x004e2850 (156 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00427720 ((undefined4 (__thiscall *)(void *, int))0x00427720)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004e2850 1
void __cdecl rb_004e2850(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 != 0) {
    iVar2 = 0;
    if (0 < *(int *)((int)vm + 0x4c)) {
      do {
        iVar3 = FUN_00427720(vm,iVar2);
        if (iVar3 == 0) {
          if (*(int *)((int)pvVar1 + 0x54) != 0) {
            iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
            *(int *)((int)pvVar1 + 0x54) = iVar3;
            iVar2 = *(int *)((int)pvVar1 + 0x50);
            *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
            return;
          }
          goto LAB_004e28ab;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)vm + 0x4c));
    }
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
      return;
    }
LAB_004e28ab:
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}
