/* Rebuilt from lomse.exe FUN_00546310 @ 0x00546310 (617 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00577ba4 (*(int *)0x00577ba4)
#define DAT_00577c38 (*(uint *)0x00577c38)
#define DAT_00577c3c (*(int *)0x00577c3c)
#define DAT_00577c40 (*(int *)0x00577c40)
#define DAT_00577c48 (*(uint *)0x00577c48)
#define DAT_00577c4c (*(int *)0x00577c4c)
#define DAT_00577c50 (*(int *)0x00577c50)
#define DAT_005d56e8 (*(int *)0x005d56e8)
#define DAT_005d5734 (*(short *)0x005d5734)
#define DAT_005d5736 (*(ushort *)0x005d5736)
#define DAT_005d5738 (*(uint *)0x005d5738)
#define DAT_005d573c (*(uint *)0x005d573c)
#define DAT_005d5740 (*(uint *)0x005d5740)
#define DAT_005d5788 (*(short *)0x005d5788)
#define DAT_005d578a (*(ushort *)0x005d578a)
#define DAT_005d578c (*(uint *)0x005d578c)
#define DAT_005d5790 (*(uint *)0x005d5790)
#define DAT_005d5794 (*(uint *)0x005d5794)
#define FUN_00546580 ((undefined4 (__cdecl *)(int, int, uint, int, int, int, int, int, int, int, int))0x00546580)

#define LOM_SELF_00546310 1
undefined4 __cdecl rb_00546310(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (DAT_00577ba4 == 0) {
    return 0;
  }
  uVar7 = param_1[5];
  if ((uVar7 == DAT_00577c38) && (uVar7 == DAT_00577c48)) goto LAB_005464e4;
  if (DAT_005d56e8 == 0) {
    FUN_00546580(1,1,uVar7,4,1,0,0,2,0,0,0);
    uVar7 = param_1[5];
    uVar11 = 0;
    uVar3 = 0;
    uVar10 = 0;
    uVar4 = 2;
    uVar1 = 0;
    uVar9 = 5;
    uVar8 = 10;
LAB_005464d8:
    uVar5 = 0;
    iVar6 = 1;
  }
  else {
    if (DAT_005d5788 != 0) {
      uVar10 = (uint)(*(ushort *)((uchar *)&DAT_005d578c + 2));
      uVar3 = 0;
      uVar1 = 0;
    }
    else {
      uVar3 = DAT_005d578c & 0xffff;
      uVar10 = 0;
      uVar1 = (uint)(*(ushort *)((uchar *)&DAT_005d578c + 2));
    }
    FUN_00546580(1,(uint)(DAT_005d5788 == 0),uVar7,(uint)DAT_005d578a,uVar1,uVar3,uVar10,
                 DAT_005d5790 & 0xffff,DAT_005d5790 >> 0x10,DAT_005d5794 & 0xffff,
                 DAT_005d5794 >> 0x10);
    if (DAT_005d5734 == 0) {
      uVar11 = (uint)(*(ushort *)((uchar *)&DAT_005d5740 + 2));
      uVar3 = DAT_005d5740 & 0xffff;
      uVar10 = (uint)(*(ushort *)((uchar *)&DAT_005d573c + 2));
      uVar4 = DAT_005d573c & 0xffff;
      uVar1 = DAT_005d5738 & 0xffff;
      uVar9 = (uint)(*(ushort *)((uchar *)&DAT_005d5738 + 2));
      uVar8 = (uint)DAT_005d5736;
      uVar7 = param_1[5];
      goto LAB_005464d8;
    }
    uVar11 = (uint)(*(ushort *)((uchar *)&DAT_005d5740 + 2));
    uVar3 = DAT_005d5740 & 0xffff;
    uVar10 = (uint)(*(ushort *)((uchar *)&DAT_005d573c + 2));
    uVar5 = (uint)(*(ushort *)((uchar *)&DAT_005d5738 + 2));
    uVar4 = DAT_005d573c & 0xffff;
    uVar7 = param_1[5];
    uVar8 = (uint)DAT_005d5736;
    uVar1 = 0;
    uVar9 = 0;
    iVar6 = 0;
  }
  FUN_00546580(0,iVar6,uVar7,uVar8,uVar9,uVar1,uVar5,uVar4,uVar10,uVar3,uVar11);
LAB_005464e4:
  iVar6 = param_1[7];
  if (DAT_00577c3c < DAT_00577c4c) {
    if ((iVar6 < DAT_00577c3c) || (DAT_00577c4c < iVar6)) {
      return 0;
    }
    if ((DAT_00577c3c < iVar6) && (iVar6 < DAT_00577c4c)) {
      return 1;
    }
  }
  else {
    if ((iVar6 < DAT_00577c4c) || (DAT_00577c3c < iVar6)) {
      return 1;
    }
    if ((DAT_00577c4c < iVar6) && (iVar6 < DAT_00577c3c)) {
      return 0;
    }
  }
  iVar2 = (*param_1 + (param_1[1] + param_1[2] * 0x3c) * 0x3c) * 1000;
  if (iVar6 == DAT_00577c3c) {
    return (uint)(DAT_00577c40 <= iVar2);
  }
  return (uint)(iVar2 < DAT_00577c50);
}
