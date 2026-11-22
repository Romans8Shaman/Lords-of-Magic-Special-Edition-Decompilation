/* Rebuilt from lomse.exe FUN_004f78e0 @ 0x004f78e0 (69 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cc9d4 (*(int *)0x005cc9d4)
#define FUN_0050cc70 ((undefined4 (__fastcall *)(int *))0x0050cc70)

#define LOM_SELF_004f78e0 1
void __fastcall rb_004f78e0(int param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 <= *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = DAT_005cc9d4;
      this = *(int **)(*(int *)(param_1 + 8) + iVar3 * 4);
      if (((this != (int *)0x0) && (this[1] == 1)) &&
         (iVar2 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x3c)))(this), iVar2 == iVar1)) {
        FUN_0050cc70(this);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)(param_1 + 0x18));
  }
  return;
}
