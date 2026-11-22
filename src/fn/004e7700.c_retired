/* Rebuilt from lomse.exe FUN_004e7700 @ 0x004e7700 (100 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00415470 ((undefined4 (__fastcall *)(int *))0x00415470)
#define FUN_004e8bc0 ((undefined4 (__fastcall *)(int *))0x004e8bc0)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_no_ship_found__00572a90 (*(char (*)[])0x00572a90)

#define LOM_SELF_004e7700 1
undefined4 __fastcall rb_004e7700(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x4c) < 1) {
    OutputDebugStringA(s_no_ship_found__00572a90);
    return 0xffffffff;
  }
  piVar3 = (int *)(param_1 + 0xc4);
  do {
    iVar1 = FUN_00415470(piVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_004e8bc0((int *)(param_1 + 0xc4 + iVar4 * 0x4c));
      return uVar2;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0x13;
  } while (iVar4 < *(int *)(param_1 + 0x4c));
  OutputDebugStringA(s_no_ship_found__00572a90);
  return 0xffffffff;
}
