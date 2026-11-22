/* Rebuilt from lomse.exe op_C @ 0x005457c0 (699 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574e92 (*(undefined *)0x00574e92)
#define DAT_00575094 (*(uint *)0x00575094)
#define DAT_005d5310 (*(int *)0x005d5310)
#define DAT_005d5320 (*(undefined4 *)0x005d5320)
#define DAT_005d568c (*(undefined2 * *)0x005d568c)
#define DAT_005d5690 (*(undefined2 * *)0x005d5690)
#define DAT_005d56a4 (*(ushort *)0x005d56a4)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define FUN_00545ac0 ((BOOL (__cdecl *)(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4))0x00545ac0)
#define FUN_00545c50 ((BOOL (__cdecl *)(DWORD, LPCSTR, int, LPWORD, UINT, LCID, int))0x00545c50)
#define FUN_005479e0 ((undefined4 (__cdecl *)(int, LCID, LCTYPE, char *))0x005479e0)
#define GetCPInfo (*(__typeof__(BOOL (__stdcall *)(UINT, LPCPINFO)) *)0x0054d160) /* KERNEL32.DLL!GetCPInfo via IAT */
#define PTR_DAT_00574e88 (*(undefined * *)0x00574e88)
#define PTR_DAT_00574e8c (*(undefined * *)0x00574e8c)

#define LOM_SELF_005457c0 1
int __cdecl rb_005457c0(void)   /* HAND 2026-11-13: returns 0 ok / 1 fail (Ghidra: void) */

{
  BYTE *pBVar1;
  LPWORD pWVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  BYTE *pBVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *in_stack_8;
  LPCSTR pCVar9;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined2 * _t_puStack_1c;
  typedef undefined2 * _t_puStack_18;
#define puStack_1c (*(_t_puStack_1c *)(_fr + 0x4))
#define puStack_18 (*(_t_puStack_18 *)(_fr + 0x8))
  _cpinfo _Stack_14;
  
  pCVar9 = (LPCSTR)0x0;
  in_stack_8 = (undefined2 *)0x0;
  if (DAT_005d5310 == 0) {
    PTR_DAT_00574e88 = &DAT_00574e92;
    PTR_DAT_00574e8c = &DAT_00574e92;
    FUN_0053bce0((undefined *)DAT_005d568c);
    FUN_0053bce0((undefined *)DAT_005d5690);
    DAT_005d568c = (undefined2 *)0x0;
    DAT_005d5690 = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_005d5320 != 0) ||
     (iVar3 = FUN_005479e0(0,(uint)DAT_005d56a4,0xb,(char *)&DAT_005d5320), iVar3 == 0)) {
    puStack_18 = (undefined2 *)FUN_0053c1f0(0x202);
    puStack_1c = (undefined2 *)FUN_0053c1f0(0x202);
    pCVar9 = (LPCSTR)FUN_0053c1f0(0x101);
    in_stack_8 = (undefined2 *)FUN_0053c1f0(0x202);
    if ((puStack_18 != (undefined2 *)0x0) &&
       (((puStack_1c != (undefined2 *)0x0 && (pCVar9 != (LPCSTR)0x0)) &&
        (in_stack_8 != (undefined2 *)0x0)))) {
      iVar3 = 0;
      do {
        pCVar9[iVar3] = (CHAR)iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x100);
      BVar4 = GetCPInfo(DAT_005d5320,&_Stack_14);
      if ((BVar4 != 0) && (_Stack_14.MaxCharSize < 3)) {
        DAT_00575094 = _Stack_14.MaxCharSize & 0xffff;
        if ((1 < DAT_00575094) && (_Stack_14.LeadByte[0] != '\0')) {
          pBVar6 = _Stack_14.LeadByte + 1;
          do {
            if (*pBVar6 == 0) break;
            uVar5 = (uint)pBVar6[-1];
            if (uVar5 <= *pBVar6) {
              do {
                pCVar9[uVar5] = '\0';
                uVar5 = uVar5 + 1;
              } while ((int)uVar5 <= (int)(uint)*pBVar6);
            }
            pBVar1 = pBVar6 + 1;
            pBVar6 = pBVar6 + 2;
          } while (*pBVar1 != 0);
        }
        pWVar2 = puStack_18 + 1;
        BVar4 = FUN_00545c50(1,pCVar9,0x100,pWVar2,0,0,0);
        if (BVar4 != 0) {
          *puStack_18 = 0;
          iVar3 = 0;
          puVar7 = in_stack_8;
          do {
            *puVar7 = (short)iVar3;
            puVar7 = puVar7 + 1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x100);
          puVar7 = puStack_1c + 1;
          BVar4 = FUN_00545ac0(1,in_stack_8,0x100,puVar7,0,0);
          if (BVar4 != 0) {
            *puStack_1c = 0;
            if ((1 < (int)DAT_00575094) && (_Stack_14.LeadByte[0] != '\0')) {
              pBVar6 = _Stack_14.LeadByte + 1;
              do {
                if (*pBVar6 == 0) break;
                uVar5 = (uint)pBVar6[-1];
                if (uVar5 <= *pBVar6) {
                  puVar8 = puStack_18 + uVar5 + 1;
                  do {
                    *puVar8 = 0x8000;
                    uVar5 = uVar5 + 1;
                    puVar8 = puVar8 + 1;
                  } while ((int)uVar5 <= (int)(uint)*pBVar6);
                }
                pBVar1 = pBVar6 + 1;
                pBVar6 = pBVar6 + 2;
              } while (*pBVar1 != 0);
            }
            PTR_DAT_00574e88 = (undefined *)pWVar2;
            PTR_DAT_00574e8c = (undefined *)puVar7;
            if (DAT_005d568c != (undefined2 *)0x0) {
              FUN_0053bce0((undefined *)DAT_005d568c);
            }
            DAT_005d568c = puStack_18;
            if (DAT_005d5690 != (undefined2 *)0x0) {
              FUN_0053bce0((undefined *)DAT_005d5690);
            }
            DAT_005d5690 = puStack_1c;
            FUN_0053bce0(pCVar9);
            FUN_0053bce0((undefined *)in_stack_8);
            return 0;
          }
        }
      }
    }
  }
  FUN_0053bce0((undefined *)puStack_18);
  FUN_0053bce0((undefined *)puStack_1c);
  FUN_0053bce0(pCVar9);
  FUN_0053bce0((undefined *)in_stack_8);
  return 1;
#undef puStack_1c
#undef puStack_18
}
