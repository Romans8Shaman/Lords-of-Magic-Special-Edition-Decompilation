/* Rebuilt from lomse.exe op_roll @ 0x004cb390 (335 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004cb390 1
void __cdecl rb_004cb390(void *vm)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  pvVar4 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar5 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar5;
    cVar9 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar5 * 8);
    iStack_4 = *(int *)(*(int *)((int)vm + 0x50) + -4 + iVar5 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar9 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar5 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar5;
    cVar7 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar5 * 8);
    iVar5 = *(int *)(*(int *)((int)vm + 0x50) + -4 + iVar5 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    cVar7 = '\0';
    iVar5 = iStack_4;
  }
  if ((cVar9 == '\x01') && (cVar7 == '\x01')) {
    if (iVar5 <= *(int *)((int)vm + 0x58) - *(int *)((int)vm + 0x54)) {
      vm = (void *)(iStack_4 % iVar5);
      bVar10 = false;
      if ((int)vm < 0) {
        vm = (void *)((int)vm + iVar5);
        bVar10 = (int)vm < 0;
      }
      if (!(vm == (void *)0x0 || bVar10)) {
        do {
          uVar2 = *(undefined4 *)(*(int *)((int)pvVar4 + 0x50) + *(int *)((int)pvVar4 + 0x54) * 8);
          uVar3 = *(undefined4 *)
                   (*(int *)((int)pvVar4 + 0x50) + 4 + *(int *)((int)pvVar4 + 0x54) * 8);
          iVar6 = 1;
          if (1 < iVar5) {
            do {
              iVar8 = iVar6 + *(int *)((int)pvVar4 + 0x54);
              iVar6 = iVar6 + 1;
              puVar1 = (undefined4 *)(*(int *)((int)pvVar4 + 0x50) + iVar8 * 8);
              puVar1[-2] = *puVar1;
              puVar1[-1] = puVar1[1];
            } while (iVar6 < iVar5);
          }
          iVar6 = iVar6 + *(int *)((int)pvVar4 + 0x54);
          iVar8 = *(int *)((int)pvVar4 + 0x50);
          *(undefined4 *)(iVar8 + -8 + iVar6 * 8) = uVar2;
          *(undefined4 *)(iVar8 + -4 + iVar6 * 8) = uVar3;
          vm = (void *)((int)vm + -1);
        } while (vm != (void *)0x0);
        return;
      }
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 6;
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
  }
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef iStack_4
}
