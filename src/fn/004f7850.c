/* Rebuilt from lomse.exe FUN_004f7850 @ 0x004f7850 (64 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cc9d4 (*(int *)0x005cc9d4)
#define FUN_004f0c20 ((undefined4 (__fastcall *)(int *))0x004f0c20)

#define LOM_SELF_004f7850 1
void __fastcall rb_004f7850(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 <= *(int *)(param_1 + 0x18)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + iVar2 * 4);
      if (((piVar1 != (int *)0x0) && (piVar1[1] == 4)) && (piVar1[0x17] == DAT_005cc9d4)) {
        FUN_004f0c20(piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(param_1 + 0x18));
  }
  return;
}
