/* Rebuilt from lomse.exe FUN_00428a90 @ 0x00428a90 (61 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)

#define LOM_SELF_00428a90 1
int __fastcall rb_00428a90(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((*(byte *)(piVar1 + 4) & 0x1f) != 0) {
      iVar2 = FUN_00427b80(*piVar1);
      if ((-1 < *(int *)(iVar2 + 0x7c)) &&
         (iVar2 = FUN_00491c20(&DAT_005a7b50,*(int *)(iVar2 + 0x7c)), iVar2 != 0)) {
        return iVar2;
      }
    }
    piVar1 = (int *)piVar1[5];
  } while( true );
}
