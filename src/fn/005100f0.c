/* Rebuilt from lomse.exe op_getterrainspritebartervalueproc @ 0x005100f0 (79 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2d48 (*(undefined4 *)0x005d2d48)
#define DAT_005d2d4c (*(undefined4 *)0x005d2d4c)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_005100f0 1
void __cdecl rb_005100f0(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_005d2d4c;
  uVar2 = DAT_005d2d48;
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar4;
  iVar1 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar1 + iVar4 * 8) = uVar2;
  *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar3;
  return;
}
