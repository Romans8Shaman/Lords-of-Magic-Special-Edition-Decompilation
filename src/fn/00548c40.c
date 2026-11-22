/* Rebuilt from lomse.exe FUN_00548c40 @ 0x00548c40 (116 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d52d0 (*(int * *)0x005d52d0)
#define FUN_00548670 ((int (__cdecl *)(byte *, byte *, LPWSTR))0x00548670)

#define LOM_SELF_00548c40 1
int __cdecl rb_00548c40(byte *param_1,LPWSTR param_2)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  pbVar1 = (byte *)*DAT_005d52d0;
  piVar3 = DAT_005d52d0;
  if (pbVar1 == (byte *)0x0) {
    return 0;
  }
  while ((iVar2 = FUN_00548670(param_1,pbVar1,param_2), iVar2 != 0 ||
         ((*(char *)(*piVar3 + (int)param_2) != '=' && (*(char *)(*piVar3 + (int)param_2) != '\0')))
         )) {
    pbVar1 = (byte *)piVar3[1];
    piVar3 = piVar3 + 1;
    if (pbVar1 == (byte *)0x0) {
      return -((int)piVar3 - (int)DAT_005d52d0 >> 2);
    }
  }
  return (int)piVar3 - (int)DAT_005d52d0 >> 2;
}
