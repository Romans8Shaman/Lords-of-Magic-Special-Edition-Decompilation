/* Rebuilt from lomse.exe FUN_0047af50 @ 0x0047af50 (549 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b008 (*(undefined *)0x0055b008)
#define DAT_0055b020 (*(undefined *)0x0055b020)
#define DAT_00584d54 (*(HWND *)0x00584d54)
#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_005863b4 (*(int *)0x005863b4)
#define DAT_00586798 (*(int *)0x00586798)
#define DAT_005878bc (*(int *)0x005878bc)
#define DAT_005878c0 (*(int *)0x005878c0)
#define DAT_005878cc (*(int *)0x005878cc)
#define DAT_005878d0 (*(int *)0x005878d0)
#define DAT_005878f0 (*(undefined * *)0x005878f0)
#define DAT_005d22f0 (*(undefined1 *)0x005d22f0)
#define FUN_0047aea0 ((undefined4 (__thiscall *)(void *, undefined4))0x0047aea0)
#define FUN_004a5240 ((int (__thiscall *)(void *, int, int))0x004a5240)
#define FUN_00508f10 ((undefined4 (__thiscall *)(void *, int))0x00508f10)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define GetDC (*(__typeof__(HDC (__stdcall *)(HWND)) *)0x0054d27c) /* USER32.DLL!GetDC via IAT */
#define TextOutA (*(__typeof__(BOOL (__stdcall *)(HDC, int, int, LPCSTR, int)) *)0x0054d030) /* GDI32.DLL!TextOutA via IAT */
#define s_desert_0055b038 (*(char (*)[])0x0055b038)
#define s_happy_0055b024 (*(char (*)[])0x0055b024)
#define s_illegal_0055b048 (*(char (*)[])0x0055b048)
#define s_mountain_0055b02c (*(char (*)[])0x0055b02c)
#define s_plains_0055b018 (*(char (*)[])0x0055b018)
#define s_swamp_0055b010 (*(char (*)[])0x0055b010)
#define s_water_0055b040 (*(char (*)[])0x0055b040)

#define LOM_SELF_0047af50 1
void __fastcall rb_0047af50(void *param_1)

{
  char cVar1;
  int iVar2;
  HDC hdc;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  uchar _fr[0x78] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_6c[18];
  typedef undefined4 _t_local_24[9];
#define local_6c (*(_t_local_6c *)(_fr + 0x4))
#define local_24 (*(_t_local_24 *)(_fr + 0x4c))
  
  piVar6 = local_6c + 9;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  puVar10 = local_24;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  iVar8 = (DAT_005878bc * 2 + 0x27f) - DAT_005878cc;
  iVar3 = -DAT_005878d0;
  iVar4 = (DAT_005878c0 * 2 + 0x17f) - DAT_005878d0;
  iVar7 = -DAT_005878cc;
  iVar11 = 0;
  local_6c[0] = 100000;
  local_6c[1] = 2;
  local_6c[2] = 7;
  local_6c[3] = 6;
  local_6c[4] = 5;
  local_6c[5] = 4;
  local_6c[6] = 8;
  local_6c[7] = 3;
  local_6c[8] = 1;
  if (0 < *(int *)((int)param_1 + 0x60)) {
    do {
      iVar9 = 0;
      if (0 < *(int *)((int)param_1 + 0x5c)) {
        do {
          /* HAND: original sets ECX=0x5876d0 before call [0x5878f0] (thiscall); Ghidra dropped it */
          iVar2 = ((undefined4 (__thiscall *)(void *, int, int, int, int, int, int))(DAT_005878f0))((void *)0x5876d0,iVar9,iVar11,iVar7,iVar3,iVar8,iVar4);
          if (iVar2 != -1) {
            iVar2 = FUN_004a5240(param_1,iVar9,iVar11);
            iVar2 = FUN_00508f10((void *)((int)param_1 + 0xd8),iVar2);
            if ((iVar2 < 0) || (8 < iVar2)) {
              iVar2 = 0;
            }
            local_6c[iVar2 + 9] = local_6c[iVar2 + 9] + 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)((int)param_1 + 0x5c));
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)((int)param_1 + 0x60));
  }
  iVar4 = 0;
  iVar3 = 0;
  iVar7 = 0;
  piVar6 = local_6c + 9;
  do {
    if (iVar4 < *piVar6) {
      iVar3 = iVar7;
      iVar4 = *piVar6;
    }
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar7 < 9);
  iVar8 = 0;
  iVar7 = iVar3 * 4;
  do {
    if ((local_6c[iVar8 + 9] == iVar4) && (local_6c[iVar8] < *(int *)((int)local_6c + iVar7))) {
      iVar7 = iVar8 * 4;
      iVar3 = iVar8;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 9);
  if (DAT_00586798 == 0) goto LAB_0047b154;
  switch(iVar3) {
  case 0:
    pcVar12 = s_illegal_0055b048;
    break;
  case 1:
    pcVar12 = s_water_0055b040;
    break;
  case 2:
    pcVar12 = s_desert_0055b038;
    break;
  case 3:
    pcVar12 = s_mountain_0055b02c;
    break;
  case 4:
    pcVar12 = s_happy_0055b024;
    break;
  case 5:
    pcVar12 = &DAT_0055b020;
    break;
  case 6:
    pcVar12 = s_plains_0055b018;
    break;
  case 7:
    pcVar12 = s_swamp_0055b010;
    break;
  case 8:
    pcVar12 = &DAT_0055b008;
    break;
  default:
    goto switchD_0047b0d1_default;
  }
  FUN_0053a090(&DAT_005d22f0,pcVar12);
switchD_0047b0d1_default:
  hdc = GetDC(DAT_00584d54);
  uVar5 = 0xffffffff;
  pcVar12 = &DAT_005d22f0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  TextOutA(hdc,10,0x15e,&DAT_005d22f0,~uVar5 - 1);
LAB_0047b154:
  if (iVar3 != DAT_005863b4) {
    FUN_0047aea0(&DAT_00585408,iVar3);
    DAT_005863b4 = iVar3;
  }
  return;
#undef local_6c
#undef local_24
}
