/* Rebuilt from lomse.exe FUN_004f7890 @ 0x004f7890 (75 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cc9d4 (*(int *)0x005cc9d4)
#define FUN_0043be20 ((undefined4 (__fastcall *)(int))0x0043be20)
#define FUN_0043d730 ((undefined4 (__fastcall *)(int *))0x0043d730)

#define LOM_SELF_004f7890 1
void __fastcall rb_004f7890(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 <= *(int *)(param_1 + 0x18)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + iVar2 * 4);
      if (((piVar1 != (int *)0x0) && (piVar1[1] == 2)) &&
         (FUN_0043be20((int)piVar1), piVar1[0x13] == DAT_005cc9d4)) {
        FUN_0043d730(piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(param_1 + 0x18));
  }
  return;
}
