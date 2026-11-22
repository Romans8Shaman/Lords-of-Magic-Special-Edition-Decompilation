/* Rebuilt from lomse.exe FUN_00477c70 @ 0x00477c70 (340 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055aed8 (*(undefined *)0x0055aed8)
#define DAT_0055aee0 (*(undefined1 *)0x0055aee0)
#define DAT_00579274 (*(undefined1 *)0x00579274)
#define GetModuleFileNameA (*(__typeof__(DWORD (__stdcall *)(HMODULE, LPSTR, DWORD)) *)0x0054d048) /* KERNEL32.DLL!GetModuleFileNameA via IAT */
#define ShellExecuteExA (*(__typeof__(BOOL (__stdcall *)(SHELLEXECUTEINFOA *)) *)0x0054d208) /* SHELL32.DLL!ShellExecuteExA via IAT */
#define _strrchr ((char * (__cdecl *)(char *, int))0x0053aa70)
#define s_DPStub_exe_0055aee4 (*(char (*)[])0x0055aee4)

#define LOM_SELF_00477c70 1
undefined4 __cdecl rb_00477c70(char *param_1)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uchar _fr[0x248] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef SHELLEXECUTEINFOA _t_local_23c;
  typedef CHAR _t_local_200[256];
  typedef char _t_local_100[256];
#define local_23c (*(_t_local_23c *)(_fr + 0x4))
#define local_200 (*(_t_local_200 *)(_fr + 0x40))
#define local_100 (*(_t_local_100 *)(_fr + 0x140))
  
  DVar2 = GetModuleFileNameA((HMODULE)0x0,local_200,0x100);
  if (DVar2 == 0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar3 = local_200;
  do {
    pcVar9 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar9 + -uVar5;
  pcVar9 = local_100;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  pcVar3 = _strrchr(local_200,0x5c);
  if (pcVar3 != (char *)0x0) {
    pcVar3[1] = '\0';
  }
  uVar5 = 0xffffffff;
  pcVar3 = s_DPStub_exe_0055aee4;
  do {
    pcVar9 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_23c.cbSize = 0x3c;
  iVar7 = -1;
  pcVar3 = local_200;
  do {
    pcVar8 = pcVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar3 = pcVar9 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  local_23c.fMask = 0x40;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = &DAT_0055aee0;
  do {
    pcVar9 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_23c.hwnd = (HWND)0x0;
  iVar7 = -1;
  pcVar3 = local_100;
  do {
    pcVar8 = pcVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar3 = pcVar9 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  local_23c.lpVerb = &DAT_0055aed8;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar3 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar3 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar3;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_23c.lpDirectory = &DAT_00579274;
  iVar7 = -1;
  pcVar9 = local_100;
  do {
    pcVar8 = pcVar9;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  local_23c.lpFile = local_200;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  local_23c.lpParameters = local_100;
  local_23c.nShow = 0;
  local_23c.hInstApp = (HINSTANCE)0x0;
  local_23c.hProcess = (HANDLE)0x0;
  BVar4 = ShellExecuteExA(&local_23c);
  return (uint)(BVar4 != 0);
#undef local_23c
#undef local_200
#undef local_100
}
