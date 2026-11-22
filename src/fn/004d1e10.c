/* Rebuilt from lomse.exe FUN_004d1e10 @ 0x004d1e10 (769 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b438 (*(undefined1 *)0x0055b438)
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
#define FUN_004d1dd0 ((undefined4 (__thiscall *)(void *, undefined4))0x004d1dd0)
#define FUN_004d4310 ((undefined4 (__thiscall *)(void *, char, int))0x004d4310)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define _DAT_0054dd18 (*(double *)0x0054dd18)
#define s_________0055e40c (*(char (*)[])0x0055e40c)
#define s___s__id__u__0055e420 (*(char (*)[])0x0055e420)
#define s__lt__lt_______gt__gt__0055e3f8 (*(char (*)[])0x0055e3f8)
#define s__operator__0055e3e4 (*(char (*)[])0x0055e3e4)
#define s__s__id__u__0055e414 (*(char (*)[])0x0055e414)

#define LOM_SELF_004d1e10 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004d1e10(void *param_1)

{
  double _gdbl;
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar5 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    uVar5 = 0;
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_0055e434;
  do {
    pcVar8 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar8 + -uVar3;
  pcVar8 = (char *)&DAT_005d5800;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  switch(uVar5 & 0xff) {
  case 0:
    pcVar7 = &DAT_0055e42c;
    goto LAB_004d20dd;
  case 1:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e364,__BC(uint, local_4));
    FUN_004d1dd0(param_1,&DAT_005d5800);
    return;
  case 2:
    _gdbl = (double)__BC(int, local_4) * _DAT_0054dd18;
    goto LAB_004d1ee4;
  default:
    goto switchD_004d1e90_caseD_3;
  case 4:
    _gdbl = (double)local_4;
LAB_004d1ee4:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e360,_gdbl); /* HAND: %g gets the whole double (Ghidra passed the low dword) */
    FUN_004d1dd0(param_1,&DAT_005d5800);
    return;
  case 5:
    uVar3 = *(uint *)(*(int *)(*(int *)((int)param_1 + 0x80) + __BC(int, local_4) * 4) + 4);
    if ((uVar5 & 0x100) == 0) {
      FUN_0053a090((undefined1 *)&DAT_005d5800,s__s__id__u__0055e414,uVar3);
      FUN_004d1dd0(param_1,&DAT_005d5800);
      return;
    }
    FUN_0053a090((undefined1 *)&DAT_005d5800,s___s__id__u__0055e420,uVar3);
    FUN_004d1dd0(param_1,&DAT_005d5800);
    return;
  case 6:
    if ((uVar5 & 0x100) == 0) {
      pcVar7 = &DAT_0055e404;
      goto LAB_004d20dd;
    }
    uVar5 = 0xffffffff;
    pcVar7 = s_________0055e40c;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar7 = (char *)&DAT_005d5800;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    break;
  case 7:
    uVar5 = 0xffffffff;
    pcVar7 = s__lt__lt_______gt__gt__0055e3f8;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar7 = (char *)&DAT_005d5800;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    break;
  case 8:
    FUN_0053a090((undefined1 *)&DAT_005d5800,&DAT_0055e3f0,__BC(uint, local_4));
    FUN_004d1dd0(param_1,&DAT_005d5800);
    return;
  case 9:
    pcVar7 = (char *)FUN_004d4310(param_1,(char)uVar5,__BC(int, local_4));
    if (pcVar7 == (char *)0x0) {
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_0055b438;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = (char *)&DAT_005d5800;
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
    }
    else {
      uVar5 = 0xffffffff;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = (char *)&DAT_005d5800;
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar7 = s__operator__0055e3e4;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    iVar2 = -1;
    pcVar6 = (char *)&DAT_005d5800;
    do {
      pcVar7 = pcVar6;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    goto LAB_004d20f1;
  case 10:
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_0055e3e0;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar7 = (char *)&DAT_005d5800;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    break;
  case 0xb:
    pcVar7 = &DAT_0055e3dc;
    goto LAB_004d20dd;
  case 0xc:
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_0055e3d8;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar7 = (char *)&DAT_005d5800;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    break;
  case 0xd:
    pcVar7 = &DAT_0055e3d4;
    goto LAB_004d20dd;
  case 0xe:
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_0055e3d0;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar7 = (char *)&DAT_005d5800;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    break;
  case 0xf:
    pcVar7 = &DAT_0055e3cc;
LAB_004d20dd:
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar7 = (char *)&DAT_005d5800;
LAB_004d20f1:
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
switchD_004d1e90_caseD_3:
  FUN_004d1dd0(param_1,&DAT_005d5800);
  return;
#undef local_4
}
