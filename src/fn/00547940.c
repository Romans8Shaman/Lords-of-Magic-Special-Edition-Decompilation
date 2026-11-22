/* Rebuilt from lomse.exe FUN_00547940 @ 0x00547940 (147 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d59f4 (*(int *)0x005d59f4)
#define DAT_005d6a00 (*(int *)0x005d6a00)
#define DeleteCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e0) /* KERNEL32.DLL!DeleteCriticalSection via IAT */
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)

#define LOM_SELF_00547940 1
int __cdecl rb_00547940(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  FUN_0053cbb0(2);
  iVar4 = 3;
  if (3 < DAT_005d6a00) {
    do {
      piVar1 = *(int **)(DAT_005d59f4 + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        if (((*(byte *)(piVar1 + 3) & 0x83) != 0) && (iVar2 = FUN_005394d0(piVar1), iVar2 != -1)) {
          iVar3 = iVar3 + 1;
        }
        if (0x13 < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_005d59f4 + iVar4 * 4) + 0x20));
          FUN_0053bce0(*(undefined **)(DAT_005d59f4 + iVar4 * 4));
          *(undefined4 *)(DAT_005d59f4 + iVar4 * 4) = 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_005d6a00);
  }
  FUN_0053cc30(2);
  return iVar3;
}
