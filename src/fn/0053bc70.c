/* Rebuilt from lomse.exe FUN_0053bc70 @ 0x0053bc70 (98 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00542020 ((char * (__cdecl *)(uint, char *, uint))0x00542020)
#define FUN_005422e0 ((undefined4 (__cdecl *)(byte *, undefined4 *, uint))0x005422e0)
#define FUN_00542300 ((byte * (__cdecl *)(byte *, uint))0x00542300)

#define LOM_SELF_0053bc70 1
undefined4 __cdecl rb_0053bc70(byte *volatile param_1)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  
  pbVar2 = FUN_00542300(param_1,0x2e);
  iVar3 = FUN_005422e0(pbVar2 + 1,(undefined4 *)0x0,0x20);
  if (0x7ffe < iVar3 + 1U) {
    return 0xffffffff;
  }
  pcVar4 = FUN_00542020(iVar3 + 1U,(char *)&param_1,0x20);
  uVar5 = 0xffffffff;
  do {
    pcVar8 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pbVar7 = (byte *)(pcVar8 + -uVar5);
  pbVar2 = pbVar2 + 1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar2 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    pbVar2 = pbVar2 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar2 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar2 = pbVar2 + 1;
  }
  return 0;
}
