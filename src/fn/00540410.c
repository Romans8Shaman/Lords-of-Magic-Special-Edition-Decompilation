/* Rebuilt from lomse.exe FUN_00540410 @ 0x00540410 (555 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574cd8 (*(undefined1 *)0x00574cd8)
#define DAT_00574ce0 (*(undefined4 *)0x00574ce0)
#define DAT_00574dd0 (*(undefined *)0x00574dd0)
#define DAT_005d5328 (*(undefined4 *)0x005d5328)
#define DAT_005d5530 (*(UINT *)0x005d5530)
#define DAT_005d5534 (*(undefined4 *)0x005d5534)
#define DAT_005d5544 (*(int *)0x005d5544)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_00540640 ((int (__cdecl *)(int))0x00540640)
#define FUN_00540690 ((undefined4 (__cdecl *)(undefined4))0x00540690)
#define FUN_005406f0 ((undefined4 (__stdcall *)(void))0x005406f0)
#define FUN_00540730 ((undefined4 (__stdcall *)(void))0x00540730)
#define GetCPInfo (*(__typeof__(BOOL (__stdcall *)(UINT, LPCPINFO)) *)0x0054d160) /* KERNEL32.DLL!GetCPInfo via IAT */
#define _DAT_005d5538 (*(undefined4 *)0x005d5538)
#define _DAT_005d553c (*(undefined4 *)0x005d553c)
#define _DAT_005d5540 (*(undefined4 *)0x005d5540)
#define _DAT_005d6b24 (*(undefined4 *)0x005d6b24)

#define LOM_SELF_00540410 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl rb_00540410(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  BYTE *pBVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef _cpinfo _t_local_14;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
  
  FUN_0053cbb0(0x19);
  CodePage = FUN_00540640(param_1);
  if (CodePage == DAT_005d5530) {
    FUN_0053cc30(0x19);
    return 0;
  }
  if (CodePage == 0) {
    FUN_005406f0();
    FUN_00540730();
    FUN_0053cc30(0x19);
    return 0;
  }
  iVar10 = 0;
  pUVar5 = &DAT_00574ce0;
  do {
    if (*pUVar5 == CodePage) {
      puVar14 = &DAT_005d5328;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      uVar7 = 0;
      iVar10 = iVar10 * 0x30;
      pbVar12 = (byte *)(iVar10 + 0x574cf0);
      do {
        bVar3 = *pbVar12;
        for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
            pbVar13 = pbVar13 + 2) {
          uVar8 = (uint)*pbVar13;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_00574cd8)[uVar7];
            do {
              pbVar2 = (byte *)((int)&DAT_005d5328 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          bVar3 = pbVar13[2];
        }
        uVar7 = uVar7 + 1;
        pbVar12 = pbVar12 + 8;
      } while (uVar7 < 4);
      _DAT_005d6b24 = 1;
      DAT_005d5530 = CodePage;
      DAT_005d5534 = FUN_00540690(CodePage);
      _DAT_005d5538 = *(undefined4 *)(iVar10 + 0x574ce4);
      _DAT_005d553c = *(undefined4 *)(iVar10 + 0x574ce8);
      _DAT_005d5540 = *(undefined4 *)(iVar10 + 0x574cec);
      goto LAB_00540562;
    }
    pUVar5 = pUVar5 + 0xc;
    iVar10 = iVar10 + 1;
  } while (pUVar5 < &DAT_00574dd0);
  BVar6 = GetCPInfo(CodePage,&local_14);
  if (BVar6 == 1) {
    puVar14 = &DAT_005d5328;
    for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined1 *)puVar14 = 0;
    DAT_005d5534 = 0;
    if (local_14.MaxCharSize < 2) {
      _DAT_005d6b24 = 0;
      DAT_005d5530 = CodePage;
    }
    else {
      DAT_005d5530 = CodePage;
      if (local_14.LeadByte[0] != '\0') {
        pBVar11 = local_14.LeadByte + 1;
        do {
          bVar3 = *pBVar11;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            *(byte *)((int)&DAT_005d5328 + uVar7 + 1) =
                 *(byte *)((int)&DAT_005d5328 + uVar7 + 1) | 4;
          }
          pBVar1 = pBVar11 + 1;
          pBVar11 = pBVar11 + 2;
        } while (*pBVar1 != 0);
      }
      uVar7 = 1;
      do {
        *(byte *)((int)&DAT_005d5328 + uVar7 + 1) = *(byte *)((int)&DAT_005d5328 + uVar7 + 1) | 8;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0xff);
      DAT_005d5534 = FUN_00540690(CodePage);
      _DAT_005d6b24 = 1;
    }
    _DAT_005d5538 = 0;
    _DAT_005d553c = 0;
    _DAT_005d5540 = 0;
  }
  else {
    if (DAT_005d5544 == 0) {
      FUN_0053cc30(0x19);
      return 0xffffffff;
    }
    FUN_005406f0();
  }
LAB_00540562:
  FUN_00540730();
  FUN_0053cc30(0x19);
  return 0;
#undef local_14
}
