/* Rebuilt from lomse.exe FUN_004d1a80 @ 0x004d1a80 (773 bytes, __thiscall).
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
#define DAT_005d5800 (*(undefined4 *)0x005d5800)
#define FUN_004d4310 ((undefined4 (__thiscall *)(void *, char, int))0x004d4310)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define _DAT_0054dd18 (*(double *)0x0054dd18)
#define s_________0055e40c (*(char (*)[])0x0055e40c)
#define s___s__id__u__0055e420 (*(char (*)[])0x0055e420)
#define s__lt__lt_______gt__gt__0055e3f8 (*(char (*)[])0x0055e3f8)
#define s__operator__0055e3e4 (*(char (*)[])0x0055e3e4)
#define s__s__id__u__0055e414 (*(char (*)[])0x0055e414)

#define LOM_SELF_004d1a80 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall rb_004d1a80(void *this,uint param_1,float param_2,int param_3)

{
  double _gdbl;
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar2 = 0xffffffff;
  pcVar5 = &DAT_0055e434;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar6 + -uVar2;
  pcVar6 = (char *)&DAT_005d5800;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  switch(param_1 & 0xff) {
  case 0:
    pcVar5 = &DAT_0055e42c;
    break;
  case 1:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e364,__BC(uint, param_2));
    return &DAT_005d5800;
  case 2:
    _gdbl = (double)__BC(int, param_2) * _DAT_0054dd18;
    goto LAB_004d1b0b;
  default:
    goto switchD_004d1abd_caseD_3;
  case 4:
    _gdbl = (double)param_2;
LAB_004d1b0b:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e360,_gdbl); /* HAND: %g gets the whole double (Ghidra passed the low dword) */
    return &DAT_005d5800;
  case 5:
    if (param_3 == 0) {
      uVar2 = *(uint *)(*(int *)(*(int *)((int)this + 0x80) + __BC(int, param_2) * 4) + 4);
      if ((param_1 & 0x100) == 0) {
        FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055ce54,uVar2);
        return &DAT_005d5800;
      }
      FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e350,uVar2);
      return &DAT_005d5800;
    }
    uVar2 = *(uint *)(*(int *)(*(int *)((int)this + 0x80) + __BC(int, param_2) * 4) + 4);
    if ((param_1 & 0x100) == 0) {
      FUN_0053a090((undefined1 *)&DAT_005d5800,s__s__id__u__0055e414,uVar2);
      return &DAT_005d5800;
    }
    FUN_0053a090((undefined1 *)&DAT_005d5800,s___s__id__u__0055e420,uVar2);
    return &DAT_005d5800;
  case 6:
    if ((param_1 & 0x100) == 0) {
      uVar2 = 0xffffffff;
      pcVar5 = &DAT_0055e404;
      do {
        pcVar6 = pcVar5;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar5 = pcVar6 + -uVar2;
      pcVar6 = (char *)&DAT_005d5800;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      return &DAT_005d5800;
    }
    pcVar5 = s_________0055e40c;
    break;
  case 7:
    pcVar5 = s__lt__lt_______gt__gt__0055e3f8;
    break;
  case 8:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e3f0,__BC(uint, param_2));
    return &DAT_005d5800;
  case 9:
    pcVar5 = (char *)FUN_004d4310(this,(char)param_1,__BC(int, param_2));
    if (pcVar5 == (char *)0x0) {
      uVar2 = 0xffffffff;
      pcVar5 = &DAT_0055b438;
      do {
        pcVar6 = pcVar5;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar5 = pcVar6 + -uVar2;
      pcVar6 = (char *)&DAT_005d5800;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
    }
    else {
      uVar2 = 0xffffffff;
      do {
        pcVar6 = pcVar5;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar5 = pcVar6 + -uVar2;
      pcVar6 = (char *)&DAT_005d5800;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 == 0) goto switchD_004d1abd_caseD_3;
    uVar2 = 0xffffffff;
    pcVar5 = s__operator__0055e3e4;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar6 = pcVar6 + -uVar2;
    iVar4 = -1;
    pcVar5 = (char *)&DAT_005d5800;
    do {
      pcVar7 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    goto LAB_004d1d6f;
  case 10:
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_0055e3e0;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar6 + -uVar2;
    pcVar6 = (char *)&DAT_005d5800;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    return &DAT_005d5800;
  case 0xb:
    pcVar5 = &DAT_0055e3dc;
    break;
  case 0xc:
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_0055e3d8;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar6 + -uVar2;
    pcVar6 = (char *)&DAT_005d5800;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    return &DAT_005d5800;
  case 0xd:
    pcVar5 = &DAT_0055e3d4;
    break;
  case 0xe:
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_0055e3d0;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar6 + -uVar2;
    pcVar6 = (char *)&DAT_005d5800;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    return &DAT_005d5800;
  case 0xf:
    pcVar5 = &DAT_0055e3cc;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar6 + -uVar2;
  pcVar7 = (char *)&DAT_005d5800;
LAB_004d1d6f:
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
switchD_004d1abd_caseD_3:
  return &DAT_005d5800;
}
