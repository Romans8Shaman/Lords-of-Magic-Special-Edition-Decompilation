/* Rebuilt from lomse.exe FUN_0053b350 @ 0x0053b350 (133 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053cc50 ((undefined4 (__cdecl *)(uint))0x0053cc50)
#define FUN_0053ccc0 ((undefined4 (__cdecl *)(uint))0x0053ccc0)
#define FUN_0053e120 ((uint (__cdecl *)(int *))0x0053e120)

#define LOM_SELF_0053b350 1
char * __cdecl rb_0053b350(char *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_2 < 1) {
    return (char *)0x0;
  }
  FUN_0053cc50((uint)param_3);
  iVar3 = param_2 + -1;
  pcVar4 = param_1;
  if (iVar3 != 0) {
    while( true ) {
      iVar1 = param_3[1];
      param_3[1] = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        uVar2 = FUN_0053e120(param_3);
      }
      else {
        uVar2 = (uint)*(byte *)*param_3;
        *param_3 = (int)((byte *)*param_3 + 1);
      }
      if (uVar2 == 0xffffffff) break;
      *pcVar4 = (char)uVar2;
      pcVar4 = pcVar4 + 1;
      if (((char)uVar2 == '\n') || (iVar3 = iVar3 + -1, iVar3 == 0)) goto LAB_0053b3a8;
    }
    if (pcVar4 == param_1) {
      FUN_0053ccc0((uint)param_3);
      return (char *)0x0;
    }
  }
LAB_0053b3a8:
  *pcVar4 = '\0';
  FUN_0053ccc0((uint)param_3);
  return param_1;
}
