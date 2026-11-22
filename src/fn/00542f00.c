/* Rebuilt from lomse.exe FUN_00542f00 @ 0x00542f00 (73 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6a20 (*(undefined4 *)0x005d6a20)
#define DAT_005d6b20 (*(uint *)0x005d6b20)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_0053b4d0 ((DWORD * (__stdcall *)(void))0x0053b4d0)

#define LOM_SELF_00542f00 1
undefined4 __cdecl rb_00542f00(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_005d6b20) &&
     ((*(byte *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_005d6a20)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_0053b4c0();
  *pDVar1 = 9;
  pDVar1 = FUN_0053b4d0();
  *pDVar1 = 0;
  return 0xffffffff;
}
