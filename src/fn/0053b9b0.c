/* Rebuilt from lomse.exe FUN_0053b9b0 @ 0x0053b9b0 (64 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define GetDriveTypeA (*(__typeof__(UINT (__stdcall *)(LPCSTR)) *)0x0054d0b0) /* KERNEL32.DLL!GetDriveTypeA via IAT */

#define LOM_SELF_0053b9b0 1
undefined4 __cdecl rb_0053b9b0(uint volatile param_1)

{
  UINT UVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  param_1 = CONCAT31(0x3a,(char)param_1 + '@');
  param_1 = (uint)CONCAT12(0x5c,(undefined2)param_1);
  UVar1 = GetDriveTypeA((LPCSTR)&param_1);
  if ((UVar1 == 0) || (UVar1 == 1)) {
    return 0;
  }
  return 1;
}
