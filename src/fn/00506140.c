/* Rebuilt from lomse.exe FUN_00506140 @ 0x00506140 (67 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00506190 ((undefined4 (__thiscall *)(void *))0x00506190)

#define LOM_SELF_00506140 1
void __fastcall rb_00506140(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00420580(param_1);
  if (((iVar1 != 0) && ((*(uint *)(param_1 + 0x30) & 0x20000000) != 0)) &&
     (*(int *)(param_1 + 0x5d4) == 0)) {
    uVar2 = FUN_00506190((void *)param_1);
    *(undefined4 *)(param_1 + 0x5d4) = uVar2;
    *(undefined4 *)(param_1 + 0x5cc) = 0;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xdfffffff;
  }
  return;
}
