/* Rebuilt from lomse.exe FUN_00546000 @ 0x00546000 (728 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0054fab8 (*(undefined *)0x0054fab8)
#define DAT_00577ba0 (*(int *)0x00577ba0)
#define DAT_00577ba4 (*(int *)0x00577ba4)
#define DAT_00577ba8 (*(int *)0x00577ba8)
#define DAT_00577c38 (*(undefined4 *)0x00577c38)
#define DAT_00577c48 (*(undefined4 *)0x00577c48)
#define DAT_005d56e8 (*(undefined4 *)0x005d56e8)
#define DAT_005d56f0 (*(undefined4 *)0x005d56f0)
#define DAT_005d56f4 (*(undefined *)0x005d56f4)
#define DAT_005d5736 (*(short *)0x005d5736)
#define DAT_005d5744 (*(int *)0x005d5744)
#define DAT_005d5748 (*(undefined *)0x005d5748)
#define DAT_005d578a (*(short *)0x005d578a)
#define DAT_005d5798 (*(int *)0x005d5798)
#define DAT_005d579c (*(byte * *)0x005d579c)
#define FUN_0053b590 ((int (__cdecl *)(byte *))0x0053b590)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_00547d70 ((uint (__cdecl *)(LPSTR, LPCWSTR, uint))0x00547d70)
#define FUN_00548020 ((int (__cdecl *)(byte *))0x00548020)
#define GetTimeZoneInformation (*(__typeof__(DWORD (__stdcall *)(LPTIME_ZONE_INFORMATION)) *)0x0054d184) /* KERNEL32.DLL!GetTimeZoneInformation via IAT */
#define PTR_DAT_00577c30 (*(undefined * *)0x00577c30)
#define PTR_DAT_00577c34 (*(undefined * *)0x00577c34)
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_00546000 1
void __stdcall rb_00546000(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  DWORD DVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  
  FUN_0053cbb0(0xc);
  DAT_005d56e8 = 0;
  DAT_00577c48 = 0xffffffff;
  DAT_00577c38 = 0xffffffff;
  pbVar3 = (byte *)FUN_00548020(&DAT_0054fab8);
  if (pbVar3 == (byte *)0x0) {
    FUN_0053cc30(0xc);
    DVar4 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_005d56f0);
    if (DVar4 == 0xffffffff) {
      return;
    }
    DAT_005d56e8 = 1;
    DAT_00577ba0 = DAT_005d56f0 * 0x3c;
    if (DAT_005d5736 != 0) {
      DAT_00577ba0 = DAT_00577ba0 + DAT_005d5744 * 0x3c;
    }
    if ((DAT_005d578a == 0) || (DAT_005d5798 == 0)) {
      DAT_00577ba4 = 0;
      DAT_00577ba8 = 0;
    }
    else {
      DAT_00577ba4 = 1;
      DAT_00577ba8 = (DAT_005d5798 - DAT_005d5744) * 0x3c;
    }
    FUN_00547d70(PTR_DAT_00577c30,(LPCWSTR)&DAT_005d56f4,0x40);
    FUN_00547d70(PTR_DAT_00577c34,(LPCWSTR)&DAT_005d5748,0x40);
    PTR_DAT_00577c34[0x3f] = 0;
    PTR_DAT_00577c30[0x3f] = 0;
    return;
  }
  if (*pbVar3 != 0) {
    if (DAT_005d579c != (byte *)0x0) {
      pbVar5 = pbVar3;
      pbVar9 = DAT_005d579c;
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_00546157:
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0054615c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_00546157;
        pbVar5 = pbVar5 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_0054615c:
      if (iVar6 == 0) goto LAB_005462c9;
    }
    FUN_0053bce0(DAT_005d579c);
    uVar7 = 0xffffffff;
    pbVar5 = pbVar3;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    DAT_005d579c = (byte *)FUN_0053c1f0(~uVar7);
    if (DAT_005d579c != (byte *)0x0) {
      uVar7 = 0xffffffff;
      pbVar5 = pbVar3;
      do {
        pbVar9 = pbVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pbVar9 = pbVar5 + 1;
        bVar1 = *pbVar5;
        pbVar5 = pbVar9;
      } while (bVar1 != 0);
      uVar7 = ~uVar7;
      pbVar5 = pbVar9 + -uVar7;
      pbVar9 = DAT_005d579c;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar9 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar9 = pbVar9 + 1;
      }
      FUN_0053cc30(0xc);
      _strncpy(PTR_DAT_00577c30,(char *)pbVar3,3);
      pbVar5 = pbVar3 + 3;
      PTR_DAT_00577c30[3] = 0;
      bVar1 = *pbVar5;
      if (bVar1 == 0x2d) {
        pbVar5 = pbVar3 + 4;
      }
      iVar6 = FUN_0053b590(pbVar5);
      DAT_00577ba0 = iVar6 * 0xe10;
      for (; (bVar2 = *pbVar5, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
          pbVar5 = pbVar5 + 1) {
      }
      if (*pbVar5 == 0x3a) {
        pbVar5 = pbVar5 + 1;
        iVar6 = FUN_0053b590(pbVar5);
        DAT_00577ba0 = DAT_00577ba0 + iVar6 * 0x3c;
        bVar2 = *pbVar5;
        while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
          pbVar3 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar3;
        }
        if (*pbVar5 == 0x3a) {
          pbVar5 = pbVar5 + 1;
          iVar6 = FUN_0053b590(pbVar5);
          DAT_00577ba0 = DAT_00577ba0 + iVar6;
          bVar2 = *pbVar5;
          while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
            pbVar3 = pbVar5 + 1;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar3;
          }
        }
      }
      if (bVar1 == 0x2d) {
        DAT_00577ba0 = -DAT_00577ba0;
      }
      DAT_00577ba4 = (int)(char)*pbVar5;
      if (DAT_00577ba4 == 0) {
        *PTR_DAT_00577c34 = 0;
        return;
      }
      _strncpy(PTR_DAT_00577c34,(char *)pbVar5,3);
      PTR_DAT_00577c34[3] = 0;
      return;
    }
  }
LAB_005462c9:
  FUN_0053cc30(0xc);
  return;
}
