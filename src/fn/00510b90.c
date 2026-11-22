/* Rebuilt from lomse.exe op_getterrainspriteflagoverride @ 0x00510b90 (169 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0050cd20 ((undefined4 (__cdecl *)(void *, uint *))0x0050cd20)

#define LOM_SELF_00510b90 1
void __cdecl rb_00510b90(void *vm)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  pvVar3 = vm;
  iVar4 = FUN_0050cd20(vm,(uint *)&vm);
  if (iVar4 != 0) {
    cVar1 = *(char *)((int)vm + 0x4c);
    if (*(int *)((int)pvVar3 + 0x54) == 0) {
      *(undefined4 *)((int)pvVar3 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      iVar5 = *(int *)((int)pvVar3 + 0x54) + -1;
      *(int *)((int)pvVar3 + 0x54) = iVar5;
      *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
      *(int *)(iVar4 + 4 + iVar5 * 8) = (int)cVar1;
    }
    bVar2 = *(byte *)((int)vm + 0x4d);
    if (*(int *)((int)pvVar3 + 0x54) != 0) {
      iVar5 = *(int *)((int)pvVar3 + 0x54) + -1;
      *(int *)((int)pvVar3 + 0x54) = iVar5;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
      *(uint *)(iVar4 + 4 + iVar5 * 8) = (uint)bVar2;
      return;
    }
    *(undefined4 *)((int)pvVar3 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  return;
}
