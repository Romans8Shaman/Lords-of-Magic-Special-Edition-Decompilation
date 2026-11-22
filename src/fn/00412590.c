/* Rebuilt from lomse.exe FUN_00412590 @ 0x00412590 (3046 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_005ab344 (*(undefined4 *)0x005ab344)
#define DAT_005ab3ac (*(undefined4 *)0x005ab3ac)
#define DAT_005ab408 (*(undefined4 *)0x005ab408)
#define DAT_005ab8ac (*(undefined4 *)0x005ab8ac)
#define DAT_005ab8f0 (*(undefined1 *)0x005ab8f0)
#define DAT_005ab90c (*(undefined1 *)0x005ab90c)
#define DAT_005ab914 (*(undefined1 *)0x005ab914)
#define DAT_005ab91c (*(undefined1 *)0x005ab91c)
#define DAT_005ab920 (*(undefined4 *)0x005ab920)
#define DAT_005ab988 (*(undefined4 *)0x005ab988)
#define DAT_005ab9e4 (*(undefined4 *)0x005ab9e4)
#define DAT_005abe88 (*(undefined4 *)0x005abe88)
#define DAT_005abecc (*(undefined1 *)0x005abecc)
#define DAT_005abee8 (*(undefined1 *)0x005abee8)
#define DAT_005abef0 (*(undefined1 *)0x005abef0)
#define DAT_005abef8 (*(undefined1 *)0x005abef8)
#define DAT_005abefc (*(undefined *)0x005abefc)
#define DAT_005ac4d8 (*(undefined *)0x005ac4d8)
#define DAT_005ac540 (*(undefined4 *)0x005ac540)
#define DAT_005ac59c (*(undefined4 *)0x005ac59c)
#define DAT_005aca40 (*(undefined4 *)0x005aca40)
#define DAT_005aca84 (*(undefined1 *)0x005aca84)
#define DAT_005acaa0 (*(undefined1 *)0x005acaa0)
#define DAT_005acaa8 (*(undefined1 *)0x005acaa8)
#define DAT_005acab0 (*(undefined1 *)0x005acab0)
#define DAT_005acab4 (*(undefined *)0x005acab4)
#define DAT_005ad090 (*(undefined *)0x005ad090)
#define DAT_005ae8a0 (*(int *)0x005ae8a0)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00411760 ((undefined4 (__fastcall *)(int))0x00411760)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_004122a0 ((undefined4 (__thiscall *)(void *, int *))0x004122a0)
#define FUN_00418f10 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00418f10)
#define FUN_00419d00 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00419d00)
#define FUN_0041da60 ((undefined4 (__fastcall *)(int))0x0041da60)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_005ab36c (*(undefined4 *)0x005ab36c)
#define _DAT_005ab370 (*(undefined4 *)0x005ab370)
#define _DAT_005ab388 (*(undefined4 *)0x005ab388)
#define _DAT_005ab38c (*(undefined4 *)0x005ab38c)
#define _DAT_005ab390 (*(undefined4 *)0x005ab390)
#define _DAT_005ab394 (*(undefined4 *)0x005ab394)
#define _DAT_005ab398 (*(undefined4 *)0x005ab398)
#define _DAT_005ab39c (*(undefined4 *)0x005ab39c)
#define _DAT_005ab3a0 (*(undefined4 *)0x005ab3a0)
#define _DAT_005ab3a4 (*(undefined4 *)0x005ab3a4)
#define _DAT_005ab3a8 (*(undefined4 *)0x005ab3a8)
#define _DAT_005ab404 (*(undefined4 *)0x005ab404)
#define _DAT_005ab87c (*(undefined4 *)0x005ab87c)
#define _DAT_005ab880 (*(undefined4 *)0x005ab880)
#define _DAT_005ab884 (*(undefined4 *)0x005ab884)
#define _DAT_005ab888 (*(undefined4 *)0x005ab888)
#define _DAT_005ab88c (*(undefined4 *)0x005ab88c)
#define _DAT_005ab890 (*(undefined4 *)0x005ab890)
#define _DAT_005ab894 (*(undefined4 *)0x005ab894)
#define _DAT_005ab898 (*(undefined4 *)0x005ab898)
#define _DAT_005ab89c (*(undefined4 *)0x005ab89c)
#define _DAT_005ab8a0 (*(undefined4 *)0x005ab8a0)
#define _DAT_005ab8a4 (*(undefined4 *)0x005ab8a4)
#define _DAT_005ab8a8 (*(undefined4 *)0x005ab8a8)
#define _DAT_005ab8d0 (*(undefined4 *)0x005ab8d0)
#define _DAT_005ab8d4 (*(undefined4 *)0x005ab8d4)
#define _DAT_005ab8d8 (*(undefined4 *)0x005ab8d8)
#define _DAT_005ab8dc (*(undefined4 *)0x005ab8dc)
#define _DAT_005ab8e0 (*(undefined4 *)0x005ab8e0)
#define _DAT_005ab8e4 (*(undefined4 *)0x005ab8e4)
#define _DAT_005ab8e8 (*(undefined4 *)0x005ab8e8)
#define _DAT_005ab8ec (*(undefined4 *)0x005ab8ec)
#define _DAT_005ab8f4 (*(undefined4 *)0x005ab8f4)
#define _DAT_005ab8f8 (*(undefined4 *)0x005ab8f8)
#define _DAT_005ab8fc (*(undefined4 *)0x005ab8fc)
#define _DAT_005ab900 (*(undefined4 *)0x005ab900)
#define _DAT_005ab904 (*(undefined4 *)0x005ab904)
#define _DAT_005ab908 (*(undefined4 *)0x005ab908)
#define _DAT_005ab910 (*(undefined4 *)0x005ab910)
#define _DAT_005ab918 (*(undefined4 *)0x005ab918)
#define _DAT_005ab948 (*(undefined4 *)0x005ab948)
#define _DAT_005ab94c (*(undefined4 *)0x005ab94c)
#define _DAT_005ab964 (*(undefined4 *)0x005ab964)
#define _DAT_005ab968 (*(undefined4 *)0x005ab968)
#define _DAT_005ab96c (*(undefined4 *)0x005ab96c)
#define _DAT_005ab970 (*(undefined4 *)0x005ab970)
#define _DAT_005ab974 (*(undefined4 *)0x005ab974)
#define _DAT_005ab978 (*(undefined4 *)0x005ab978)
#define _DAT_005ab97c (*(undefined4 *)0x005ab97c)
#define _DAT_005ab980 (*(undefined4 *)0x005ab980)
#define _DAT_005ab984 (*(undefined4 *)0x005ab984)
#define _DAT_005ab9e0 (*(undefined4 *)0x005ab9e0)
#define _DAT_005abe58 (*(undefined4 *)0x005abe58)
#define _DAT_005abe5c (*(undefined4 *)0x005abe5c)
#define _DAT_005abe60 (*(undefined4 *)0x005abe60)
#define _DAT_005abe64 (*(undefined4 *)0x005abe64)
#define _DAT_005abe68 (*(undefined4 *)0x005abe68)
#define _DAT_005abe6c (*(undefined4 *)0x005abe6c)
#define _DAT_005abe70 (*(undefined4 *)0x005abe70)
#define _DAT_005abe74 (*(undefined4 *)0x005abe74)
#define _DAT_005abe78 (*(undefined4 *)0x005abe78)
#define _DAT_005abe7c (*(undefined4 *)0x005abe7c)
#define _DAT_005abe80 (*(undefined4 *)0x005abe80)
#define _DAT_005abe84 (*(undefined4 *)0x005abe84)
#define _DAT_005abeac (*(undefined4 *)0x005abeac)
#define _DAT_005abeb0 (*(undefined4 *)0x005abeb0)
#define _DAT_005abeb4 (*(undefined4 *)0x005abeb4)
#define _DAT_005abeb8 (*(undefined4 *)0x005abeb8)
#define _DAT_005abebc (*(undefined4 *)0x005abebc)
#define _DAT_005abec0 (*(undefined4 *)0x005abec0)
#define _DAT_005abec4 (*(undefined4 *)0x005abec4)
#define _DAT_005abec8 (*(undefined4 *)0x005abec8)
#define _DAT_005abed0 (*(undefined4 *)0x005abed0)
#define _DAT_005abed4 (*(undefined4 *)0x005abed4)
#define _DAT_005abed8 (*(undefined4 *)0x005abed8)
#define _DAT_005abedc (*(undefined4 *)0x005abedc)
#define _DAT_005abee0 (*(undefined4 *)0x005abee0)
#define _DAT_005abee4 (*(undefined4 *)0x005abee4)
#define _DAT_005abeec (*(undefined4 *)0x005abeec)
#define _DAT_005abef4 (*(undefined4 *)0x005abef4)
#define _DAT_005ac51c (*(undefined4 *)0x005ac51c)
#define _DAT_005ac520 (*(undefined4 *)0x005ac520)
#define _DAT_005ac524 (*(undefined4 *)0x005ac524)
#define _DAT_005ac528 (*(undefined4 *)0x005ac528)
#define _DAT_005ac52c (*(undefined4 *)0x005ac52c)
#define _DAT_005ac530 (*(undefined4 *)0x005ac530)
#define _DAT_005ac534 (*(undefined4 *)0x005ac534)
#define _DAT_005ac538 (*(undefined4 *)0x005ac538)
#define _DAT_005ac53c (*(undefined4 *)0x005ac53c)
#define _DAT_005ac598 (*(undefined4 *)0x005ac598)
#define _DAT_005aca10 (*(undefined4 *)0x005aca10)
#define _DAT_005aca14 (*(undefined4 *)0x005aca14)
#define _DAT_005aca18 (*(undefined4 *)0x005aca18)
#define _DAT_005aca1c (*(undefined4 *)0x005aca1c)
#define _DAT_005aca20 (*(undefined4 *)0x005aca20)
#define _DAT_005aca24 (*(undefined4 *)0x005aca24)
#define _DAT_005aca28 (*(undefined4 *)0x005aca28)
#define _DAT_005aca2c (*(undefined4 *)0x005aca2c)
#define _DAT_005aca30 (*(undefined4 *)0x005aca30)
#define _DAT_005aca34 (*(undefined4 *)0x005aca34)
#define _DAT_005aca38 (*(undefined4 *)0x005aca38)
#define _DAT_005aca3c (*(undefined4 *)0x005aca3c)
#define _DAT_005aca64 (*(undefined4 *)0x005aca64)
#define _DAT_005aca68 (*(undefined4 *)0x005aca68)
#define _DAT_005aca6c (*(undefined4 *)0x005aca6c)
#define _DAT_005aca70 (*(undefined4 *)0x005aca70)
#define _DAT_005aca74 (*(undefined4 *)0x005aca74)
#define _DAT_005aca78 (*(undefined4 *)0x005aca78)
#define _DAT_005aca7c (*(undefined4 *)0x005aca7c)
#define _DAT_005aca80 (*(undefined4 *)0x005aca80)
#define _DAT_005aca88 (*(undefined4 *)0x005aca88)
#define _DAT_005aca8c (*(undefined4 *)0x005aca8c)
#define _DAT_005aca90 (*(undefined4 *)0x005aca90)
#define _DAT_005aca94 (*(undefined4 *)0x005aca94)
#define _DAT_005aca98 (*(undefined4 *)0x005aca98)
#define _DAT_005aca9c (*(undefined4 *)0x005aca9c)
#define _DAT_005acaa4 (*(undefined4 *)0x005acaa4)
#define _DAT_005acaac (*(undefined4 *)0x005acaac)
#define _DAT_005adc48 (*(undefined4 *)0x005adc48)
#define _DAT_005adc4c (*(undefined4 *)0x005adc4c)
#define s____________ARMY_FROM_CITY_with_n_0055592c (*(char (*)[])0x0055592c)
#define s____________BUILDING_ARMY_with_no_005558c4 (*(char (*)[])0x005558c4)
#define s____________SPRITE_ARMY_with_no_T_005558fc (*(char (*)[])0x005558fc)

#define LOM_SELF_00412590 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_00412590(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_004122a0(this,param_1);
  uVar1 = *(uint *)((int)this + 0x30);
  if ((~uVar1 & 0x100) == 0) {
    if ((uVar1 & 0x1800000) == 0) {
      if (*(int *)((int)this + 0x48) == DAT_005aa7d4) {
        FUN_0041da60((int)this);
        FUN_00411760(0x5ab344);
        iVar4 = 0xf;
        puVar2 = this;
        puVar5 = &DAT_005ab344;
        for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        _DAT_005ab370 = 0;
        _DAT_005ab388 = *(undefined4 *)((int)this + 0x44);
        _DAT_005ab38c = *(undefined4 *)((int)this + 0x48);
        _DAT_005ab390 = *(undefined4 *)((int)this + 0x4c);
        _DAT_005ab394 = *(undefined4 *)((int)this + 0x50);
        _DAT_005ab398 = *(undefined4 *)((int)this + 0x54);
        _DAT_005ab39c = *(undefined4 *)((int)this + 0x58);
        _DAT_005ab3a0 = *(undefined4 *)((int)this + 0x5c);
        _DAT_005ab3a4 = *(undefined4 *)((int)this + 0x60);
        _DAT_005ab3a8 = *(undefined4 *)((int)this + 100);
        puVar2 = (undefined4 *)((int)this + 0x68);
        puVar5 = &DAT_005ab3ac;
        for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        _DAT_005ab404 = *(undefined4 *)((int)this + 0xc0);
        puVar2 = &DAT_005ab408;
        do {
          iVar4 = iVar4 + -1;
          puVar5 = (undefined4 *)((int)this + -0x5ab344 + (int)puVar2);
          puVar6 = puVar2;
          for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar2 = puVar2 + 0x13;
        } while (iVar4 != 0);
        _DAT_005ab87c = *(undefined4 *)((int)this + 0x538);
        _DAT_005ab880 = *(undefined4 *)((int)this + 0x53c);
        _DAT_005ab884 = *(undefined4 *)((int)this + 0x540);
        _DAT_005ab888 = *(undefined4 *)((int)this + 0x544);
        _DAT_005ab88c = *(undefined4 *)((int)this + 0x548);
        _DAT_005ab890 = *(undefined4 *)((int)this + 0x54c);
        _DAT_005ab894 = *(undefined4 *)((int)this + 0x550);
        _DAT_005ab898 = *(undefined4 *)((int)this + 0x554);
        _DAT_005ab89c = *(undefined4 *)((int)this + 0x558);
        _DAT_005ab8a0 = *(undefined4 *)((int)this + 0x55c);
        _DAT_005ab8a4 = *(undefined4 *)((int)this + 0x560);
        _DAT_005ab8a8 = *(undefined4 *)((int)this + 0x564);
        puVar2 = (undefined4 *)((int)this + 0x568);
        puVar5 = &DAT_005ab8ac;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        _DAT_005ab8d0 = *(undefined4 *)((int)this + 0x58c);
        _DAT_005ab8d4 = *(undefined4 *)((int)this + 0x590);
        _DAT_005ab8d8 = *(undefined4 *)((int)this + 0x594);
        _DAT_005ab8dc = *(undefined4 *)((int)this + 0x598);
        _DAT_005ab8e0 = *(undefined4 *)((int)this + 0x59c);
        _DAT_005ab8e4 = *(undefined4 *)((int)this + 0x5a0);
        _DAT_005ab8e8 = *(undefined4 *)((int)this + 0x5a4);
        _DAT_005ab8ec = *(undefined4 *)((int)this + 0x5a8);
        DAT_005ab8f0 = *(undefined1 *)((int)this + 0x5ac);
        _DAT_005ab8f4 = *(undefined4 *)((int)this + 0x5b0);
        _DAT_005ab8f8 = *(undefined4 *)((int)this + 0x5b4);
        _DAT_005ab8fc = *(undefined4 *)((int)this + 0x5b8);
        _DAT_005ab900 = *(undefined4 *)((int)this + 0x5bc);
        _DAT_005ab904 = *(undefined4 *)((int)this + 0x5c0);
        _DAT_005ab908 = *(undefined4 *)((int)this + 0x5c4);
        DAT_005ab90c = *(undefined1 *)((int)this + 0x5c8);
        _DAT_005ab910 = *(undefined4 *)((int)this + 0x5cc);
        DAT_005ab914 = *(undefined1 *)((int)this + 0x5d0);
        _DAT_005ab918 = *(undefined4 *)((int)this + 0x5d4);
        DAT_005ab91c = *(undefined1 *)((int)this + 0x5d8);
        _DAT_005ab36c = 0xfffffffa;
      }
      else if (*(int *)((int)this + 0x48) == DAT_005aadb0) {
        FUN_0041da60((int)this);
        FUN_00411760(0x5ab920);
        iVar4 = 0xf;
        puVar2 = this;
        puVar5 = &DAT_005ab920;
        for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        _DAT_005ab94c = 0;
        _DAT_005ab964 = *(undefined4 *)((int)this + 0x44);
        _DAT_005ab968 = *(undefined4 *)((int)this + 0x48);
        _DAT_005ab96c = *(undefined4 *)((int)this + 0x4c);
        _DAT_005ab970 = *(undefined4 *)((int)this + 0x50);
        _DAT_005ab974 = *(undefined4 *)((int)this + 0x54);
        _DAT_005ab978 = *(undefined4 *)((int)this + 0x58);
        _DAT_005ab97c = *(undefined4 *)((int)this + 0x5c);
        _DAT_005ab980 = *(undefined4 *)((int)this + 0x60);
        _DAT_005ab984 = *(undefined4 *)((int)this + 100);
        puVar2 = (undefined4 *)((int)this + 0x68);
        puVar5 = &DAT_005ab988;
        for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        _DAT_005ab9e0 = *(undefined4 *)((int)this + 0xc0);
        puVar2 = &DAT_005ab9e4;
        do {
          iVar4 = iVar4 + -1;
          puVar5 = (undefined4 *)((int)this + -0x5ab920 + (int)puVar2);
          puVar6 = puVar2;
          for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar2 = puVar2 + 0x13;
        } while (iVar4 != 0);
        _DAT_005abe58 = *(undefined4 *)((int)this + 0x538);
        _DAT_005abe5c = *(undefined4 *)((int)this + 0x53c);
        _DAT_005abe60 = *(undefined4 *)((int)this + 0x540);
        _DAT_005abe64 = *(undefined4 *)((int)this + 0x544);
        _DAT_005abe68 = *(undefined4 *)((int)this + 0x548);
        _DAT_005abe6c = *(undefined4 *)((int)this + 0x54c);
        _DAT_005abe70 = *(undefined4 *)((int)this + 0x550);
        _DAT_005abe74 = *(undefined4 *)((int)this + 0x554);
        _DAT_005abe78 = *(undefined4 *)((int)this + 0x558);
        _DAT_005abe7c = *(undefined4 *)((int)this + 0x55c);
        _DAT_005abe80 = *(undefined4 *)((int)this + 0x560);
        _DAT_005abe84 = *(undefined4 *)((int)this + 0x564);
        puVar2 = (undefined4 *)((int)this + 0x568);
        puVar5 = &DAT_005abe88;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        _DAT_005abeac = *(undefined4 *)((int)this + 0x58c);
        _DAT_005abeb0 = *(undefined4 *)((int)this + 0x590);
        _DAT_005abeb4 = *(undefined4 *)((int)this + 0x594);
        _DAT_005abeb8 = *(undefined4 *)((int)this + 0x598);
        _DAT_005abebc = *(undefined4 *)((int)this + 0x59c);
        _DAT_005abec0 = *(undefined4 *)((int)this + 0x5a0);
        _DAT_005abec4 = *(undefined4 *)((int)this + 0x5a4);
        _DAT_005abec8 = *(undefined4 *)((int)this + 0x5a8);
        DAT_005abecc = *(undefined1 *)((int)this + 0x5ac);
        _DAT_005abed0 = *(undefined4 *)((int)this + 0x5b0);
        _DAT_005abed4 = *(undefined4 *)((int)this + 0x5b4);
        _DAT_005abed8 = *(undefined4 *)((int)this + 0x5b8);
        _DAT_005abedc = *(undefined4 *)((int)this + 0x5bc);
        _DAT_005abee0 = *(undefined4 *)((int)this + 0x5c0);
        _DAT_005abee4 = *(undefined4 *)((int)this + 0x5c4);
        DAT_005abee8 = *(undefined1 *)((int)this + 0x5c8);
        _DAT_005abeec = *(undefined4 *)((int)this + 0x5cc);
        DAT_005abef0 = *(undefined1 *)((int)this + 0x5d0);
        _DAT_005abef4 = *(undefined4 *)((int)this + 0x5d4);
        DAT_005abef8 = *(undefined1 *)((int)this + 0x5d8);
        _DAT_005ab948 = 0xfffffff9;
      }
    }
    else {
      FUN_00411760(0x5ab920);
      iVar4 = 0xf;
      puVar2 = this;
      puVar5 = &DAT_005ab920;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      _DAT_005ab94c = 0;
      _DAT_005ab964 = *(undefined4 *)((int)this + 0x44);
      _DAT_005ab968 = *(undefined4 *)((int)this + 0x48);
      _DAT_005ab96c = *(undefined4 *)((int)this + 0x4c);
      _DAT_005ab970 = *(undefined4 *)((int)this + 0x50);
      _DAT_005ab974 = *(undefined4 *)((int)this + 0x54);
      _DAT_005ab978 = *(undefined4 *)((int)this + 0x58);
      _DAT_005ab97c = *(undefined4 *)((int)this + 0x5c);
      _DAT_005ab980 = *(undefined4 *)((int)this + 0x60);
      _DAT_005ab984 = *(undefined4 *)((int)this + 100);
      puVar2 = (undefined4 *)((int)this + 0x68);
      puVar5 = &DAT_005ab988;
      for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      _DAT_005ab9e0 = *(undefined4 *)((int)this + 0xc0);
      puVar2 = &DAT_005ab9e4;
      do {
        iVar4 = iVar4 + -1;
        puVar5 = (undefined4 *)((int)puVar2 + (int)this + -0x5ab920);
        puVar6 = puVar2;
        for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar2 = puVar2 + 0x13;
      } while (iVar4 != 0);
      _DAT_005abe58 = *(undefined4 *)((int)this + 0x538);
      _DAT_005abe5c = *(undefined4 *)((int)this + 0x53c);
      _DAT_005abe60 = *(undefined4 *)((int)this + 0x540);
      _DAT_005abe64 = *(undefined4 *)((int)this + 0x544);
      _DAT_005abe68 = *(undefined4 *)((int)this + 0x548);
      _DAT_005abe6c = *(undefined4 *)((int)this + 0x54c);
      _DAT_005abe70 = *(undefined4 *)((int)this + 0x550);
      _DAT_005abe74 = *(undefined4 *)((int)this + 0x554);
      _DAT_005abe78 = *(undefined4 *)((int)this + 0x558);
      _DAT_005abe7c = *(undefined4 *)((int)this + 0x55c);
      _DAT_005abe80 = *(undefined4 *)((int)this + 0x560);
      _DAT_005abe84 = *(undefined4 *)((int)this + 0x564);
      puVar2 = (undefined4 *)((int)this + 0x568);
      puVar5 = &DAT_005abe88;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      _DAT_005abeac = *(undefined4 *)((int)this + 0x58c);
      _DAT_005abeb0 = *(undefined4 *)((int)this + 0x590);
      _DAT_005abeb4 = *(undefined4 *)((int)this + 0x594);
      _DAT_005abeb8 = *(undefined4 *)((int)this + 0x598);
      _DAT_005abebc = *(undefined4 *)((int)this + 0x59c);
      _DAT_005abec0 = *(undefined4 *)((int)this + 0x5a0);
      _DAT_005abec4 = *(undefined4 *)((int)this + 0x5a4);
      _DAT_005abec8 = *(undefined4 *)((int)this + 0x5a8);
      DAT_005abecc = *(undefined1 *)((int)this + 0x5ac);
      _DAT_005abed0 = *(undefined4 *)((int)this + 0x5b0);
      _DAT_005abed4 = *(undefined4 *)((int)this + 0x5b4);
      _DAT_005abed8 = *(undefined4 *)((int)this + 0x5b8);
      _DAT_005abedc = *(undefined4 *)((int)this + 0x5bc);
      _DAT_005abee0 = *(undefined4 *)((int)this + 0x5c0);
      _DAT_005abee4 = *(undefined4 *)((int)this + 0x5c4);
      DAT_005abee8 = *(undefined1 *)((int)this + 0x5c8);
      _DAT_005abeec = *(undefined4 *)((int)this + 0x5cc);
      DAT_005abef0 = *(undefined1 *)((int)this + 0x5d0);
      _DAT_005abef4 = *(undefined4 *)((int)this + 0x5d4);
      DAT_005abef8 = *(undefined1 *)((int)this + 0x5d8);
    }
    FUN_004117f0(this,0);
    if (this == (void *)0x0) {
      return 1;
    }
    ((undefined4 (__thiscall *)(__typeof__((void *)(this)), __typeof__(1)))(*(code *)**(undefined4 **)this))((void *)(this),1);
    return 1;
  }
  if ((uVar1 & 0x400000) == 0) {
    if ((uVar1 & 0x1000000) == 0) {
      if (((uVar1 & 0x800000) == 0) || ((uVar1 & 0x800) != 0)) goto LAB_0041306a;
      uVar1 = FUN_00482ac0(&DAT_005aa12c,DAT_005ae8a0,2);
      if (uVar1 == 0) {
        OutputDebugStringA(s____________BUILDING_ARMY_with_no_005558c4);
        if (this == (void *)0x0) {
          return 1;
        }
        ((undefined4 (__thiscall *)(__typeof__((void *)(this)), __typeof__(1)))(*(code *)**(undefined4 **)this))((void *)(this),1);
        return 1;
      }
      if (*(int *)(uVar1 + 0x48) != 0) {
        FUN_00411760(*(int *)(uVar1 + 0x48));
      }
      *(void **)(uVar1 + 0x48) = this;
    }
    else {
      if ((uVar1 & 0x800) != 0) {
LAB_0041306a:
        FUN_004a7d50(&DAT_005ae958,this,*(int *)((int)this + 0x1c));
        uVar1 = *(uint *)((int)this + 0x30);
        if ((uVar1 & 0x400) == 0) {
          if ((uVar1 & 0x800) == 0) {
            if (*(int *)((int)this + 0x48) == DAT_005aa7d4) {
              _DAT_005adc48 = *(undefined4 *)((int)this + 0x28);
              return 1;
            }
            if (*(int *)((int)this + 0x48) == DAT_005aadb0) {
              _DAT_005adc4c = *(undefined4 *)((int)this + 0x28);
            }
          }
          else {
            if ((*(int *)((int)this + 0x5b0) != -1) &&
               (*(int *)((int)this + 0x48) != *(int *)((int)this + 0x5b8))) {
              *(uint *)((int)this + 0x30) = uVar1 & 0xfffff7ff;
              return 1;
            }
            if (*(int *)((int)this + 0x48) == DAT_005aa7d4) {
              FUN_00419d00(&DAT_005acab4,this);
              return 1;
            }
            if (*(int *)((int)this + 0x48) == DAT_005aadb0) {
              FUN_00419d00(&DAT_005ad090,this);
              return 1;
            }
          }
        }
        else {
          if (*(int *)((int)this + 0x48) == DAT_005aa7d4) {
            FUN_00419d00(&DAT_005abefc,this);
            return 1;
          }
          if (*(int *)((int)this + 0x48) == DAT_005aadb0) {
            FUN_00419d00(&DAT_005ac4d8,this);
            return 1;
          }
        }
        return 1;
      }
      uVar1 = FUN_00482ac0(&DAT_005aa12c,DAT_005ae8a0,1);
      if (uVar1 == 0) {
        OutputDebugStringA(s____________SPRITE_ARMY_with_no_T_005558fc);
        if (this == (void *)0x0) {
          return 1;
        }
        ((undefined4 (__thiscall *)(__typeof__((void *)(this)), __typeof__(1)))(*(code *)**(undefined4 **)this))((void *)(this),1);
        return 1;
      }
      if (*(int *)(uVar1 + 0x58) != 0) {
        FUN_00411760(*(int *)(uVar1 + 0x58));
      }
      *(void **)(uVar1 + 0x58) = this;
    }
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(uVar1 + 0x28);
    if ((*(uint *)((int)this + 0x30) & 0x400) != 0) {
      FUN_00419d00(&DAT_005ac4d8,this);
      return 1;
    }
  }
  else {
    if ((uVar1 & 0x800) != 0) goto LAB_0041306a;
    uVar1 = FUN_00482ac0(&DAT_005aa12c,DAT_005ae8a0,3);
    if (uVar1 == 0) {
      OutputDebugStringA(s____________ARMY_FROM_CITY_with_n_0055592c);
      if (this == (void *)0x0) {
        return 1;
      }
      ((undefined4 (__thiscall *)(__typeof__((void *)(this)), __typeof__(1)))(*(code *)**(undefined4 **)this))((void *)(this),1);
      return 1;
    }
    if (*(int *)(uVar1 + 0x44) != 0) {
      FUN_00411760(*(int *)(uVar1 + 0x44));
      if (*(undefined4 **)(uVar1 + 0x44) != (undefined4 *)0x0) {
        ((undefined4 (__thiscall *)(__typeof__((void *)(*(undefined4 **)(uVar1 + 0x44))), __typeof__(1)))(**(code **)**(undefined4 **)(uVar1 + 0x44)))((void *)(*(undefined4 **)(uVar1 + 0x44)),1);
      }
      *(undefined4 *)(uVar1 + 0x44) = 0;
    }
    *(void **)(uVar1 + 0x44) = this;
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(uVar1 + 0x28);
    if ((*(uint *)((int)this + 0x30) & 0x400) != 0) {
      FUN_00418f10(&DAT_005ac4d8,this);
      _DAT_005ac51c = *(undefined4 *)((int)this + 0x44);
      _DAT_005ac520 = *(undefined4 *)((int)this + 0x48);
      _DAT_005ac524 = *(undefined4 *)((int)this + 0x4c);
      _DAT_005ac528 = *(undefined4 *)((int)this + 0x50);
      _DAT_005ac52c = *(undefined4 *)((int)this + 0x54);
      _DAT_005ac530 = *(undefined4 *)((int)this + 0x58);
      _DAT_005ac534 = *(undefined4 *)((int)this + 0x5c);
      _DAT_005ac538 = *(undefined4 *)((int)this + 0x60);
      _DAT_005ac53c = *(undefined4 *)((int)this + 100);
      puVar2 = (undefined4 *)((int)this + 0x68);
      puVar5 = &DAT_005ac540;
      for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      _DAT_005ac598 = *(undefined4 *)((int)this + 0xc0);
      iVar3 = 0xf;
      puVar2 = &DAT_005ac59c;
      do {
        iVar3 = iVar3 + -1;
        puVar5 = (undefined4 *)((int)this + -0x5ac4d8 + (int)puVar2);
        puVar6 = puVar2;
        for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar2 = puVar2 + 0x13;
      } while (iVar3 != 0);
      _DAT_005aca10 = *(undefined4 *)((int)this + 0x538);
      _DAT_005aca14 = *(undefined4 *)((int)this + 0x53c);
      _DAT_005aca18 = *(undefined4 *)((int)this + 0x540);
      _DAT_005aca1c = *(undefined4 *)((int)this + 0x544);
      _DAT_005aca20 = *(undefined4 *)((int)this + 0x548);
      _DAT_005aca24 = *(undefined4 *)((int)this + 0x54c);
      _DAT_005aca28 = *(undefined4 *)((int)this + 0x550);
      _DAT_005aca2c = *(undefined4 *)((int)this + 0x554);
      _DAT_005aca30 = *(undefined4 *)((int)this + 0x558);
      _DAT_005aca34 = *(undefined4 *)((int)this + 0x55c);
      _DAT_005aca38 = *(undefined4 *)((int)this + 0x560);
      _DAT_005aca3c = *(undefined4 *)((int)this + 0x564);
      puVar2 = (undefined4 *)((int)this + 0x568);
      puVar5 = &DAT_005aca40;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      _DAT_005aca64 = *(undefined4 *)((int)this + 0x58c);
      _DAT_005aca68 = *(undefined4 *)((int)this + 0x590);
      _DAT_005aca6c = *(undefined4 *)((int)this + 0x594);
      _DAT_005aca70 = *(undefined4 *)((int)this + 0x598);
      _DAT_005aca74 = *(undefined4 *)((int)this + 0x59c);
      _DAT_005aca78 = *(undefined4 *)((int)this + 0x5a0);
      _DAT_005aca7c = *(undefined4 *)((int)this + 0x5a4);
      _DAT_005aca80 = *(undefined4 *)((int)this + 0x5a8);
      DAT_005aca84 = *(undefined1 *)((int)this + 0x5ac);
      _DAT_005aca88 = *(undefined4 *)((int)this + 0x5b0);
      _DAT_005aca8c = *(undefined4 *)((int)this + 0x5b4);
      _DAT_005aca90 = *(undefined4 *)((int)this + 0x5b8);
      _DAT_005aca94 = *(undefined4 *)((int)this + 0x5bc);
      _DAT_005aca98 = *(undefined4 *)((int)this + 0x5c0);
      _DAT_005aca9c = *(undefined4 *)((int)this + 0x5c4);
      DAT_005acaa0 = *(undefined1 *)((int)this + 0x5c8);
      _DAT_005acaa4 = *(undefined4 *)((int)this + 0x5cc);
      DAT_005acaa8 = *(undefined1 *)((int)this + 0x5d0);
      _DAT_005acaac = *(undefined4 *)((int)this + 0x5d4);
      DAT_005acab0 = *(undefined1 *)((int)this + 0x5d8);
      return 1;
    }
  }
  _DAT_005adc4c = *(undefined4 *)(uVar1 + 0x28);
  return 1;
}
