/* Rebuilt from lomse.exe FUN_004d4550 @ 0x004d4550 (770 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b438 (*(undefined1 *)0x0055b438)
#define DAT_0055ce54 (*(undefined *)0x0055ce54)
#define DAT_0055e350 (*(undefined *)0x0055e350)
#define DAT_0055e360 (*(undefined *)0x0055e360)
#define DAT_0055e364 (*(undefined *)0x0055e364)
#define DAT_0055e3cc (*(undefined1 *)0x0055e3cc)
#define DAT_0055e3d0 (*(undefined1 *)0x0055e3d0)
#define DAT_0055e3d4 (*(undefined1 *)0x0055e3d4)
#define DAT_0055e3d8 (*(undefined1 *)0x0055e3d8)
#define DAT_0055e3dc (*(undefined1 *)0x0055e3dc)
#define DAT_0055e3e0 (*(undefined1 *)0x0055e3e0)
#define DAT_0055e3f0 (*(undefined *)0x0055e3f0)
#define DAT_0055e404 (*(undefined1 *)0x0055e404)
#define DAT_0055e42c (*(undefined1 *)0x0055e42c)
#define DAT_0055e434 (*(undefined1 *)0x0055e434)
#define DAT_0055e6ac (*(undefined1 *)0x0055e6ac)
#define DAT_005d5800 (*(undefined4 *)0x005d5800)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4310 ((undefined4 (__thiscall *)(void *, char, int))0x004d4310)
#define FUN_004d4380 ((int (__cdecl *)(int))0x004d4380)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define _DAT_0054dd18 (*(double *)0x0054dd18)
#define s_________0055e40c (*(char (*)[])0x0055e40c)
#define s__lt__lt_______gt__gt__0055e3f8 (*(char (*)[])0x0055e3f8)

#define LOM_SELF_004d4550 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall rb_004d4550(void *param_1)

{
  char cVar1;
  float fVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  uchar _fr[0x200] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_1f4[500];
#define local_1f4 (*(_t_local_1f4 *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x90) == 0x16) {
    *(undefined4 *)((int)param_1 + 0xa4) = 1;
    return 0x16;
  }
  *(int *)((int)param_1 + 0xa78) = *(int *)((int)param_1 + 0xa78) + 1;
  pcVar3 = (char *)FUN_004d4380(*(int *)((int)param_1 + 0x90));
  uVar5 = 0xffffffff;
  do {
    pcVar10 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar10 + -uVar5;
  pcVar10 = local_1f4;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  iVar8 = *(int *)((int)param_1 + 0x90);
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  if (iVar8 != 0x11) goto LAB_004d483c;
  uVar5 = 0xffffffff;
  fVar2 = *(float *)((int)param_1 + 0xa0);
  pcVar3 = &DAT_0055e434;
  do {
    pcVar10 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  uVar6 = *(uint *)((int)param_1 + 0x9c);
  pcVar3 = pcVar10 + -uVar5;
  pcVar10 = (char *)&DAT_005d5800;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  switch(uVar6 & 0xff) {
  case 0:
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0055e42c;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 1:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e364,__BC(uint, fVar2));
    goto switchD_004d4606_caseD_3;
  case 2:
    uVar5 = SUB84((double)__BC(int, fVar2) * _DAT_0054dd18,0);
    goto LAB_004d4666;
  default:
    goto switchD_004d4606_caseD_3;
  case 4:
    uVar5 = SUB84((double)fVar2,0);
LAB_004d4666:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e360,uVar5);
    goto switchD_004d4606_caseD_3;
  case 5:
    uVar5 = *(uint *)(*(int *)(*(int *)((int)param_1 + 0x80) + __BC(int, fVar2) * 4) + 4);
    if ((uVar6 & 0x100) == 0) {
      FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055ce54,uVar5);
    }
    else {
      FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e350,uVar5);
    }
    goto switchD_004d4606_caseD_3;
  case 6:
    if ((uVar6 & 0x100) != 0) {
      pcVar3 = s_________0055e40c;
      goto LAB_004d47c1;
    }
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0055e404;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 7:
    pcVar3 = s__lt__lt_______gt__gt__0055e3f8;
    goto LAB_004d47c1;
  case 8:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e3f0,__BC(uint, fVar2));
    goto switchD_004d4606_caseD_3;
  case 9:
    pcVar3 = (char *)FUN_004d4310(param_1,(char)uVar6,__BC(int, fVar2));
    if (pcVar3 != (char *)0x0) goto LAB_004d47c1;
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0055b438;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 10:
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0055e3e0;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 0xb:
    pcVar3 = &DAT_0055e3dc;
    goto LAB_004d47c1;
  case 0xc:
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0055e3d8;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 0xd:
    pcVar3 = &DAT_0055e3d4;
    goto LAB_004d47c1;
  case 0xe:
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_0055e3d0;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 0xf:
    pcVar3 = &DAT_0055e3cc;
LAB_004d47c1:
    uVar5 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar3 = pcVar10 + -uVar5;
    pcVar10 = (char *)&DAT_005d5800;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
switchD_004d4606_caseD_3:
  uVar5 = 0xffffffff;
  pcVar3 = &DAT_0055e6ac;
  do {
    pcVar10 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar8 = -1;
  pcVar3 = local_1f4;
  do {
    pcVar9 = pcVar3;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar3 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = (char *)&DAT_005d5800;
  do {
    pcVar10 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar8 = -1;
  pcVar3 = local_1f4;
  do {
    pcVar9 = pcVar3;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar3 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
LAB_004d483c:
  uVar4 = FUN_004d41c0(param_1,local_1f4);
  return uVar4;
#undef local_1f4
}
