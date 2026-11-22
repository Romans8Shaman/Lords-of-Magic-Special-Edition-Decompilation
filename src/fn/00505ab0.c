/* Rebuilt from lomse.exe op_checkforcd @ 0x00505ab0 (47 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004fed50 ((undefined4 (__fastcall *)(int))0x004fed50)

#define LOM_SELF_00505ab0 1
void __cdecl rb_00505ab0(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004fed50(0x584ae8);
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  iVar1 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
  *(uint *)(iVar1 + 4 + iVar3 * 8) = -(uint)(iVar2 != 0);
  return;
}
