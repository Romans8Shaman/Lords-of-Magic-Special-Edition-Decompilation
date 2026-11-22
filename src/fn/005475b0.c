/* Rebuilt from lomse.exe FUN_005475b0 @ 0x005475b0 (898 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0054faf8 (*(undefined4 *)0x0054faf8)
#define DAT_0054fafc (*(short *)0x0054fafc)
#define DAT_0054fafe (*(undefined1 *)0x0054fafe)
#define DAT_0054fb00 (*(undefined4 *)0x0054fb00)
#define DAT_0054fb04 (*(short *)0x0054fb04)
#define DAT_0054fb08 (*(undefined4 *)0x0054fb08)
#define DAT_0054fb0c (*(short *)0x0054fb0c)
#define DAT_0054fb10 (*(undefined4 *)0x0054fb10)
#define DAT_0054fb14 (*(short *)0x0054fb14)
#define DAT_0054fb16 (*(undefined1 *)0x0054fb16)
#define FUN_005473e0 ((undefined4 (__cdecl *)(uint *, uint *))0x005473e0)
#define FUN_00547450 ((undefined4 (__cdecl *)(uint *))0x00547450)
#define FUN_00547480 ((undefined4 (__cdecl *)(uint *))0x00547480)
#define FUN_005480b0 ((undefined4 (__cdecl *)(int *, int *))0x005480b0)
#define FUN_00548370 ((undefined4 (__cdecl *)(int *, uint, int))0x00548370)

#define LOM_SELF_005475b0 1
undefined4 __cdecl
rb_005475b0(uint volatile param_1, uint volatile param_2, uint volatile param_3, int volatile param_4, byte volatile param_5, short *volatile param_6)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_local_1c;
  typedef undefined1 _t_local_1b;
  typedef undefined1 _t_local_1a;
  typedef undefined1 _t_local_19;
  typedef undefined1 _t_local_18;
  typedef undefined1 _t_local_17;
  typedef undefined1 _t_local_16;
  typedef undefined1 _t_local_15;
  typedef undefined1 _t_local_14;
  typedef undefined1 _t_local_13;
  typedef undefined1 _t_local_12;
  typedef undefined1 _t_local_11;
  typedef undefined2 _t_local_10;
  typedef undefined4 _t_uStack_e;
  typedef undefined4 _t_uStack_a;
  typedef undefined1 _t_local_6;
  typedef char _t_cStack_5;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_1b (*(_t_local_1b *)(_fr + 0x5))
#define local_1a (*(_t_local_1a *)(_fr + 0x6))
#define local_19 (*(_t_local_19 *)(_fr + 0x7))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_17 (*(_t_local_17 *)(_fr + 0x9))
#define local_16 (*(_t_local_16 *)(_fr + 0xa))
#define local_15 (*(_t_local_15 *)(_fr + 0xb))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_13 (*(_t_local_13 *)(_fr + 0xd))
#define local_12 (*(_t_local_12 *)(_fr + 0xe))
#define local_11 (*(_t_local_11 *)(_fr + 0xf))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define uStack_e (*(_t_uStack_e *)(_fr + 0x12))
#define uStack_a (*(_t_uStack_a *)(_fr + 0x16))
#define local_6 (*(_t_local_6 *)(_fr + 0x1a))
#define cStack_5 (*(_t_cStack_5 *)(_fr + 0x1b))
  
  psVar1 = param_6;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xcc;
  local_15 = 0xcc;
  local_14 = 0xcc;
  local_13 = 0xcc;
  uVar6 = param_3 & 0x7fff;
  local_12 = 0xfb;
  local_11 = 0x3f;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar6 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
LAB_005477bf:
    *(undefined1 *)(psVar1 + 1) = 0x20;
    *(undefined1 *)((int)psVar1 + 3) = 1;
    *(undefined1 *)(psVar1 + 2) = 0x30;
    *(undefined1 *)((int)psVar1 + 5) = 0;
    return 1;
  }
  if ((short)uVar6 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 != 0x80000000) || (param_1 != 0)) && ((param_2 & 0x40000000) == 0)) {
      *(undefined4 *)(param_6 + 2) = DAT_0054fb10;
      param_6[4] = DAT_0054fb14;
      uVar4 = DAT_0054fb16;
      *(undefined1 *)((int)param_6 + 3) = 6;
      *(undefined1 *)(param_6 + 5) = uVar4;
      return 0;
    }
    if ((((param_3 & 0x8000) != 0) && (param_2 == 0xc0000000)) && (param_1 == 0)) {
      *(undefined4 *)(param_6 + 2) = DAT_0054fb08;
      sVar11 = DAT_0054fb0c;
      *(undefined1 *)((int)param_6 + 3) = 5;
      param_6[4] = sVar11;
      return 0;
    }
    if ((param_2 == 0x80000000) && (param_1 == 0)) {
      *(undefined4 *)(param_6 + 2) = DAT_0054fb00;
      sVar11 = DAT_0054fb04;
      *(undefined1 *)((int)param_6 + 3) = 5;
      param_6[4] = sVar11;
      return 0;
    }
    *(undefined4 *)(param_6 + 2) = DAT_0054faf8;
    param_6[4] = DAT_0054fafc;
    uVar4 = DAT_0054fafe;
    *(undefined1 *)((int)param_6 + 3) = 6;
    *(undefined1 *)(param_6 + 5) = uVar4;
    return 0;
  }
  local_6 = (undefined1)uVar6;
  cStack_5 = (char)(uVar6 >> 8);
  local_10 = 0;
  sVar11 = (short)(((uVar6 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar6 * 0x4d10 >>
                  0x10);
  uStack_a = param_2;
  uStack_e = param_1;
  FUN_00548370((int *)&local_10,-(int)sVar11,1);
  if (0x3ffe < CONCAT11(cStack_5,local_6)) {
    sVar11 = sVar11 + 1;
    FUN_005480b0((int *)&local_10,(int *)&local_1c);
  }
  *psVar1 = sVar11;
  if ((param_5 & 1) == 0) {
    iVar10 = param_4;
  }
  else {
    iVar10 = param_4 + sVar11;
    if (param_4 + sVar11 < 1) {
      *psVar1 = 0;
      goto LAB_005477bf;
    }
  }
  if (0x15 < iVar10) {
    iVar10 = 0x15;
  }
  uVar2 = CONCAT11(cStack_5,local_6);
  local_6 = 0;
  cStack_5 = '\0';
  iVar7 = 8;
  iVar12 = uVar2 - 0x3ffe;
  do {
    FUN_00547450((uint *)&local_10);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (iVar12 < 0) {
    for (uVar6 = -iVar12 & 0xff; uVar6 != 0; uVar6 = uVar6 - 1) {
      FUN_00547480((uint *)&local_10);
    }
  }
  psVar1 = psVar1 + 2;
  iVar10 = iVar10 + 1;
  psVar8 = psVar1;
  uVar6 = uStack_e;
  uVar3 = uStack_a;
  if (0 < iVar10) {
    do {
      (*(ushort *)((uchar *)&uStack_a + 2)) = (undefined2)(uVar3 >> 0x10);
      (*(ushort *)((uchar *)&uStack_a + 0)) = (undefined2)uVar3;
      (*(ushort *)((uchar *)&uStack_e + 2)) = (undefined2)(uVar6 >> 0x10);
      (*(ushort *)((uchar *)&uStack_e + 0)) = (undefined2)uVar6;
      param_1 = CONCAT22((undefined2)uStack_e,local_10);
      param_2 = CONCAT22((undefined2)uStack_a,(*(ushort *)((uchar *)&uStack_e + 2)));
      param_3 = CONCAT13(cStack_5,CONCAT12(local_6,(*(ushort *)((uchar *)&uStack_a + 2))));
      uStack_e = uVar6;
      uStack_a = uVar3;
      FUN_00547450((uint *)&local_10);
      FUN_00547450((uint *)&local_10);
      FUN_005473e0((uint *)&local_10,&param_1);
      FUN_00547450((uint *)&local_10);
      cVar5 = cStack_5 + '0';
      cStack_5 = '\0';
      *(char *)psVar8 = cVar5;
      psVar8 = (short *)((int)psVar8 + 1);
      iVar10 = iVar10 + -1;
      uVar6 = uStack_e;
      uVar3 = uStack_a;
    } while (iVar10 != 0);
  }
  psVar9 = psVar8 + -1;
  if (*(char *)((int)psVar8 + -1) < '5') {
    if (psVar1 <= psVar9) {
      do {
        if ((char)*psVar9 != '0') break;
        psVar9 = (short *)((int)psVar9 + -1);
      } while (psVar1 <= psVar9);
      if (psVar1 <= psVar9) goto LAB_00547916;
    }
    *(char *)psVar1 = '0';
    *param_6 = 0;
    *(undefined1 *)(param_6 + 1) = 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)((int)param_6 + 5) = 0;
    return 1;
  }
  if (psVar1 <= psVar9) {
    do {
      if ((char)*psVar9 != '9') break;
      *(char *)psVar9 = '0';
      psVar9 = (short *)((int)psVar9 + -1);
    } while (psVar1 <= psVar9);
    if (psVar1 <= psVar9) {
      *(char *)psVar9 = (char)*psVar9 + '\x01';
      goto LAB_00547916;
    }
  }
  psVar9 = (short *)((int)psVar9 + 1);
  *param_6 = *param_6 + 1;
  *(char *)psVar9 = *(char *)psVar9 + '\x01';
LAB_00547916:
  cVar5 = ((char)psVar9 - (char)param_6) + -3;
  *(char *)((int)param_6 + 3) = cVar5;
  *(undefined1 *)((int)param_6 + cVar5 + 4) = 0;
  return 1;
#undef local_1c
#undef local_1b
#undef local_1a
#undef local_19
#undef local_18
#undef local_17
#undef local_16
#undef local_15
#undef local_14
#undef local_13
#undef local_12
#undef local_11
#undef local_10
#undef uStack_e
#undef uStack_a
#undef local_6
#undef cStack_5
}
