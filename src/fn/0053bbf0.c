/* Rebuilt from lomse.exe FUN_0053bbf0 @ 0x0053bbf0 (125 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055e260 (*(undefined2 *)0x0055e260)
#define DAT_005d5218 (*(undefined1 *)0x005d5218)
#define DAT_005d5228 (*(undefined1 *)0x005d5228)
#define FUN_00542020 ((char * (__cdecl *)(uint, char *, uint))0x00542020)
#define GetCurrentProcessId ((DWORD (__stdcall *)(void))0x00542040) /* thunk -> KERNEL32.DLL!GetCurrentProcessId */
#define _DAT_00573464 (*(undefined2 *)0x00573464)

#define LOM_SELF_0053bbf0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_0053bbf0(int param_1)

{
  char cVar1;
  char *pcVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  
  pcVar6 = &DAT_005d5218;
  if (param_1 != 0) {
    pcVar6 = &DAT_005d5228;
  }
  *(undefined2 *)pcVar6 = _DAT_00573464;
  pcVar2 = pcVar6 + 1;
  if ((*pcVar6 != '\\') && (*pcVar6 != '/')) {
    *pcVar2 = '\\';
    pcVar2 = pcVar6 + 2;
  }
  if (param_1 == 0) {
    *pcVar2 = 's';
  }
  else {
    *pcVar2 = 't';
  }
  pcVar2 = pcVar2 + 1;
  uVar8 = 0x20;
  DVar3 = GetCurrentProcessId();
  FUN_00542020(DVar3,pcVar2,uVar8);
  uVar8 = 0xffffffff;
  pcVar2 = (char *)&DAT_0055e260;
  do {
    pcVar7 = pcVar2;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar4 = -1;
  do {
    pcVar2 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar2 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar2;
  } while (cVar1 != '\0');
  pcVar6 = pcVar7 + -uVar8;
  pcVar2 = pcVar2 + -1;
  for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return;
}
