/* Rebuilt from lomse.exe FUN_00548e10 @ 0x00548e10 (164 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6a20 (*(undefined4 *)0x005d6a20)
#define DAT_005d6b20 (*(uint *)0x005d6b20)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_0053b4d0 ((DWORD * (__stdcall *)(void))0x0053b4d0)
#define FUN_0053f600 ((DWORD (__cdecl *)(uint, LONG, DWORD))0x0053f600)
#define FUN_00542f50 ((undefined4 (__cdecl *)(uint))0x00542f50)
#define FUN_00542fc0 ((undefined4 (__cdecl *)(uint))0x00542fc0)

#define LOM_SELF_00548e10 1
DWORD __cdecl rb_00548e10(uint param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  
  if ((DAT_005d6b20 <= param_1) ||
     ((*(byte *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) == 0)) {
    pDVar3 = FUN_0053b4c0();
    *pDVar3 = 9;
    pDVar3 = FUN_0053b4d0();
    *pDVar3 = 0;
    return 0xffffffff;
  }
  FUN_00542f50(param_1);
  DVar1 = FUN_0053f600(param_1,0,1);
  if (DVar1 == 0xffffffff) {
    FUN_00542fc0(param_1);
    return 0xffffffff;
  }
  DVar2 = FUN_0053f600(param_1,0,2);
  if (DVar1 != DVar2) {
    FUN_0053f600(param_1,DVar1,0);
  }
  FUN_00542fc0(param_1);
  return DVar2;
}
