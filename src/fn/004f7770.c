/* Rebuilt from lomse.exe FUN_004f7770 @ 0x004f7770 (74 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae94c (*(undefined4 *)0x005ae94c)
#define DAT_005cc9d4 (*(int *)0x005cc9d4)
#define FUN_00450490 ((undefined4 (__fastcall *)(int *))0x00450490)

#define LOM_SELF_004f7770 1
void __fastcall rb_004f7770(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 <= *(int *)(param_1 + 0x18)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + iVar2 * 4);
      if (((piVar1 != (int *)0x0) && (piVar1[1] == 3)) && (piVar1[0x1a] == DAT_005cc9d4)) {
        FUN_00450490(piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(param_1 + 0x18));
  }
  DAT_005ae94c = 0;
  return;
}
