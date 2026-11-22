/* Rebuilt from lomse.exe FUN_005352a0 @ 0x005352a0 (555 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00534e80 ((undefined4 (__cdecl *)(int))0x00534e80)
#define FUN_00534f70 ((undefined4 (__cdecl *)(int, undefined1 *, int, int))0x00534f70)
#define FUN_005354d0 ((undefined4 (__cdecl *)(int *, int *))0x005354d0)
#define FUN_00535a00 ((undefined4 (__cdecl *)(int *))0x00535a00)
#define FUN_00535b70 ((undefined4 (__cdecl *)(int, int, int, int))0x00535b70)
#define FUN_00536480 ((undefined4 (__cdecl *)(int, int, int))0x00536480)
#define FUN_005368d0 ((undefined4 (__cdecl *)(int))0x005368d0)
#define FUN_005369f0 ((undefined4 (__cdecl *)(int))0x005369f0)

#define LOM_SELF_005352a0 1
uint __cdecl rb_005352a0(int *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = 0;
  if (param_1[0x1f] < 1) {
    uVar5 = param_3 + 5;
  }
  else {
    if ((char)param_1[7] == '\x02') {
      FUN_005368d0((int)param_1);
    }
    FUN_005354d0(param_1,param_1 + 0x2c4);
    FUN_005354d0(param_1,param_1 + 0x2c7);
    iVar3 = FUN_00535a00(param_1);
    uVar6 = param_1[0x5a8] + 10U >> 3;
    uVar5 = param_1[0x5a9] + 10U >> 3;
    if (uVar6 < uVar5) goto LAB_00535310;
  }
  uVar6 = uVar5;
LAB_00535310:
  if ((uVar6 < param_3 + 4U) || (param_2 == (undefined1 *)0x0)) {
    iVar2 = param_1[0x5ae];
    bVar4 = (byte)iVar2;
    if (uVar5 == uVar6) {
      iVar3 = param_4 + 2;
      if (iVar2 < 0xe) {
        *(ushort *)(param_1 + 0x5ad) =
             *(ushort *)(param_1 + 0x5ad) | (ushort)(iVar3 << (bVar4 & 0x1f));
        param_1[0x5ae] = iVar2 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ad) =
             *(ushort *)(param_1 + 0x5ad) | (ushort)(iVar3 << (bVar4 & 0x1f));
        *(char *)(param_1[5] + param_1[2]) = (char)param_1[0x5ad];
        iVar2 = param_1[5];
        param_1[5] = iVar2 + 1;
        *(undefined1 *)(iVar2 + 1 + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b5);
        iVar2 = param_1[0x5ae];
        param_1[5] = param_1[5] + 1;
        param_1[0x5ae] = iVar2 + -0xd;
        *(ushort *)(param_1 + 0x5ad) = (ushort)iVar3 >> (0x10U - (char)iVar2 & 0x1f);
      }
      FUN_00536480((int)param_1,0x5d3bd8,0x5d4058);
      iVar3 = param_1[0x5a9];
    }
    else {
      iVar1 = param_4 + 4;
      if (iVar2 < 0xe) {
        *(ushort *)(param_1 + 0x5ad) =
             *(ushort *)(param_1 + 0x5ad) | (ushort)(iVar1 << (bVar4 & 0x1f));
        param_1[0x5ae] = iVar2 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ad) =
             *(ushort *)(param_1 + 0x5ad) | (ushort)(iVar1 << (bVar4 & 0x1f));
        *(char *)(param_1[5] + param_1[2]) = (char)param_1[0x5ad];
        iVar2 = param_1[5];
        param_1[5] = iVar2 + 1;
        *(undefined1 *)(iVar2 + 1 + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b5);
        iVar2 = param_1[0x5ae];
        param_1[5] = param_1[5] + 1;
        param_1[0x5ae] = iVar2 + -0xd;
        *(ushort *)(param_1 + 0x5ad) = (ushort)iVar1 >> (0x10U - (char)iVar2 & 0x1f);
      }
      FUN_00535b70((int)param_1,param_1[0x2c5] + 1,param_1[0x2c8] + 1,iVar3 + 1);
      FUN_00536480((int)param_1,(int)(param_1 + 0x23),(int)(param_1 + 0x260));
      iVar3 = param_1[0x5a8];
    }
    param_1[0x5aa] = param_1[0x5aa] + iVar3 + 3;
  }
  else {
    FUN_00534f70((int)param_1,param_2,param_3,param_4);
  }
  FUN_00534e80((int)param_1);
  if (param_4 != 0) {
    FUN_005369f0((int)param_1);
    param_1[0x5aa] = param_1[0x5aa] + 7;
  }
  return (uint)param_1[0x5aa] >> 3;
}
