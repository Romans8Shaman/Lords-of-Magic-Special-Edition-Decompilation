/* Rebuilt from lomse.exe FUN_0053dc80 @ 0x0053dc80 (217 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d59f4 (*(int *)0x005d59f4)
#define DAT_005d6a00 (*(int *)0x005d6a00)
#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_0053cc90 ((undefined4 (__cdecl *)(int, int))0x0053cc90)
#define FUN_0053cd00 ((undefined4 (__cdecl *)(int, int))0x0053cd00)
#define InitializeCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e4) /* KERNEL32.DLL!InitializeCriticalSection via IAT */

#define LOM_SELF_0053dc80 1
undefined4 * __stdcall rb_0053dc80(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_0053cbb0(2);
  iVar3 = 0;
  if (0 < DAT_005d6a00) {
    do {
      iVar1 = *(int *)(DAT_005d59f4 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        uVar2 = FUN_0053c1f0(0x38);
        *(undefined4 *)(DAT_005d59f4 + iVar3) = uVar2;
        if (*(int *)(DAT_005d59f4 + iVar3) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_005d59f4 + iVar3) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_005d59f4 + iVar3) + 0x20));
          puVar4 = *(undefined4 **)(DAT_005d59f4 + iVar3);
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_0053cc90(iVar3,iVar1);
        iVar1 = *(int *)(DAT_005d59f4 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_005d59f4 + iVar3 * 4);
          break;
        }
        FUN_0053cd00(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_005d6a00);
  }
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4[7] = 0;
    puVar4[4] = 0xffffffff;
  }
  FUN_0053cc30(2);
  return puVar4;
}
