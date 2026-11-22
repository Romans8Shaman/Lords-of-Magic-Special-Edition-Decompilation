/* Rebuilt from lomse.exe FUN_00542390 @ 0x00542390 (126 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d59f4 (*(int *)0x005d59f4)
#define DAT_005d6a00 (*(int *)0x005d6a00)
#define FUN_00539510 ((undefined4 (__cdecl *)(int *))0x00539510)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_0053cc90 ((undefined4 (__cdecl *)(int, int))0x0053cc90)
#define FUN_0053cd00 ((undefined4 (__cdecl *)(int, int))0x0053cd00)

#define LOM_SELF_00542390 1
int __cdecl rb_00542390(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_0053cbb0(2);
  iVar3 = 0;
  if (0 < DAT_005d6a00) {
    do {
      iVar1 = *(int *)(DAT_005d59f4 + iVar3 * 4);
      if (iVar1 != 0) {
        FUN_0053cc90(iVar3,iVar1);
        piVar2 = *(int **)(DAT_005d59f4 + iVar3 * 4);
        if (((*(byte *)(piVar2 + 3) & 0x83) != 0) && (piVar2[7] != 0)) {
          FUN_00539510(piVar2);
          iVar4 = iVar4 + 1;
        }
        FUN_0053cd00(iVar3,*(int *)(DAT_005d59f4 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_005d6a00);
  }
  FUN_0053cc30(2);
  return iVar4;
}
