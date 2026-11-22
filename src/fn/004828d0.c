/* Rebuilt from lomse.exe FUN_004828d0 @ 0x004828d0 (178 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_00483120 ((undefined4 (__thiscall *)(void *, LPCSTR))0x00483120)
#define FUN_00483ed0 ((undefined4 (__stdcall *)(void))0x00483ed0)
#define FUN_004b1e40 ((undefined4 (__stdcall *)(int))0x004b1e40)
#define FUN_004b6f20 ((undefined4 (__fastcall *)(int))0x004b6f20)
#define FUN_004b9570 ((undefined4 (__stdcall *)(undefined1, short))0x004b9570)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_unknown_transfer_0055b284 (*(char (*)[])0x0055b284)

#define LOM_SELF_004828d0 1
void __thiscall rb_004828d0(void *this,undefined1 param_1,short param_2)

{
  LPCSTR pCVar1;
  int iVar2;
  DWORD DVar3;
  
  pCVar1 = (LPCSTR)FUN_004b9570(param_1,param_2);
  switch(param_1) {
  case 0x44:
  case 0x53:
    break;
  default:
    OutputDebugStringA(s_unknown_transfer_0055b284);
    break;
  case 0x47:
    FUN_00483120(this,pCVar1);
    if (DAT_005d1e84 != 0) {
      *(undefined4 *)(DAT_005d1e84 + 0xd8) = 1;
      DVar3 = GetTickCount();
      *(DWORD *)((int)this + 0x228b0) = DVar3;
      return;
    }
    break;
  case 0x4d:
    iVar2 = FUN_004b1e40(1);
    FUN_00483ed0();
    if (iVar2 == 0) {
      FUN_004b6f20(0x5cd358);
      DVar3 = GetTickCount();
      *(DWORD *)((int)this + 0x228b0) = DVar3;
      return;
    }
  }
  DVar3 = GetTickCount();
  *(DWORD *)((int)this + 0x228b0) = DVar3;
  return;
}
