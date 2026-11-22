/* Rebuilt from lomse.exe FUN_00543700 @ 0x00543700 (470 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574964 (*(int *)0x00574964)
#define DAT_005770d8 (*(undefined4 *)0x005770d8)
#define DAT_00577168 (*(undefined *)0x00577168)
#define DAT_005d5240 (*(int *)0x005d5240)
#define DAT_005d6a20 (*(int *)0x005d6a20)
#define FUN_005470d0 ((int (__cdecl *)(undefined4, undefined4, undefined4))0x005470d0)
#define GetModuleFileNameA (*(__typeof__(DWORD (__stdcall *)(HMODULE, LPSTR, DWORD)) *)0x0054d048) /* KERNEL32.DLL!GetModuleFileNameA via IAT */
#define GetStdHandle (*(__typeof__(HANDLE (__stdcall *)(DWORD)) *)0x0054d14c) /* KERNEL32.DLL!GetStdHandle via IAT */
#define WriteFile (*(__typeof__(BOOL (__stdcall *)(HANDLE, LPCVOID, DWORD, LPDWORD, LPOVERLAPPED)) *)0x0054d0fc) /* KERNEL32.DLL!WriteFile via IAT */
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_00543700 1
void __cdecl rb_00543700(int param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  CHAR *pCVar10;
  char *pcVar11;
  uchar _fr[0x1b0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef DWORD _t_local_1a8;
  typedef char _t_local_1a4[100];
  typedef char _t_acStack_140[60];
  typedef CHAR _t_local_104[260];
#define local_1a8 (*(_t_local_1a8 *)(_fr + 0x0))
#define local_1a4 (*(_t_local_1a4 *)(_fr + 0x4))
#define acStack_140 (*(_t_acStack_140 *)(_fr + 0x68))
#define local_104 (*(_t_local_104 *)(_fr + 0xa4))
  
  piVar2 = &DAT_005770d8;
  iVar8 = 0;
  do {
    if (param_1 == *piVar2) break;
    piVar2 = piVar2 + 2;
    iVar8 = iVar8 + 1;
  } while (piVar2 < &DAT_00577168);
  if (param_1 == (&DAT_005770d8)[iVar8 * 2]) {
    if ((DAT_005d5240 == 1) || ((DAT_005d5240 == 0 && (DAT_00574964 == 1)))) {
      if ((DAT_005d6a20 == 0) ||
         (hFile = *(HANDLE *)(DAT_005d6a20 + 0x48), hFile == (HANDLE)0xffffffff)) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar7 = *(char **)(iVar8 * 8 + 0x5770dc);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,pcVar7,~uVar5 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
      if (DVar3 == 0) {
        pcVar7 = ((char *)0x0054f3dc);
        pCVar10 = local_104;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pCVar10 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pCVar10 = pCVar10 + 4;
        }
        *(undefined2 *)pCVar10 = *(undefined2 *)pcVar7;
        pCVar10[2] = pcVar7[2];
      }
      uVar5 = 0xffffffff;
      pcVar7 = local_104;
      pcVar9 = local_104;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (0x3c < ~uVar5) {
        uVar5 = 0xffffffff;
        pcVar7 = local_104;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pcVar7 = acStack_140 + ~uVar5;
        _strncpy(pcVar7,((char *)0x0054f3d8),3);
      }
      pcVar9 = ((char *)0x0054f3bc);
      pcVar11 = local_1a4;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      *(undefined2 *)pcVar11 = *(undefined2 *)pcVar9;
      uVar5 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = ((char *)0x0054f3b8);
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = *(char **)(iVar8 * 8 + 0x5770dc);
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar8 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_005470d0(local_1a4,((char *)0x0054f390),0x12010);
      return;
    }
  }
  return;
#undef local_1a8
#undef local_1a4
#undef acStack_140
#undef local_104
}
