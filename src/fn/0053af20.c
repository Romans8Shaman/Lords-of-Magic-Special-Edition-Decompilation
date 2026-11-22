/* Rebuilt from lomse.exe FUN_0053af20 @ 0x0053af20 (257 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053b170 ((int (__cdecl *)(FILETIME *))0x0053b170)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FindFirstFileA (*(__typeof__(HANDLE (__stdcall *)(LPCSTR, LPWIN32_FIND_DATAA)) *)0x0054d1d0) /* KERNEL32.DLL!FindFirstFileA via IAT */
#define GetLastError (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d044) /* KERNEL32.DLL!GetLastError via IAT */

#define LOM_SELF_0053af20 1
HANDLE __cdecl rb_0053af20(LPCSTR param_1,uint *param_2)

{
  char cVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  uint uVar5;
  uint uVar6;
  CHAR *pCVar7;
  CHAR *pCVar8;
  uint *puVar9;
  uchar _fr[0x148] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef _WIN32_FIND_DATAA _t_local_140;
#define local_140 (*(_t_local_140 *)(_fr + 0x0))
  
  pvVar2 = FindFirstFileA(param_1,&local_140);
  if (pvVar2 == (HANDLE)0xffffffff) {
    DVar3 = GetLastError();
    switch(DVar3) {
    case 2:
    case 3:
    case 0x12:
      pDVar4 = FUN_0053b4c0();
      *pDVar4 = 2;
      return (HANDLE)0xffffffff;
    default:
      pDVar4 = FUN_0053b4c0();
      *pDVar4 = 0x16;
      return (HANDLE)0xffffffff;
    case 8:
      pDVar4 = FUN_0053b4c0();
      *pDVar4 = 0xc;
      return (HANDLE)0xffffffff;
    }
  }
  *param_2 = -(uint)(local_140.dwFileAttributes != 0x80) & local_140.dwFileAttributes;
  uVar5 = FUN_0053b170(&local_140.ftCreationTime);
  param_2[1] = uVar5;
  uVar5 = FUN_0053b170(&local_140.ftLastAccessTime);
  param_2[2] = uVar5;
  uVar5 = FUN_0053b170(&local_140.ftLastWriteTime);
  param_2[3] = uVar5;
  uVar5 = 0xffffffff;
  pCVar7 = local_140.cFileName;
  do {
    pCVar8 = pCVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pCVar8 = pCVar7 + 1;
    cVar1 = *pCVar7;
    pCVar7 = pCVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  param_2[4] = local_140.nFileSizeLow;
  pCVar7 = pCVar8 + -uVar5;
  puVar9 = param_2 + 5;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = *(uint *)pCVar7;
    pCVar7 = pCVar7 + 4;
    puVar9 = puVar9 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(CHAR *)puVar9 = *pCVar7;
    pCVar7 = pCVar7 + 1;
    puVar9 = (uint *)((int)puVar9 + 1);
  }
  return pvVar2;
#undef local_140
}
