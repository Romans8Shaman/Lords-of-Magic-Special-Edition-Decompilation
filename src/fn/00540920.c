/* Rebuilt from lomse.exe FUN_00540920 @ 0x00540920 (167 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5328 (*(undefined4 *)0x005d5328)
#define DAT_005d5530 (*(int *)0x005d5530)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_00540920 1
byte * __cdecl rb_00540920(byte *param_1,byte *param_2,size_t param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (DAT_005d5530 == 0) {
    pbVar3 = (byte *)_strncpy((char *)param_1,(char *)param_2,param_3);
    return pbVar3;
  }
  FUN_0053cbb0(0x19);
  uVar5 = 0;
  pbVar3 = param_1;
  if (param_3 != 0) {
    pbVar6 = param_1;
    do {
      bVar1 = *param_2;
      uVar5 = param_3 - 1;
      bVar2 = *(byte *)((int)&DAT_005d5328 + bVar1 + 1);
      *pbVar6 = bVar1;
      if ((bVar2 & 4) == 0) {
        pbVar3 = pbVar6 + 1;
        param_2 = param_2 + 1;
        if (bVar1 == 0) goto LAB_0054099d;
      }
      else {
        pbVar3 = pbVar6 + 1;
        if (uVar5 == 0) {
          *pbVar6 = 0;
          goto LAB_0054099d;
        }
        bVar1 = param_2[1];
        uVar5 = param_3 - 2;
        *pbVar3 = bVar1;
        pbVar3 = pbVar6 + 2;
        param_2 = param_2 + 2;
        if (bVar1 == 0) {
          *pbVar6 = 0;
          goto LAB_0054099d;
        }
      }
      param_3 = uVar5;
      pbVar6 = pbVar3;
    } while (uVar5 != 0);
    uVar5 = 0;
  }
LAB_0054099d:
  if (uVar5 != 0) {
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3 = pbVar3 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar3 = 0;
      pbVar3 = pbVar3 + 1;
    }
  }
  FUN_0053cc30(0x19);
  return param_1;
}
