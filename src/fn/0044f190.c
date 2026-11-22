/* Rebuilt from lomse.exe FUN_0044f190 @ 0x0044f190 (46 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_City__GetBuildingLevel___invalid_00557390 (*(char (*)[])0x00557390)

#define LOM_SELF_0044f190 1
undefined4 __thiscall rb_0044f190(void *this,int param_1)

{
  if ((param_1 < 0) || (8 < param_1)) {
    OutputDebugStringA(s_City__GetBuildingLevel___invalid_00557390);
    return 0;
  }
  return *(undefined4 *)((int)this + param_1 * 0x44 + 0xd4);
}
