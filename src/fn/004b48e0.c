/* Rebuilt from lomse.exe FUN_004b48e0 @ 0x004b48e0 (84 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005843f8 (*(uint *)0x005843f8)
#define DAT_005843fc (*(int * *)0x005843fc)
#define DAT_00584418 (*(int *)0x00584418)
#define DAT_00584420 (*(DWORD *)0x00584420)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define timeGetTime (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d33c) /* WINMM.DLL!timeGetTime via IAT */

#define LOM_SELF_004b48e0 1
undefined4 __stdcall rb_004b48e0(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (DAT_00584418 == 2) {
    DVar1 = timeGetTime();
    if (100 < DVar1 - DAT_00584420) {
      if (((char)DAT_005843f8 == '\x06') && ((DAT_005843f8 & 0x100) == 0)) {
        FUN_004d05e0(DAT_005a7b78,DAT_005843f8,DAT_005843fc);
      }
      uVar2 = 1;
      DAT_00584420 = DVar1;
    }
  }
  return uVar2;
}
