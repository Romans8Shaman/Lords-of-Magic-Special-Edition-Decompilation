/* Rebuilt from lomse.exe FUN_004f7800 @ 0x004f7800 (69 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae950 (*(undefined4 *)0x005ae950)
#define DAT_005cc9d4 (*(int *)0x005cc9d4)
#define FUN_0041b6d0 ((undefined4 (__fastcall *)(int *))0x0041b6d0)

#define LOM_SELF_004f7800 1
void __fastcall rb_004f7800(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 <= *(int *)(param_1 + 0x18)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + iVar2 * 4);
      if (((piVar1 != (int *)0x0) && (piVar1[1] == 0)) && (piVar1[0x12] == DAT_005cc9d4)) {
        FUN_0041b6d0(piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(param_1 + 0x18));
  }
  DAT_005ae950 = 0;
  return;
}
