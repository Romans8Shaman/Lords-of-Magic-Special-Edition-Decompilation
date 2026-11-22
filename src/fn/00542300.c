/* Rebuilt from lomse.exe FUN_00542300 @ 0x00542300 (144 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5328 (*(undefined4 *)0x005d5328)
#define DAT_005d5530 (*(int *)0x005d5530)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define _strrchr ((char * (__cdecl *)(char *, int))0x0053aa70)

#define LOM_SELF_00542300 1
byte * __cdecl rb_00542300(byte *param_1,uint param_2)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)0x0;
  if (DAT_005d5530 == 0) {
    pbVar5 = (byte *)_strrchr((char *)param_1,param_2);
    return pbVar5;
  }
  FUN_0053cbb0(0x19);
  do {
    bVar3 = *param_1;
    if ((*(byte *)((int)&DAT_005d5328 + bVar3 + 1) & 4) == 0) {
      pbVar4 = param_1;
      bVar2 = bVar3;
      if (param_2 == bVar3) {
LAB_00542378:
        pbVar5 = pbVar4;
        bVar3 = bVar2;
      }
    }
    else {
      bVar2 = param_1[1];
      pbVar4 = param_1 + 1;
      if (bVar2 == 0) {
        bVar3 = bVar2;
        if (pbVar5 == (byte *)0x0) goto LAB_00542378;
      }
      else {
        uVar1 = CONCAT11(bVar3,bVar2);
        bVar3 = bVar2;
        if (param_2 == uVar1) {
          pbVar5 = param_1;
        }
      }
    }
    param_1 = pbVar4 + 1;
    if (bVar3 == 0) {
      FUN_0053cc30(0x19);
      return pbVar5;
    }
  } while( true );
}
