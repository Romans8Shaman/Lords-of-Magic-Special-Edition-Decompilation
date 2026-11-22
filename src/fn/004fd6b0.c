/* Rebuilt from lomse.exe FUN_004fd6b0 @ 0x004fd6b0 (66 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9c0 (*(int *)0x005ae9c0)
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)

#define LOM_SELF_004fd6b0 1
void __fastcall rb_004fd6b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        iVar2 = piVar1[7];
        if ((iVar2 < 0) || (iVar3 = iVar2, DAT_005ae9c0 <= iVar2)) {
          iVar3 = 0;
        }
        FUN_004a6dd0(&DAT_005ae958,piVar1,iVar2,iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  return;
}
