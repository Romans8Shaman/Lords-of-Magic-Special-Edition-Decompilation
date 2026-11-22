/* Rebuilt from lomse.exe FUN_00540730 @ 0x00540730 (474 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5328 (*(undefined4 *)0x005d5328)
#define DAT_005d5430 (*(undefined1 *)0x005d5430)
#define DAT_005d5530 (*(UINT *)0x005d5530)
#define DAT_005d5534 (*(LCID *)0x005d5534)
#define FUN_0053f680 ((int (__cdecl *)(LCID, DWORD, char *, LPWSTR, LPWSTR, int, UINT, int))0x0053f680)
#define FUN_00545c50 ((BOOL (__cdecl *)(DWORD, LPCSTR, int, LPWORD, UINT, LCID, int))0x00545c50)
#define GetCPInfo (*(__typeof__(BOOL (__stdcall *)(UINT, LPCPINFO)) *)0x0054d160) /* KERNEL32.DLL!GetCPInfo via IAT */

#define LOM_SELF_00540730 1
void __stdcall rb_00540730(void)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  BYTE *pBVar5;
  ushort *puVar6;
  CHAR *pCVar7;
  uchar _fr[0x520] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef _cpinfo _t_local_514;
  typedef CHAR _t_local_500[256];
  typedef WCHAR _t_local_400[128];
  typedef WCHAR _t_local_300[128];
  typedef WORD _t_local_200[256];
#define local_514 (*(_t_local_514 *)(_fr + 0x4))
#define local_500 (*(_t_local_500 *)(_fr + 0x18))
#define local_400 (*(_t_local_400 *)(_fr + 0x118))
#define local_300 (*(_t_local_300 *)(_fr + 0x218))
#define local_200 (*(_t_local_200 *)(_fr + 0x318))
  
  BVar1 = GetCPInfo(DAT_005d5530,&local_514);
  if (BVar1 != 1) {
    uVar2 = 0;
    do {
      if ((uVar2 < 0x41) || (0x5a < uVar2)) {
        if ((uVar2 < 0x61) || (0x7a < uVar2)) {
          (&DAT_005d5430)[uVar2] = 0;
        }
        else {
          *(byte *)((int)&DAT_005d5328 + uVar2 + 1) =
               *(byte *)((int)&DAT_005d5328 + uVar2 + 1) | 0x20;
          (&DAT_005d5430)[uVar2] = (char)uVar2 + -0x20;
        }
      }
      else {
        *(byte *)((int)&DAT_005d5328 + uVar2 + 1) = *(byte *)((int)&DAT_005d5328 + uVar2 + 1) | 0x10
        ;
        (&DAT_005d5430)[uVar2] = (char)uVar2 + ' ';
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    return;
  }
  uVar2 = 0;
  do {
    local_500[uVar2] = (CHAR)uVar2;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  local_500[0] = ' ';
  if (local_514.LeadByte[0] != 0) {
    pBVar5 = local_514.LeadByte + 1;
    do {
      uVar2 = (uint)local_514.LeadByte[0];
      if (uVar2 <= *pBVar5) {
        uVar3 = (*pBVar5 - uVar2) + 1;
        uVar4 = uVar3 >> 2;
        pCVar7 = local_500 + uVar2;
        while (uVar4 != 0) {
          uVar4 = uVar4 - 1;
          builtin_memcpy(pCVar7,"    ",4);
          pCVar7 = pCVar7 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pCVar7 = ' ';
          pCVar7 = pCVar7 + 1;
        }
      }
      local_514.LeadByte[0] = pBVar5[1];
      pBVar5 = pBVar5 + 2;
    } while (local_514.LeadByte[0] != 0);
  }
  FUN_00545c50(1,local_500,0x100,local_200,DAT_005d5530,DAT_005d5534,0);
  FUN_0053f680(DAT_005d5534,0x100,local_500,(LPWSTR)0x100,local_400,0x100,DAT_005d5530,0);
  FUN_0053f680(DAT_005d5534,0x200,local_500,(LPWSTR)0x100,local_300,0x100,DAT_005d5530,0);
  uVar2 = 0;
  puVar6 = local_200;
  do {
    if ((*puVar6 & 1) == 0) {
      if ((*puVar6 & 2) == 0) {
        (&DAT_005d5430)[uVar2] = 0;
      }
      else {
        *(byte *)((int)&DAT_005d5328 + uVar2 + 1) = *(byte *)((int)&DAT_005d5328 + uVar2 + 1) | 0x20
        ;
        (&DAT_005d5430)[uVar2] = *(undefined1 *)((int)local_300 + uVar2);
      }
    }
    else {
      *(byte *)((int)&DAT_005d5328 + uVar2 + 1) = *(byte *)((int)&DAT_005d5328 + uVar2 + 1) | 0x10;
      (&DAT_005d5430)[uVar2] = *(undefined1 *)((int)local_400 + uVar2);
    }
    uVar2 = uVar2 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar2 < 0x100);
  return;
#undef local_514
#undef local_500
#undef local_400
#undef local_300
#undef local_200
}
