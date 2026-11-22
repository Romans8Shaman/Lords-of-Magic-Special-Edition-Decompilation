/* Rebuilt from lomse.exe FUN_0048c150 @ 0x0048c150 (242 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b574 (*(uint *)0x0055b574)
#define DAT_00583550 (*(int *)0x00583550)
#define DAT_00583554 (*(DWORD *)0x00583554)
#define DAT_00583560 (*(uint *)0x00583560)
#define DAT_00583564 (*(int *)0x00583564)
#define DAT_00583568 (*(int *)0x00583568)
#define DAT_00583574 (*(int *)0x00583574)
#define DAT_0058357c (*(int *)0x0058357c)
#define DAT_005835e8 (*(uint *)0x005835e8)
#define DAT_005aa118 (*(int *)0x005aa118)
#define DAT_005af12c (*(int *)0x005af12c)
#define DAT_005d1f24 (*(int *)0x005d1f24)
#define FUN_0048a590 ((undefined4 (__stdcall *)(void))0x0048a590)
#define FUN_0048c4a0 ((undefined4 (__stdcall *)(void))0x0048c4a0)
#define timeGetTime (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d33c) /* WINMM.DLL!timeGetTime via IAT */

#define LOM_SELF_0048c150 1
undefined4 __stdcall rb_0048c150(void)

{
  DWORD DVar1;
  
  if ((((DAT_00583574 == 0) && (DAT_005d1f24 == 0)) && (DAT_005aa118 < 1)) && (DAT_005af12c == 0)) {
    DAT_00583564 = DAT_00583564 + 1;
    FUN_0048a590();
    if (DAT_0058357c != 0) {
      DAT_0058357c = DAT_0058357c + -1;
      DAT_005835e8 = (uint)(DAT_005835e8 == 0);
      if (DAT_005835e8 != 0) {
        DAT_00583564 = DAT_00583564 + -1;
        return 0;
      }
    }
    if (DAT_00583560 < DAT_0055b574) {
      DAT_00583568 = DAT_00583568 + 1;
      DAT_00583560 = DAT_00583560 + 1;
      DAT_00583554 = 0;
      return 1;
    }
    if (DAT_00583554 == 0) {
      DAT_00583554 = timeGetTime();
    }
    else {
      DVar1 = timeGetTime();
      if (30000 < DVar1 - DAT_00583554) {
        FUN_0048c4a0();
        DAT_00583554 = 0;
        DAT_00583550 = DAT_00583550 + 1;
        return 0;
      }
    }
    DAT_00583550 = DAT_00583550 + 1;
  }
  return 0;
}
