/* Rebuilt from lomse.exe FUN_00542410 @ 0x00542410 (55 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6a04 (*(HANDLE *)0x005d6a04)
#define FUN_00542450 ((undefined * * (__stdcall *)(void))0x00542450)
#define HeapCreate (*(__typeof__(HANDLE (__stdcall *)(DWORD, SIZE_T, SIZE_T)) *)0x0054d140) /* KERNEL32.DLL!HeapCreate via IAT */
#define HeapDestroy (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d144) /* KERNEL32.DLL!HeapDestroy via IAT */

#define LOM_SELF_00542410 1
undefined4 __stdcall rb_00542410(void)

{
  undefined **ppuVar1;
  
  DAT_005d6a04 = HeapCreate(0,0x1000,0);
  if (DAT_005d6a04 == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_00542450();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_005d6a04);
    return 0;
  }
  return 1;
}
