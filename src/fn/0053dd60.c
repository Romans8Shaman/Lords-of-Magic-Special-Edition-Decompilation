/* Rebuilt from lomse.exe FUN_0053dd60 @ 0x0053dd60 (304 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574e58 (*(undefined *)0x00574e58)
#define DAT_005771c0 (*(undefined *)0x005771c0)
#define DAT_005771e0 (*(undefined *)0x005771e0)
#define DAT_005d6a20 (*(undefined4 *)0x005d6a20)
#define FUN_0053de90 ((int (__cdecl *)(uint, char *, uint))0x0053de90)
#define FUN_0053f580 ((DWORD (__cdecl *)(uint, LONG, DWORD))0x0053f580)
#define FUN_005447e0 ((undefined4 (__cdecl *)(uint))0x005447e0)
#define FUN_005449f0 ((undefined4 (__cdecl *)(int *))0x005449f0)

#define LOM_SELF_0053dd60 1
uint __cdecl rb_0053dd60(uint volatile param_1, int *volatile param_2)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  
  piVar3 = param_2;
  uVar7 = param_2[3];
  uVar1 = param_2[4];
  if (((uVar7 & 0x82) == 0) || ((uVar7 & 0x40) != 0)) {
LAB_0053de83:
    param_2[3] = uVar7 | 0x20;
    return 0xffffffff;
  }
  uVar6 = 0;
  if ((uVar7 & 1) != 0) {
    param_2[1] = 0;
    if ((uVar7 & 0x10) == 0) goto LAB_0053de83;
    *param_2 = param_2[2];
    param_2[3] = uVar7 & 0xfffffffe;
  }
  uVar7 = param_2[3];
  param_2[1] = 0;
  param_2[3] = uVar7 & 0xffffffef | 2;
  if ((uVar7 & 0x10c) == 0) {
    if ((param_2 == (int *)&DAT_005771c0) || (param_2 == (int *)&DAT_005771e0)) {
      iVar4 = FUN_005447e0(uVar1);
      if (iVar4 != 0) goto LAB_0053ddd3;
    }
    FUN_005449f0(piVar3);
  }
LAB_0053ddd3:
  if ((piVar3[3] & 0x108U) == 0) {
    uVar7 = 1;
    uVar6 = FUN_0053de90(uVar1,(char *)&param_1,1);
  }
  else {
    pcVar2 = (char *)piVar3[2];
    uVar7 = *piVar3 - (int)pcVar2;
    *piVar3 = (int)(pcVar2 + 1);
    piVar3[1] = piVar3[6] + -1;
    if ((int)uVar7 < 1) {
      if (uVar1 == 0xffffffff) {
        puVar5 = &DAT_00574e58;
      }
      else {
        puVar5 = (undefined *)((&DAT_005d6a20)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
      }
      if ((puVar5[4] & 0x20) != 0) {
        FUN_0053f580(uVar1,0,2);
      }
      *(undefined1 *)piVar3[2] = (undefined1)param_1;
    }
    else {
      uVar6 = FUN_0053de90(uVar1,pcVar2,uVar7);
      *(undefined1 *)piVar3[2] = (undefined1)param_1;
    }
  }
  if (uVar6 == uVar7) {
    return param_1 & 0xff;
  }
  piVar3[3] = piVar3[3] | 0x20;
  return 0xffffffff;
}
