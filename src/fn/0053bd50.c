/* Rebuilt from lomse.exe FUN_0053bd50 @ 0x0053bd50 (104 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6a20 (*(undefined4 *)0x005d6a20)
#define DAT_005d6b20 (*(uint *)0x005d6b20)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_0053b4d0 ((DWORD * (__stdcall *)(void))0x0053b4d0)
#define FUN_0053bdc0 ((undefined4 (__cdecl *)(uint))0x0053bdc0)
#define FUN_00542f50 ((undefined4 (__cdecl *)(uint))0x00542f50)
#define FUN_00542fc0 ((undefined4 (__cdecl *)(uint))0x00542fc0)

#define LOM_SELF_0053bd50 1
undefined4 __cdecl rb_0053bd50(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_005d6b20) &&
     ((*(byte *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_00542f50(param_1);
    uVar1 = FUN_0053bdc0(param_1);
    FUN_00542fc0(param_1);
    return uVar1;
  }
  pDVar2 = FUN_0053b4c0();
  *pDVar2 = 9;
  pDVar2 = FUN_0053b4d0();
  *pDVar2 = 0;
  return 0xffffffff;
}
