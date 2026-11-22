/* Rebuilt from lomse.exe FUN_0053b440 @ 0x0053b440 (115 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005747f0 (*(undefined4 *)0x005747f0)
#define DAT_00574958 (*(undefined *)0x00574958)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_0053b4d0 ((DWORD * (__stdcall *)(void))0x0053b4d0)

#define LOM_SELF_0053b440 1
DWORD * __cdecl rb_0053b440(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_0053b4d0();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_005747f0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_0053b4c0();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x5747f4);
      return pDVar1;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar2 < &DAT_00574958);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_0053b4c0();
    *pDVar1 = 0xd;
    return pDVar1;
  }
  if ((param_1 < 0xbc) || (0xca < param_1)) {
    pDVar1 = FUN_0053b4c0();
    *pDVar1 = 0x16;
    return pDVar1;
  }
  pDVar1 = FUN_0053b4c0();
  *pDVar1 = 8;
  return pDVar1;
}
