/* Rebuilt from lomse.exe FUN_00488540 @ 0x00488540 (157 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)

#define LOM_SELF_00488540 1
undefined4 __fastcall rb_00488540(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x479c) == 0) {
    iVar1 = *(int *)(param_1 + 0x658);
    *(undefined4 *)(param_1 + 0x479c) = 1;
    if ((iVar1 < 0) || (0xf < iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + 0x5068 + iVar1 * 0x1d84;
    }
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x15dc);
      if (DAT_005d1e84 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_004b7dd0(DAT_005d1e84);
      }
      if ((iVar1 == iVar2) && (*(char *)(param_1 + 0x47a8) != '\0')) {
        FUN_004d09a0(DAT_005a7b78,*(uint *)(param_1 + 0x47a8),*(int **)(param_1 + 0x47ac),0);
        return 1;
      }
    }
  }
  return 0;
}
