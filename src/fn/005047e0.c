/* Rebuilt from lomse.exe FUN_005047e0 @ 0x005047e0 (46 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00474ad0 ((undefined4 (__fastcall *)(int))0x00474ad0)
#define MessageBoxA (*(__typeof__(int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT)) *)0x0054d28c) /* USER32.DLL!MessageBoxA via IAT */

#define LOM_SELF_005047e0 1
int __thiscall rb_005047e0(void *this,LPCSTR param_1,LPCSTR param_2,UINT param_3)

{
  int iVar1;
  
  FUN_00474ad0((int)this + 0x2531c);
  iVar1 = MessageBoxA(*(HWND *)((int)this + 0x26c),param_1,param_2,param_3);
  return iVar1;
}
