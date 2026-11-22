/* Rebuilt from lomse.exe FUN_00504f60 @ 0x00504f60 (79 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00505110 ((char * (__thiscall *)(void *, int, uint))0x00505110)
#define FUN_0053a790 ((undefined4 (__cdecl *)(LPCSTR))0x0053a790)
#define GetTempPathA (*(__typeof__(DWORD (__stdcall *)(DWORD, LPSTR)) *)0x0054d064) /* KERNEL32.DLL!GetTempPathA via IAT */

#define LOM_SELF_00504f60 1
void __fastcall rb_00504f60(void *param_1)

{
  DWORD DVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  DVar1 = GetTempPathA(0x104,(LPSTR)((int)param_1 + 0x4d4a8));
  if (DVar1 == 0) {
    *(LPSTR)((int)param_1 + 0x4d4a8) = '\0';
  }
  iVar4 = 0;
  puVar5 = (undefined4 *)((int)param_1 + 0x4d488);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  do {
    if (iVar4 != 0) {
      pcVar2 = FUN_00505110(param_1,iVar4,0xffffffff);
      FUN_0053a790(pcVar2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  return;
}
