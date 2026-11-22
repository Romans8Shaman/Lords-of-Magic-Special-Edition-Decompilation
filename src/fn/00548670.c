/* Rebuilt from lomse.exe FUN_00548670 @ 0x00548670 (59 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5530 (*(UINT *)0x005d5530)
#define DAT_005d5534 (*(LCID *)0x005d5534)
#define FUN_00548730 ((int (__cdecl *)(LCID, DWORD, byte *, LPWSTR, byte *, int, UINT))0x00548730)

#define LOM_SELF_00548670 1
int __cdecl rb_00548670(byte *param_1,byte *param_2,LPWSTR param_3)

{
  int iVar1;
  
  if (param_3 == (LPWSTR)0x0) {
    return 0;
  }
  iVar1 = FUN_00548730(DAT_005d5534,1,param_1,param_3,param_2,(int)param_3,DAT_005d5530);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}
