/* Rebuilt from lomse.exe FUN_005343b0 @ 0x005343b0 (593 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00533ed0 ((undefined4 (__cdecl *)(int))0x00533ed0)
#define FUN_00534200 ((undefined4 (__cdecl *)(int *))0x00534200)
#define FUN_00534610 ((char * (__cdecl *)(int, uint))0x00534610)
#define FUN_005352a0 ((uint (__cdecl *)(int *, undefined1 *, int, int))0x005352a0)
#define FUN_00536360 ((undefined4 (__cdecl *)(int, int, int))0x00536360)

#define LOM_SELF_005343b0 1
uint __cdecl rb_005343b0(int *volatile param_1, int volatile param_2)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  uVar7 = 0;
  do {
    uVar5 = param_1[0x1b];
    if (uVar5 < 0x106) {
      FUN_00534200(param_1);
      uVar5 = param_1[0x1b];
      if ((uVar5 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar5 == 0) {
        iVar4 = param_1[0x15];
        if (iVar4 < 0) {
          puVar6 = (undefined1 *)0x0;
        }
        else {
          puVar6 = (undefined1 *)(param_1[0xc] + iVar4);
        }
        FUN_005352a0(param_1,puVar6,param_1[0x19] - iVar4,(uint)(param_2 == 4));
        param_1[0x15] = param_1[0x19];
        FUN_00533ed0(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return (param_2 != 4) - 1 & 2;
        }
        return (-(uint)(param_2 != 4) & 0xfffffffe) + 3;
      }
    }
    if (2 < uVar5) {
      uVar7 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
              (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
      param_1[0x10] = uVar7;
      uVar1 = *(ushort *)(param_1[0xf] + uVar7 * 2);
      uVar7 = (uint)uVar1;
      *(ushort *)(param_1[0xe] + (param_1[0xb] & param_1[0x19]) * 2) = uVar1;
      *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
    }
    if (((uVar7 != 0) && (param_1[0x19] - uVar7 <= param_1[9] - 0x106U)) && (param_1[0x20] != 2)) {
      pcVar3 = FUN_00534610((int)param_1,uVar7);
      param_1[0x16] = (int)pcVar3;
    }
    if ((uint)param_1[0x16] < 3) {
      iVar4 = FUN_00536360((int)param_1,0,(uint)*(byte *)(param_1[0xc] + param_1[0x19]));
      param_1[0x1b] = param_1[0x1b] + -1;
LAB_00534542:
      param_1[0x19] = param_1[0x19] + 1;
    }
    else {
      iVar4 = FUN_00536360((int)param_1,param_1[0x19] - param_1[0x1a],param_1[0x16] - 3);
      uVar5 = param_1[0x16];
      iVar2 = param_1[0x1b];
      param_1[0x1b] = iVar2 - uVar5;
      if ((uVar5 <= (uint)param_1[0x1e]) && (2 < iVar2 - uVar5)) {
        param_1[0x16] = uVar5 - 1;
        do {
          iVar2 = param_1[0x19];
          uVar5 = iVar2 + 1;
          param_1[0x19] = uVar5;
          uVar7 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
                  (uint)*(byte *)(iVar2 + 3 + param_1[0xc])) & param_1[0x13];
          param_1[0x10] = uVar7;
          uVar1 = *(ushort *)(param_1[0xf] + uVar7 * 2);
          uVar7 = (uint)uVar1;
          *(ushort *)(param_1[0xe] + (uVar5 & param_1[0xb]) * 2) = uVar1;
          *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
          iVar2 = param_1[0x16];
          param_1[0x16] = iVar2 + -1;
        } while (iVar2 + -1 != 0);
        goto LAB_00534542;
      }
      param_1[0x16] = 0;
      param_1[0x19] = param_1[0x19] + uVar5;
      uVar5 = (uint)*(byte *)(param_1[0xc] + param_1[0x19]);
      param_1[0x10] = uVar5;
      param_1[0x10] =
           (uVar5 << ((byte)param_1[0x14] & 0x1f) ^
           (uint)((byte *)(param_1[0xc] + param_1[0x19]))[1]) & param_1[0x13];
    }
    if (iVar4 != 0) {
      iVar4 = param_1[0x15];
      if (iVar4 < 0) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        puVar6 = (undefined1 *)(iVar4 + param_1[0xc]);
      }
      FUN_005352a0(param_1,puVar6,param_1[0x19] - iVar4,0);
      param_1[0x15] = param_1[0x19];
      FUN_00533ed0(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}
