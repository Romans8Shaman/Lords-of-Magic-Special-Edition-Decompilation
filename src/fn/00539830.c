/* Rebuilt from lomse.exe FUN_00539830 @ 0x00539830 (316 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053e120 ((uint (__cdecl *)(int *))0x0053e120)
#define FUN_0053e210 ((int (__cdecl *)(uint, char *, DWORD))0x0053e210)

#define LOM_SELF_00539830 1
uint __cdecl rb_00539830(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  
  piVar1 = param_4;
  piVar5 = (int *)(param_3 * param_2);
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  piVar6 = piVar5;
  if ((param_4[3] & 0x10cU) == 0) {
    param_4 = (int *)0x1000;
    piVar8 = (int *)0x1000;
  }
  else {
    piVar8 = (int *)param_4[6];
    param_4 = piVar8;
  }
  do {
    if (((piVar1[3] & 0x10cU) == 0) || (piVar2 = (int *)piVar1[1], piVar2 == (int *)0x0)) {
      if (piVar6 < piVar8) {
        uVar4 = FUN_0053e120(piVar1);
        if (uVar4 == 0xffffffff) {
          return (uint)((int)piVar5 - (int)piVar6) / param_2;
        }
        *param_1 = (char)uVar4;
        param_4 = (int *)piVar1[6];
        param_1 = param_1 + 1;
        piVar6 = (int *)((int)piVar6 - 1);
        goto LAB_0053990e;
      }
      piVar2 = piVar6;
      if (piVar8 != (int *)0x0) {
        piVar2 = (int *)((int)piVar6 - (uint)piVar6 % (uint)piVar8);
      }
      iVar3 = FUN_0053e210(piVar1[4],param_1,(DWORD)piVar2);
      if (iVar3 == 0) {
        piVar1[3] = piVar1[3] | 0x10;
        return (uint)((int)piVar5 - (int)piVar6) / param_2;
      }
      if (iVar3 == -1) {
        piVar1[3] = piVar1[3] | 0x20;
        return (uint)((int)piVar5 - (int)piVar6) / param_2;
      }
      piVar6 = (int *)((int)piVar6 - iVar3);
      param_1 = param_1 + iVar3;
    }
    else {
      if (piVar6 < piVar2) {
        piVar2 = piVar6;
      }
      piVar6 = (int *)((int)piVar6 - (int)piVar2);
      pcVar7 = (char *)*piVar1;
      pcVar9 = param_1;
      for (uVar4 = (uint)piVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = (uint)piVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      param_1 = param_1 + (int)piVar2;
      piVar1[1] = piVar1[1] - (int)piVar2;
      *piVar1 = *piVar1 + (int)piVar2;
LAB_0053990e:
      piVar8 = param_4;
    }
    if (piVar6 == (int *)0x0) {
      return param_3;
    }
  } while( true );
}
