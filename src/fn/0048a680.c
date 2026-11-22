/* Rebuilt from lomse.exe FUN_0048a680 @ 0x0048a680 (6099 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b578 (*(int *)0x0055b578)
#define DAT_00583560 (*(int *)0x00583560)
#define DAT_0058357c (*(int *)0x0058357c)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00584c18 (*(int *)0x00584c18)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aa64c (*(undefined *)0x005aa64c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005cd358 (*(undefined *)0x005cd358)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define DAT_005d2ca0 (*(int *)0x005d2ca0)
#define FUN_00405440 ((undefined4 (__thiscall *)(void *, int *))0x00405440)
#define FUN_0040af20 ((undefined4 (__thiscall *)(void *, byte *))0x0040af20)
#define FUN_0040c940 ((undefined4 (__stdcall *)(undefined4 *))0x0040c940)
#define FUN_0040f0b0 ((undefined4 (__stdcall *)(int *))0x0040f0b0)
#define FUN_00411220 ((undefined4 (__thiscall *)(void *, int *))0x00411220)
#define FUN_0041c510 ((undefined4 (__thiscall *)(void *, int *))0x0041c510)
#define FUN_0041cad0 ((undefined4 (__thiscall *)(void *, int *))0x0041cad0)
#define FUN_0041e0d0 ((undefined4 (__thiscall *)(void *, int *))0x0041e0d0)
#define FUN_0041e250 ((undefined4 (__thiscall *)(void *, int *))0x0041e250)
#define FUN_0041ea80 ((undefined4 (__stdcall *)(int *))0x0041ea80)
#define FUN_0041f810 ((undefined4 (__stdcall *)(int *))0x0041f810)
#define FUN_004223f0 ((undefined4 (__thiscall *)(void *, int *))0x004223f0)
#define FUN_00424580 ((undefined4 (__thiscall *)(void *, int *))0x00424580)
#define FUN_00427610 ((undefined4 (__stdcall *)(int *))0x00427610)
#define FUN_004295d0 ((undefined4 (__thiscall *)(void *, int *))0x004295d0)
#define FUN_00429620 ((undefined4 (__stdcall *)(undefined4 *))0x00429620)
#define FUN_00429810 ((undefined4 (__thiscall *)(void *, int *))0x00429810)
#define FUN_00431a60 ((undefined4 (__thiscall *)(void *, int *))0x00431a60)
#define FUN_0043c4e0 ((undefined4 (__thiscall *)(void *, int *))0x0043c4e0)
#define FUN_0043dcf0 ((undefined4 (__thiscall *)(void *, int *))0x0043dcf0)
#define FUN_00440c80 ((undefined4 (__thiscall *)(void *, int *))0x00440c80)
#define FUN_00449b10 ((undefined4 (__thiscall *)(void *, int *))0x00449b10)
#define FUN_0044ecd0 ((undefined4 (__thiscall *)(void *, int *))0x0044ecd0)
#define FUN_0044f280 ((undefined4 (__thiscall *)(void *, int *))0x0044f280)
#define FUN_0044f440 ((undefined4 (__thiscall *)(void *, int *))0x0044f440)
#define FUN_0044f4e0 ((undefined4 (__thiscall *)(void *, int *))0x0044f4e0)
#define FUN_0044f510 ((undefined4 (__thiscall *)(void *, int *))0x0044f510)
#define FUN_0044ffd0 ((undefined4 (__thiscall *)(void *, int *))0x0044ffd0)
#define FUN_004511a0 ((undefined4 (__thiscall *)(void *, int *))0x004511a0)
#define FUN_004512b0 ((undefined4 (__thiscall *)(void *, int *))0x004512b0)
#define FUN_00451e10 ((undefined4 (__stdcall *)(int *))0x00451e10)
#define FUN_0045b550 ((undefined4 (__thiscall *)(void *, int *))0x0045b550)
#define FUN_0045c830 ((undefined4 (__fastcall *)(void *, undefined4, undefined4))0x0045c830)
#define FUN_0045cf70 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0045cf70)
#define FUN_00461020 ((undefined4 (__thiscall *)(void *, int *))0x00461020)
#define FUN_0047c610 ((undefined4 (__thiscall *)(void *, int *))0x0047c610)
#define FUN_004805b0 ((undefined4 (__thiscall *)(void *, int *))0x004805b0)
#define FUN_00480620 ((undefined4 (__thiscall *)(void *, int *))0x00480620)
#define FUN_00480650 ((undefined4 (__thiscall *)(void *, int *))0x00480650)
#define FUN_00480680 ((undefined4 (__thiscall *)(void *, int *))0x00480680)
#define FUN_004808e0 ((undefined4 (__thiscall *)(void *, int *))0x004808e0)
#define FUN_00480f10 ((undefined4 (__thiscall *)(void *, int *))0x00480f10)
#define FUN_00480f50 ((undefined4 (__thiscall *)(void *, int *))0x00480f50)
#define FUN_00481a10 ((undefined4 (__thiscall *)(void *, undefined4))0x00481a10)
#define FUN_00482800 ((undefined4 (__thiscall *)(void *, char *))0x00482800)
#define FUN_00482830 ((undefined4 (__thiscall *)(void *, int *))0x00482830)
#define FUN_004829b0 ((undefined4 (__thiscall *)(void *, int *))0x004829b0)
#define FUN_00483e70 ((undefined4 (__thiscall *)(void *, DWORD *))0x00483e70)
#define FUN_00483f30 ((undefined4 (__thiscall *)(void *, int *))0x00483f30)
#define FUN_00484030 ((undefined4 (__stdcall *)(int))0x00484030)
#define FUN_00484090 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x00484090)
#define FUN_004842b0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004842b0)
#define FUN_00484360 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00484360)
#define FUN_004843b0 ((undefined4 (__stdcall *)(int *))0x004843b0)
#define FUN_00487d50 ((undefined4 (__stdcall *)(uint *))0x00487d50)
#define FUN_00487e10 ((undefined4 (__stdcall *)(uint *))0x00487e10)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_0048cdb0 ((undefined4 (__stdcall *)(void))0x0048cdb0)
#define FUN_004a1ad0 ((undefined4 (__thiscall *)(void *, char *))0x004a1ad0)
#define FUN_004a59d0 ((undefined4 (__thiscall *)(void *, int, int, undefined4))0x004a59d0)
#define FUN_004a5cb0 ((undefined4 (__thiscall *)(void *, int, int, int))0x004a5cb0)
#define FUN_004a6200 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4))0x004a6200)
#define FUN_004a6490 ((undefined4 (__thiscall *)(void *, int, int))0x004a6490)
#define FUN_004ad840 ((bool (__fastcall *)(int, undefined4, undefined4))0x004ad840)
#define FUN_004b1db0 ((undefined * (__thiscall *)(void *, undefined1))0x004b1db0)
#define FUN_004b2390 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004b2390)
#define FUN_004b2440 ((undefined4 (__thiscall *)(void *, int *))0x004b2440)
#define FUN_004b4c20 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x004b4c20)
#define FUN_004b4dc0 ((undefined4 (__thiscall *)(void *, int *))0x004b4dc0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b8e80 ((undefined4 (__thiscall *)(void *, int *))0x004b8e80)
#define FUN_004b9210 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004b9210)
#define FUN_004b9250 ((undefined4 (__stdcall *)(int *))0x004b9250)
#define FUN_004b94f0 ((undefined4 (__stdcall *)(undefined4 *))0x004b94f0)
#define FUN_004bbd00 ((undefined4 (__thiscall *)(void *, int *))0x004bbd00)
#define FUN_004bec20 ((undefined4 (__thiscall *)(void *, int *))0x004bec20)
#define FUN_004c0400 ((undefined4 (__thiscall *)(void *, int *))0x004c0400)
#define FUN_004c1180 ((undefined4 (__thiscall *)(void *, int *))0x004c1180)
#define FUN_004c13a0 ((undefined4 (__thiscall *)(void *, int *))0x004c13a0)
#define FUN_004c1a30 ((undefined4 (__thiscall *)(void *, int *))0x004c1a30)
#define FUN_004c1ed0 ((undefined4 (__thiscall *)(void *, int *))0x004c1ed0)
#define FUN_004c25a0 ((undefined4 (__thiscall *)(void *, int *))0x004c25a0)
#define FUN_004c2c80 ((undefined4 (__stdcall *)(int *))0x004c2c80)
#define FUN_004c8d80 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c8d80)
#define FUN_004ecdd0 ((undefined4 (__stdcall *)(int *))0x004ecdd0)
#define FUN_004ed170 ((undefined4 (__thiscall *)(void *, int *))0x004ed170)
#define FUN_004f0910 ((undefined4 (__thiscall *)(void *, int *))0x004f0910)
#define FUN_00504fb0 ((undefined4 (__thiscall *)(void *, int, int))0x00504fb0)
#define FUN_005072f0 ((undefined4 (__thiscall *)(void *, int *))0x005072f0)
#define FUN_00507b60 ((undefined4 (__thiscall *)(void *, int *))0x00507b60)
#define FUN_00508a60 ((undefined4 (__stdcall *)(int *))0x00508a60)
#define FUN_0050d830 ((undefined4 (__thiscall *)(void *, int *))0x0050d830)
#define FUN_0050de90 ((undefined4 (__thiscall *)(void *, int *))0x0050de90)
#define FUN_00527920 ((undefined4 (__thiscall *)(void *, int *))0x00527920)
#define FUN_005303f0 ((undefined4 (__thiscall *)(void *, int *))0x005303f0)
#define FUN_00530470 ((undefined4 (__stdcall *)(int *))0x00530470)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_0048a680 1
undefined4 __fastcall rb_0048a680(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined4 unused_reg_1;
  
  if (DAT_005d2ca0 == 0) {
    FUN_0048c2b0((int)param_1);
    unused_reg_1 = 0;
    if ((DAT_005d1e84 != 0) && (1 < *(int *)(DAT_005d1e84 + 0x100))) {
      FUN_004b7dd0(DAT_005d1e84);
      unused_reg_1 = 0;
    }
    iVar4 = DAT_005d1e84;
    switch(*(undefined1 *)(param_1 + 1)) {
    case 1:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004a59d0(&DAT_005ae958,*(int *)((int)param_1 + 0x15),*(int *)((int)param_1 + 0x19),
                     *(undefined4 *)((int)param_1 + 0x1d));
      }
      break;
    case 2:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004a5cb0(&DAT_005ae958,*(int *)((int)param_1 + 0x15),*(int *)((int)param_1 + 0x19),
                     *(int *)((int)param_1 + 0x1d));
      }
      break;
    case 3:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004805b0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 4:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00480620(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 5:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00480650(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 6:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00480680(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 7:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0041e0d0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 8:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c1ed0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 9:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c25a0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 10:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0041e250(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0xb:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00527920(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0xc:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004ecdd0((int *)((int)param_1 + 0x15));
      }
      break;
    case 0xd:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004808e0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0xe:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0047c610(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0xf:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00424580(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x10:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00480f10(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x11:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c1a30(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x12:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_005072f0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x13:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00507b60(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x14:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00508a60((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x15:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c13a0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x16:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c2c80((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x17:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c1180(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x18:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00480f50(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x19:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0050d830(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x1a:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0050de90(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x1b:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004f0910(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x1c:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004295d0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x1d:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00429620((undefined4 *)((int)param_1 + 0x15));
      }
      break;
    case 0x1e:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00429810(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x1f:
      FUN_00482800(&DAT_005aa12c,(char *)((int)param_1 + 0x15));
      break;
    case 0x20:
      FUN_00482830(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      break;
    case 0x21:
      FUN_004829b0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      break;
    case 0x23:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004a6200(&DAT_005ae958,*(int *)((int)param_1 + 0x15),*(undefined4 *)((int)param_1 + 0x19),
                     *(undefined4 *)((int)param_1 + 0x1d));
      }
      break;
    case 0x24:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004a6490(&DAT_005ae958,*(int *)((int)param_1 + 0x15),*(int *)((int)param_1 + 0x19));
      }
      break;
    case 0x25:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0044ecd0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x26:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0043c4e0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x27:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0044ffd0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x28:
      FUN_00427610((int *)((int)param_1 + 0x15));
      break;
    case 0x29:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00451e10((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x2a:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004bec20(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x2b:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0044f280(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x2c:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0044f440(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x2d:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0044f4e0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x2e:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0043dcf0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x2f:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00449b10(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x30:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0044f510(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x31:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0045b550(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x32:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0045cf70(&DAT_005aa12c,(undefined4 *)((int)param_1 + 0x15));
      }
      break;
    case 0x33:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004a1ad0(&DAT_005aa12c,(char *)((int)param_1 + 0x15));
      }
      break;
    case 0x34:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0041c510(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x35:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0041cad0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x36:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004512b0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x37:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004511a0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x38:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00440c80(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x39:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00431a60(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x3a:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84),
         unused_reg_1 = 0, iVar2 == iVar3)) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0045c830(&DAT_005aa12c,unused_reg_1,(int)param_1 + 0x15);
      }
      break;
    case 0x3b:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0041f810((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x3c:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0041ea80((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x3e:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0048cdb0();
      }
      break;
    case 0x3f:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        op_sunlight();
      }
      break;
    case 0x40:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        op_sunlight();
      }
      break;
    case 0x41:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00461020(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x42:
      FUN_00481a10(&DAT_005aa12c,*(undefined4 *)((int)param_1 + 0x15));
      break;
    case 0x43:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84),
         unused_reg_1 = 0, iVar2 == iVar3)) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004ad840(0x5aa12c,unused_reg_1,(int)param_1 + 0x15);
      }
      break;
    case 0x44:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00405440(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x45:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0040af20(&DAT_005aa12c,(byte *)((int)param_1 + 0x15));
      }
      break;
    case 0x46:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004ed170(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x47:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004bbd00(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x48:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004b9210(&DAT_005aa12c,(undefined4 *)((int)param_1 + 0x15));
      }
      break;
    case 0x49:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004b9250((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x4b:
      FUN_004c8d80(&DAT_005aa12c,(undefined4 *)((int)param_1 + 0x15));
      break;
    case 0x4c:
      FUN_004842b0(&DAT_005aa12c,(undefined4 *)((int)param_1 + 0x15));
      break;
    case 0x4d:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c0400(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x4e:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004b8e80(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x4f:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004b94f0((undefined4 *)((int)param_1 + 0x15));
      }
      break;
    case 0x50:
      if (DAT_0055b578 + *(int *)((int)param_1 + 0x19) < DAT_00583560) {
        DAT_0058357c = (DAT_00583560 - *(int *)((int)param_1 + 0x19)) * 2;
      }
      break;
    case 0x51:
      FUN_00484360(&DAT_005aa12c,(undefined4 *)((int)param_1 + 0x15));
      break;
    case 0x52:
      FUN_004843b0((int *)((int)param_1 + 0x15));
      break;
    case 0x53:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004b2440(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x54:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_005303f0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x55:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00530470((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x56:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00487d50((uint *)((int)param_1 + 0x15));
      }
      break;
    case 0x57:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00487e10((uint *)((int)param_1 + 0x15));
      }
      break;
    case 0x58:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004223f0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x59:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004b2390(&DAT_005aa12c,(undefined4 *)((int)param_1 + 0x15));
      }
      break;
    case 0x5a:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0040c940((undefined4 *)((int)param_1 + 0x15));
      }
      break;
    case 0x5b:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0040f0b0((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x5c:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00411220(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x5d:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00483f30(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x5e:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00483e70(&DAT_005aa12c,(DWORD *)((int)param_1 + 0x15));
      }
      break;
    case 0x5f:
      FUN_004b4dc0(&DAT_005cd358,(int *)((int)param_1 + 0x15));
      break;
    case 0x60:
      FUN_00484090(0x5aa12c,unused_reg_1,(int)param_1 + 0x15);
      break;
    case 0x61:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00484030((int)param_1 + 0x15);
      }
    }
    if (DAT_005d2ca0 == 0) {
      switch(*(byte *)(param_1 + 1)) {
      case 0xd:
      case 0x18:
      case 0x27:
      case 0x28:
      case 0x2a:
      case 0x31:
      case 0x32:
      case 0x41:
      case 0x44:
      case 0x45:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x5c:
        FUN_004b4c20(&DAT_005cd358,*param_1,(uint)*(byte *)(param_1 + 1));
        if (DAT_00584c18 != 0) {
          if (*(char *)(param_1 + 1) != '2') {
            if (*(char *)(param_1 + 1) != '1') {
              return 1;
            }
            pcVar5 = FUN_004b1db0(&DAT_005aa64c,8);
            cVar1 = *pcVar5;
            puVar6 = FUN_004b1db0(&DAT_005aa64c,8);
            if ((int)cVar1 * (int)(char)puVar6[4] != 0) {
              return 1;
            }
          }
          FUN_00504fb0(&DAT_00584ae8,1,20000);
        }
      }
    }
  }
  return 1;
}
