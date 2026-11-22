/* Rebuilt from lomse.exe FUN_005396a0 @ 0x005396a0 (326 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053cdb0 ((undefined4 (__cdecl *)(int *))0x0053cdb0)
#define FUN_0053dd60 ((uint (__cdecl *)(uint, int *))0x0053dd60)
#define FUN_0053de90 ((int (__cdecl *)(uint, char *, uint))0x0053de90)

#define LOM_SELF_005396a0 1
uint __cdecl rb_005396a0(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  
  piVar1 = param_4;
  piVar6 = (int *)(param_3 * param_2);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  piVar7 = piVar6;
  if ((param_4[3] & 0x10cU) == 0) {
    param_4 = (int *)0x1000;
  }
  else {
    param_4 = (int *)param_4[6];
  }
  do {
    if (((piVar1[3] & 0x108U) == 0) || (piVar2 = (int *)piVar1[1], piVar2 == (int *)0x0)) {
      if (piVar7 < param_4) {
        uVar5 = FUN_0053dd60((int)*param_1,piVar1);
        if (uVar5 == 0xffffffff) goto LAB_005397d4;
        param_4 = (int *)piVar1[6];
        param_1 = param_1 + 1;
        piVar7 = (int *)((int)piVar7 - 1);
        if ((int)param_4 < 1) {
          param_4 = (int *)0x1;
        }
      }
      else {
        if (((piVar1[3] & 0x108U) != 0) && (iVar3 = FUN_0053cdb0(piVar1), iVar3 != 0)) {
LAB_005397d4:
          return (uint)((int)piVar6 - (int)piVar7) / param_2;
        }
        if (param_4 == (int *)0x0) {
          piVar2 = piVar7;
        }
        else {
          piVar2 = (int *)((int)piVar7 - (uint)piVar7 % (uint)param_4);
        }
        piVar4 = (int *)FUN_0053de90(piVar1[4],param_1,(uint)piVar2);
        if (piVar4 == (int *)0xffffffff) {
LAB_005397b9:
          piVar1[3] = piVar1[3] | 0x20;
          return (uint)((int)piVar6 - (int)piVar7) / param_2;
        }
        piVar7 = (int *)((int)piVar7 - (int)piVar4);
        param_1 = param_1 + (int)piVar4;
        if (piVar4 < piVar2) goto LAB_005397b9;
      }
    }
    else {
      if (piVar7 < piVar2) {
        piVar2 = piVar7;
      }
      piVar7 = (int *)((int)piVar7 - (int)piVar2);
      pcVar8 = param_1;
      pcVar9 = (char *)*piVar1;
      for (uVar5 = (uint)piVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = (uint)piVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      param_1 = param_1 + (int)piVar2;
      piVar1[1] = piVar1[1] - (int)piVar2;
      *piVar1 = *piVar1 + (int)piVar2;
    }
    if (piVar7 == (int *)0x0) {
      return param_3;
    }
  } while( true );
}
