/* Rebuilt from lomse.exe FUN_004a1c10 @ 0x004a1c10 (92 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004beef0 ((undefined4 (__thiscall *)(void *, int))0x004beef0)
#define FUN_004bef40 ((undefined4 (__thiscall *)(void *, int))0x004bef40)

#define LOM_SELF_004a1c10 1
void __stdcall rb_004a1c10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar1 = *(int *)(param_2 + 0x15a8);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + 0xd28 + iVar1 * 0x88;
    }
    if ((iVar1 != 0) && (param_3 != -1)) {
      iVar2 = FUN_004beef0((void *)(iVar1 + 0x7c),param_3);
      if (iVar2 == 0) {
        FUN_004bef40((void *)(iVar1 + 0x7c),param_3);
      }
    }
  }
  return;
}
