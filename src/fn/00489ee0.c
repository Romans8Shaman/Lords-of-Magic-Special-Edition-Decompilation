/* Rebuilt from lomse.exe FUN_00489ee0 @ 0x00489ee0 (269 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_0048c960 ((uint (__fastcall *)(int))0x0048c960)

#define LOM_SELF_00489ee0 1
uint __cdecl rb_00489ee0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  piVar3 = (int *)FUN_0048c2b0((int)param_1);
  piVar4 = (int *)FUN_0048c2b0((int)param_2);
  if ((char)param_1[1] == '=') {
    if ((char)param_2[1] != '=') {
      return 1;
    }
  }
  else if ((char)param_2[1] == '=') {
    return 0xffffffff;
  }
  if (*(char *)((int)param_1 + 7) != *(char *)((int)param_2 + 7)) {
    uVar5 = FUN_0048a400(0x584ae8);
    if (*(byte *)((int)param_1 + 7) == uVar5) {
      uVar5 = FUN_0048a400(0x584ae8);
      return -(uint)(*(byte *)((int)param_1 + 7) == uVar5);
    }
    uVar5 = FUN_0048a400(0x584ae8);
    return (uint)(*(byte *)((int)param_2 + 7) == uVar5);
  }
  if (piVar3 == (int *)0x0) {
    if (piVar4 == (int *)0x0) {
      return *param_1 - *param_2;
    }
  }
  else {
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    iVar1 = *piVar3;
    iVar2 = *piVar4;
    if (iVar1 == iVar2) {
      uVar5 = FUN_0048c960((int)param_1);
      if (uVar5 == 0) {
        return 0xffffffff;
      }
      uVar5 = FUN_0048c960((int)param_2);
      if (uVar5 == 0) {
        return 1;
      }
      return *param_1 - *param_2;
    }
    if (iVar1 != -2) {
      if (iVar2 == -2) {
        return 1;
      }
      return iVar1 - iVar2;
    }
  }
  return 0xffffffff;
}
